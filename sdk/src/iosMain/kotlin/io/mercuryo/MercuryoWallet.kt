package io.mercuryo

import com.github.aakira.napier.DebugAntilog
import com.github.aakira.napier.Napier
import io.mercuryo.entity.Transaction
import io.mercuryo.util.HttpClientFactory
import io.mercuryo.util.MainLoopDispatcher
import io.mercuryo.util.createHttpEngine
import io.mercuryo.util.wrap
import kotlinx.coroutines.CoroutineScope

class IMercuryoWallet(
    isDebug: Boolean
) : CoroutineScope by CoroutineScope(MainLoopDispatcher) {
    init {
        if (isDebug) Napier.base(DebugAntilog())
    }

    private val wallet = MercuryoWallet(
        isDebug,
        HttpClientFactory { cacheSize, timeout -> createHttpEngine(cacheSize, timeout) }
    )

    /**
     * Function for receiving transactions list for a specific crypto currency.
     * @param type the transaction type filtering (deposit, withdraw, buy, sell, referral).
     * @param limit the count transactions response, if limit equals null,
     * then default server response value 20.
     * @param offset the start offset transactions list, default server response value 0.
     * @param currency the crypto currency transaction filtering, if there is no currency,
     * a list is returned for all currencies.
     *
     * @return filtered transaction list
     */
    fun getTransactions(
        type: String? = null,
        limit: Int = MercuryoWallet.defaultPageSize,
        offset: Int = 0,
        currency: String? = null,
        callback: (result: List<Transaction>?, error: Exception?) -> Unit
    ) {
        wrap(callback) { wallet.getTransactions(type, limit, offset, currency) }
    }

}
