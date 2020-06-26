package io.mercuryo.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
class Wallet(
    @SerialName("currency") val currency: String,
    @SerialName("balance") val balance: Double,
    @SerialName("fiat_currency") val fiatCurrency: String,
    @SerialName("fiat_balance") val fiatBalance: Double
)
