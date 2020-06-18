package io.mercuryo.storage

import com.russhwolf.settings.Settings
import com.russhwolf.settings.set
import io.mercuryo.auth.AuthHolder

class Storage(
    private val settings: Settings
) : AuthHolder {
    override var authToken: String?
        get() = settings.getStringOrNull("token")
        set(value) {
            settings["token"] = value
        }

}