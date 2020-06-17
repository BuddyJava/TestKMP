package io.mercuryo.server

import io.mercuryo.entity.Transaction
import io.mercuryo.entity.VerifyMetaData

internal interface Api {
    companion object {
        const val API_VERSION = "/v1.5"

        const val SIGN_IN_PATH = "user/login"
        const val SIGN_UP_PATH = "user/signup"
        const val RECOVER = "user/recover"
        const val WITHDRAW = "withdraw"
        const val CHANGE_PASSWORD = "user/change-password"
        const val CHANGE_PHONE = "user/change-phone"
        const val CHANGE_EMAIL = "user/change-email"

    }

    suspend fun signIn(login: String, password: String): VerifyMetaData

    suspend fun getTransactions(
        type: String?,
        limit: Int?,
        offset: Int?,
        currency: String?
    ): List<Transaction>
}