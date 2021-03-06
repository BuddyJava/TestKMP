package io.mercuryo

import android.content.Context
import io.mercuryo.util.HttpClientFactory
import io.mercuryo.util.createHttpEngine

fun MercuryoWallet.Companion.create(
    context: Context,
    isDebug: Boolean = true
) = MercuryoWallet(
    isDebug,
    HttpClientFactory { cacheSize, timeout ->
        createHttpEngine(
            context = context,
            cacheSize = cacheSize,
            timeout = timeout,
            isDebug = isDebug
        )
    }
)