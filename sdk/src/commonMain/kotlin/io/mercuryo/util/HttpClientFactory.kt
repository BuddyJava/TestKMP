package io.mercuryo.util

import com.github.aakira.napier.Napier
import io.ktor.client.HttpClient
import io.ktor.client.engine.HttpClientEngine
import io.ktor.client.features.auth.Auth
import io.ktor.client.features.auth.AuthProvider
import io.ktor.client.features.defaultRequest
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.features.logging.LogLevel
import io.ktor.client.features.logging.Logger
import io.ktor.client.features.logging.Logging
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.header
import io.ktor.http.auth.HttpAuthHeader
import kotlinx.serialization.json.Json

class HttpClientFactory(
    private val engineFactory: (cacheSize: Long, timeout: Long) -> HttpClientEngine
) {
    fun create(
        json: Json,
        token: String,
        enableLogging: Boolean
    ): HttpClient = HttpClient(engineFactory(CACHE_SIZE_BYTES, TIMEOUT)) {
        defaultRequest {
            header("Accept", "application/json")
            header("Content-Type", "application/json; charset=UTF-8")
            header("User-Agent", "io.staging.mercurio.cryptoboy")
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
                    request.headers["X-Api-Token"] = token
                }
            })
        }
    }

    companion object {
        private const val CACHE_SIZE_BYTES = 20 * 1024L
        private const val TIMEOUT = 30L
    }
}