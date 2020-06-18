package io.mercuryo.auth

import com.russhwolf.settings.Settings
import io.mercuryo.entity.VerifyMetaData
import io.mercuryo.server.Api
import io.mercuryo.storage.Storage

internal class AuthManager(
    private val api: Api,
    private val storage: Storage
) {
    val isAuth: Boolean
        get() = storage.authToken.isNullOrBlank().not()


    suspend fun signIn(login: String, password: String): VerifyMetaData {
        return api.signIn(login, password)
    }

}