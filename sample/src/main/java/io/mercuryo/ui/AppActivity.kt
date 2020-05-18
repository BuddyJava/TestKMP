package io.mercuryo.ui

import android.os.Bundle
import android.widget.TextView
import androidx.core.view.isGone
import androidx.core.view.isVisible
import androidx.fragment.app.FragmentActivity
import androidx.lifecycle.lifecycleScope
import io.mercuryo.App
import io.mercuryo.R
import io.mercuryo.entity.Transaction
import kotlinx.android.synthetic.main.activity_app.*
import kotlinx.coroutines.launch

class AppActivity : FragmentActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.activity_app)

        lifecycleScope.launch {
            progress.isVisible = true
            val transactions: List<Transaction> = App.mercuryoWallet.getTransactions(
                currency = "BTC"
            )

            progress.isGone = true
            findViewById<TextView>(R.id.text).text = transactions.toString()
        }

    }
}