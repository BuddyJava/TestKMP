package io.mercuryo.server

import io.ktor.client.HttpClient
import io.ktor.client.request.get
import io.ktor.client.request.parameter
import io.ktor.http.takeFrom
import io.mercuryo.entity.Transaction
import io.mercuryo.server.Api.Companion.API_VERSION

class ApiImpl(
    endpoint: String,
    private val httpClient: HttpClient
) : Api {

    private val baseUrl = "$endpoint$API_VERSION"

    override suspend fun getTransactions(
        type: String?,
        limit: Int?,
        offset: Int?,
        currency: String?
    ): List<Transaction> = httpClient.get {
        url {
            takeFrom("$baseUrl/transactions")
            parameter("type", type)
            parameter("limit", limit)
            parameter("offset", offset)
            parameter("currency", currency)
        }
    }
}