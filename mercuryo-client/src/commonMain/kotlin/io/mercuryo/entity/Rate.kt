package io.mercuryo.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
class Rate(
    @SerialName("from") val from: String,
    @SerialName("to") val to: String,
    @SerialName("type") val type: String,
    @SerialName("rate") val rate: Double
)

@Serializable
class ConverterRate(
    @SerialName("token") private val _token: String?,
    @SerialName("currency") val currency: String,
    @SerialName("amount") val amount: String,
    @SerialName("fiat_currency") val fiatCurrency: String,
    @SerialName("fiat_amount") val fiatAmount: Double
) {
    val token: String
        get() = _token ?: ""
}