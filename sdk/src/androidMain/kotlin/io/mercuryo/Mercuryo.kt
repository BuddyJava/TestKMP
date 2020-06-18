package io.mercuryo

import android.content.Context
import com.russhwolf.settings.AndroidSettings
import com.russhwolf.settings.Settings
import io.mercuryo.storage.Storage
import io.mercuryo.util.HttpClientFactory
import io.mercuryo.util.createHttpEngine

fun Mercuryo.Companion.create(
    context: Context,
    isDebug: Boolean = true
) = Mercuryo(
    isDebug = isDebug,
    httpClientFactory = HttpClientFactory { cacheSize, timeout ->
        createHttpEngine(
            context = context,
            cacheSize = cacheSize,
            timeout = timeout,
            isDebug = isDebug
        )
    },
    storage = Storage(
        settings = AndroidSettings(
            context.getSharedPreferences(
                "mercuryo",
                Context.MODE_PRIVATE
            )
        )
    )
)