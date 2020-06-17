package io.mercuryo.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
class VerifyMetaData(
    @SerialName("token") val token: String? = null,
    @SerialName("key") val key: String? = null,
    @SerialName("code_length") private val _codeLength: Int? = null,
    @SerialName("next") val next: String? = null,
    @SerialName("timeout") private val _timeout: Int? = null,
    @SerialName("masked") private val _source: String? = null,
    @SerialName("edit_token") val editToken: String? = null
) {

    val codeLength: Int
        get() = _codeLength ?: 4

    val timeout: Int
        get() = _timeout ?: 20

    val source: String
        get() = _source ?: ""

}