package io.mercuryo

import io.mercuryo.auth.AuthManager
import io.mercuryo.entity.Transaction
import io.mercuryo.entity.VerifyMetaData
import io.mercuryo.server.Api
import io.mercuryo.server.ApiImpl
import io.mercuryo.storage.Storage
import io.mercuryo.util.HttpClientFactory
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonConfiguration

class Mercuryo internal constructor(
    private val isDebug: Boolean,
    private val httpClientFactory: HttpClientFactory,
    private val storage: Storage
) {

    private val endpoint = "https://api.mrcr.io"

    private val json = Json(
        JsonConfiguration.Stable.copy(
            ignoreUnknownKeys = true,
            isLenient = true,
            encodeDefaults = false
        )
    )

    private val api: Api by lazy {
        ApiImpl(
            endpoint,
            httpClientFactory.create(
                json = json,
                holder = storage,
                enableLogging = isDebug
            )
        )
    }

    private val authManager: AuthManager by lazy {
        AuthManager(api, storage)
    }

    suspend fun signIn(login: String, password: String): VerifyMetaData {
        return authManager.signIn(login, password)
    }

    /**
     * Function for receiving transactions list for a specific crypto currency.
     * @param type the transaction type filtering (deposit, withdraw, buy, sell, referral).
     * @param limit the count transactions response, if limit equals null,
     * then default server response value 20.
     * @param offset the start offset transactions list, default server response value 0.
     * @param currency the crypto currency transaction filtering, if there is no currency,
     * a list is returned for all currencies.
     *
     * @return filtered transaction list
     */
    suspend fun getTransactions(
        type: String? = null,
        limit: Int = defaultPageSize,
        offset: Int = 0,
        currency: String? = null
    ): List<Transaction> {
        return api.getTransactions(type, limit, offset, currency)
    }


    companion object {
        const val defaultPageSize: Int = 20
    }
}