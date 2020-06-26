package io.mercuryo.util

import android.content.Context
import io.ktor.client.engine.HttpClientEngine
import io.ktor.client.engine.okhttp.OkHttp
import okhttp3.Cache
import okhttp3.logging.HttpLoggingInterceptor
import java.util.concurrent.TimeUnit

actual object Platform {
    actual val name: String = "android"
    internal actual fun currentTimeMillis(): Long = System.currentTimeMillis()
}


internal fun createHttpEngine(
    context: Context,
    cacheSize: Long,
    timeout: Long,
    isDebug: Boolean
): HttpClientEngine = OkHttp.create {
    config {
        retryOnConnectionFailure(true)
        cache(Cache(context.cacheDir, cacheSize))
        if (isDebug) {
            addNetworkInterceptor(
                HttpLoggingInterceptor()
                    .apply {
                        level = HttpLoggingInterceptor.Level.BODY
                    }
            )
        }
        connectTimeout(timeout, TimeUnit.SECONDS)
        readTimeout(timeout, TimeUnit.SECONDS)
    }
}