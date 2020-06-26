package io.mercuryo.util

import com.github.aakira.napier.Napier
import io.ktor.client.HttpClient
import io.ktor.client.engine.HttpClientEngine
import io.ktor.client.features.*
import io.ktor.client.features.auth.Auth
import io.ktor.client.features.auth.AuthProvider
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.features.logging.LogLevel
import io.ktor.client.features.logging.Logger
import io.ktor.client.features.logging.Logging
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.statement.HttpResponse
import io.ktor.http.auth.HttpAuthHeader
import io.ktor.utils.io.readUTF8Line
import io.mercuryo.auth.AuthHolder
import io.mercuryo.server.error.MercuryoException
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonElement

class HttpClientFactory(
    private val engineFactory: (cacheSize: Long, timeout: Long) -> HttpClientEngine
) {
    fun create(
        json: Json,
        holder: AuthHolder,
        enableLogging: Boolean
    ): HttpClient = HttpClient(engineFactory(CACHE_SIZE_BYTES, TIMEOUT)) {
        HttpResponseValidator {
            validateResponse { response: HttpResponse ->
                val status = response.status.value
                when (status) {
                    in 300..399 -> throw RedirectResponseException(response)
                    in 400..499 -> throw createClientRequestException(json, response)
                    in 500..599 -> throw ServerResponseException(response)
                }

                if (status >= 600) {
                    throw ResponseException(response)
                }
            }
        }
        expectSuccess = false

        install(UserAgent) {
            agent = "io.staging.mercurio.cryptoboy"
        }
        if (enableLogging) {
            install(Logging) {
                level = LogLevel.ALL
                logger = object : Logger {
                    override fun log(message: String) {
                        Napier.v(tag = "HttpClient", message = message)
                    }
                }
            }
        }
        install(JsonFeature) {
            serializer = KotlinxSerializer(json)
        }
        install(Auth) {
            providers.add(object : AuthProvider {
                override val sendWithoutRequest = true
                override fun isApplicable(auth: HttpAuthHeader) = true

                override suspend fun addRequestHeaders(request: HttpRequestBuilder) {
                    holder.authToken?.let { token ->
                        request.headers["X-Api-Token"] = token
                    }
                }
            })
        }
    }

    private suspend fun createClientRequestException(
        json: Json,
        response: HttpResponse
    ): Throwable {
        val status: Int = response.status.value
        var message: String? = null
        var code: Int? = null
        var data: Map<String, Any>? = null
        response.content.readUTF8Line()?.also { errorString ->
            try {
                val body: Map<String, JsonElement> =
                    json.parseJson(errorString).jsonObject.content

                message = body["message"]?.primitive?.contentOrNull
                code = body["code"]?.primitive?.intOrNull
                data = body["data"]?.jsonObject?.content
            } catch (err: Throwable) {
                Napier.e("Response not parsed", err)
            }
        }
        throw MercuryoException(status, code ?: status, message ?: "", data)
    }

    companion object {
        private const val CACHE_SIZE_BYTES = 20 * 1024L
        private const val TIMEOUT = 30L
    }
}