package io.mercuryo

import android.app.Application
import com.github.aakira.napier.DebugAntilog
import com.github.aakira.napier.Napier

class App : Application() {

    override fun onCreate() {
        super.onCreate()

        initLogger()
        mercuryoWallet = MercuryoWallet.create(this)

    }

    private fun initLogger() {
        if (BuildConfig.DEBUG) {
            Napier.base(DebugAntilog())
        }
    }

    companion object {
        lateinit var mercuryoWallet: MercuryoWallet
            private set
    }
}