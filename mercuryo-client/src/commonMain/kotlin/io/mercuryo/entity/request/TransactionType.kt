package io.mercuryo.entity.request

internal sealed class TransactionType(val value: String) {
    object TopUp : TransactionType("buy")
    object Sell : TransactionType("sell")
    object Withdraw : TransactionType("withdraw")
}