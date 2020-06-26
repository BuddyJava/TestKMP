package io.mercuryo.util

expect object Platform {
    val name: String
    internal fun currentTimeMillis(): Long
}

