package io.mercuryo.auth

import io.mercuryo.entity.VerifyMetaData
import io.mercuryo.server.Api
import io.mercuryo.storage.Storage
import io.mercuryo.util.platform

internal class AuthManager(
    private val api: Api,
    private val storage: Storage
){
    val isAuth: Boolean
        get() = storage.authToken.isNullOrBlank().not()

    suspend fun signIn(login: String, password: String): VerifyMetaData {
        return api.signIn(login, password)
            .saveToken()
    }

    suspend fun signUp(
        countryCode: String,
        phone: String,
        refCode: String?
    ): VerifyMetaData {
        return api.signUp(
            countryCode = countryCode,
            phone = phone,
            refCode = refCode,
            platform = platform
        )
            .saveToken()
    }

    suspend fun verify(
        endpoint: String,
        key: String,
        code: String,
        client: String?,
        editToken: String?
    ): VerifyMetaData {
        return api.verify(
            endpoint = endpoint,
            key = key,
            code = code,
            client = client,
            editToken = editToken
        )
            .saveToken()
    }

    suspend fun sendPersonData(
        firstName: String,
        lastName: String,
        birthDay: String,
        editToken: String? = null
    ): VerifyMetaData {
        return api.sendPersonalData(
            firstName = firstName,
            lastName = lastName,
            birthDay = birthDay,
            editToken = editToken
        )
            .saveToken()
    }

    suspend fun sendEmail(
        email: String,
        editToken: String? = null
    ): VerifyMetaData {
        return api.sendEmail(
            email = email,
            editToken = editToken
        )
            .saveToken()
    }

    fun logout() {
        storage.authToken = null
    }

    private fun VerifyMetaData.saveToken(): VerifyMetaData {
        token?.let { storage.authToken = it }
        return this
    }
}