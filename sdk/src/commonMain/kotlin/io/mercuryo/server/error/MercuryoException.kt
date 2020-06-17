package io.mercuryo.server.error

class MercuryoException(
    val status: Int,
    val code: Int,
    override val message: String,
    val body: Map<String, Any>? = null
) : Throwable()
