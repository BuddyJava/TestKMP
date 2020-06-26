package io.mercuryo.server

import io.mercuryo.entity.*
import io.mercuryo.entity.request.TransactionType

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

    suspend fun signUp(
        countryCode: String,
        phone: String,
        refCode: String? = null,
        platform: String
    ): VerifyMetaData

    suspend fun sendEmail(email: String, editToken: String?): VerifyMetaData

    suspend fun sendPersonalData(
        firstName: String,
        lastName: String,
        birthDay: String,
        editToken: String?
    ): VerifyMetaData

    suspend fun sendNewPassword(password: String, key: String, code: String): VerifyMetaData

    suspend fun recoverAccess(email: String): VerifyMetaData

    suspend fun verify(
        endpoint: String,
        key: String,
        code: String,
        client: String?,
        editToken: String?
    ): VerifyMetaData

    suspend fun resendVerifyCode(key: String): VerifyMetaData

    suspend fun getWallets(): List<Wallet>
    suspend fun getWalletAddress(currency: String): String

    suspend fun getLimits(
        cryptoCurrency: String?,
        fiatCurrency: String?
    ): HashMap<String, HashMap<String, Limit>>

    suspend fun getPublicConvert(
        fromCurrency: String,
        toCurrency: String,
        type: TransactionType,
        amount: Double
    ): ConverterRate

    suspend fun getRate(fromCurrency: String, toCurrency: String, type: TransactionType): Rate

    suspend fun getTransactions(
        type: String?,
        limit: Int?,
        offset: Int?,
        currency: String?
    ): List<Transaction>
}