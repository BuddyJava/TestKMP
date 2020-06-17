package io.mercuryo.server

import io.ktor.client.HttpClient
import io.ktor.client.request.forms.FormDataContent
import io.ktor.client.request.get
import io.ktor.client.request.parameter
import io.ktor.client.request.post
import io.ktor.client.request.url
import io.ktor.http.Parameters
import io.ktor.http.takeFrom
import io.mercuryo.entity.ResponseBody
import io.mercuryo.entity.Transaction
import io.mercuryo.entity.VerifyMetaData
import io.mercuryo.server.Api.Companion.API_VERSION
import io.mercuryo.server.Api.Companion.SIGN_IN_PATH

class ApiImpl(
    endpoint: String,
    private val httpClient: HttpClient
) : Api {

    private val baseUrl = "$endpoint$API_VERSION"

    override suspend fun signIn(login: String, password: String): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/$SIGN_IN_PATH")
            body = FormDataContent(
                Parameters.build {
                    append("username", login)
                    append("password", password)
                }
            )
        }
            .data
    }

    override suspend fun getTransactions(
        type: String?,
        limit: Int?,
        offset: Int?,
        currency: String?
    ): List<Transaction> {
        return httpClient.get<ResponseBody<List<Transaction>>> {
            url {
                takeFrom(urlString = "$baseUrl/transactions")
                parameter("type", type)
                parameter("limit", limit)
                parameter("offset", offset)
                parameter("currency", currency)
            }
        }
            .data
    }
}