package io.mercuryo.server

import io.mercuryo.entity.Transaction

internal interface Api {
    companion object {
        const val API_VERSION = "/v1.6"

        const val MAX_PAGE_SIZE = 100
    }

    suspend fun getTransactions(
        type: String?,
        limit: Int?,
        offset: Int?,
        currency: String?
    ): List<Transaction>
}