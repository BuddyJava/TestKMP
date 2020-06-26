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

    private val url = "https://api.mrcr.io"

    private val json = Json(
        JsonConfiguration.Stable.copy(
            ignoreUnknownKeys = true,
            isLenient = true,
            encodeDefaults = false
        )
    )

    private val api: Api by lazy {
        ApiImpl(
            url = url,
            httpClient = httpClientFactory.create(
                json = json,
                holder = storage,
                enableLogging = isDebug
            )
        )
    }

    private val authManager: AuthManager by lazy {
        AuthManager(api, storage)
    }

    val isAuth: Boolean
        get() = authManager.isAuth

    suspend fun signIn(login: String, password: String): VerifyMetaData {
        return authManager.signIn(
            login = login,
            password = password
        )
    }

    suspend fun verifySignIn(
        verifyType: String,
        key: String,
        code: String,
        editToken: String? = null
    ): VerifyMetaData {
        return authManager.verify(
            endpoint = "${Api.SIGN_IN_PATH}/$verifyType",
            key = key,
            code = code,
            client = null,
            editToken = editToken
        )
    }

    suspend fun signUp(
        countryCode: String,
        phone: String,
        refCode: String? = null
    ): VerifyMetaData {
        return authManager.signUp(
            countryCode = countryCode,
            phone = phone,
            refCode = refCode
        )
    }

    suspend fun verifySignUp(
        verifyType: String,
        key: String,
        code: String,
        editToken: String? = null
    ): VerifyMetaData {
        return authManager.verify(
            endpoint = "${Api.SIGN_UP_PATH}/$verifyType",
            key = key,
            code = code,
            client = null,
            editToken = editToken
        )
    }

    suspend fun resendVerifyCode(key: String): VerifyMetaData {
        return api.resendVerifyCode(key = key)
    }

    suspend fun sendPersonData(
        firstName: String,
        lastName: String,
        birthDay: String,
        editToken: String? = null
    ): VerifyMetaData {
        return authManager.sendPersonData(
            firstName = firstName,
            lastName = lastName,
            birthDay = birthDay,
            editToken = editToken
        )
    }

    suspend fun sendEmail(
        email: String,
        editToken: String? = null
    ): VerifyMetaData {
        return authManager.sendEmail(
            email = email,
            editToken = editToken
        )
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
        return api.getTransactions(
            type = type,
            limit = limit,
            offset = offset,
            currency = currency
        )
    }

    companion object {
        const val defaultPageSize: Int = 20
    }
}