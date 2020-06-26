package io.mercuryo.entity

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class Transaction(
    @SerialName("amount") val amount: Double? = null,
    @SerialName("updated_at") val updatedAt: String? = null,
    @SerialName("created_at") val createdAt: String? = null,
    @SerialName("currency") val currency: String? = null,
    @SerialName("id") val id: String? = null,
    @SerialName("parent_id") val parentId: String? = null,
    @SerialName("fiat_currency") val fiatCurrency: String? = null,
    @SerialName("type") val type: String? = null,
    @SerialName("fiat_amount") val fiatAmount: Double? = null,
    @SerialName("status") val status: String? = null,
    @SerialName("txid") val txId: String? = null,
    @SerialName("tx") val txBlockChain: TxBlockChain? = null,
    @SerialName("card") val txCard: TxCard? = null
)

@Serializable
data class TxBlockChain(
    @SerialName("id") val id: String?,
    @SerialName("url") val url: String?,
    @SerialName("address") val address: String?,
    @SerialName("fee") val fee: Double? = null
)

@Serializable
data class TxCard(
    @SerialName("id") val id: String? = null,
    @SerialName("number") private val _number: String? = null,
    @SerialName("payment_system") private val paymentSystem: PaymentSystem
)

@Serializable
enum class PaymentSystem {
    @SerialName("visa")
    VISA,
    @SerialName("mastercard")
    MASTERCARD,
    @SerialName("maestro")
    MAESTRO,
    @SerialName("nspkmir")
    MIR,
}