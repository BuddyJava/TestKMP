package io.mercuryo.server

import io.ktor.client.HttpClient
import io.ktor.client.request.*
import io.ktor.client.request.forms.FormDataContent
import io.ktor.http.Parameters
import io.ktor.http.takeFrom
import io.mercuryo.entity.*
import io.mercuryo.entity.request.TransactionType
import io.mercuryo.server.Api.Companion.API_VERSION
import io.mercuryo.server.Api.Companion.RECOVER
import io.mercuryo.server.Api.Companion.SIGN_IN_PATH
import io.mercuryo.server.Api.Companion.SIGN_UP_PATH

internal class ApiImpl(
    endpoint: String,
    private val httpClient: HttpClient
) : Api {

    private val baseUrl = "$endpoint$API_VERSION"

    //region =================== Auth ===================

    override suspend fun signIn(login: String, password: String): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/$SIGN_IN_PATH")
            body = FormDataContent(
                Parameters.build {
                    append("username", login)
                    append("password", password)
                }
            )
        }
            .data
    }

    override suspend fun signUp(
        countryCode: String,
        phone: String,
        refCode: String?,
        platform: String
    ): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/$SIGN_UP_PATH")
            body = FormDataContent(
                Parameters.build {
                    append("country_code", countryCode)
                    append("phone", phone)
                    refCode?.let { refCode ->
                        append("referral_code", refCode)
                    }
                    append("accept", true.toString())
                    append("utm_medium", platform)
                }
            )
        }
            .data
    }

    override suspend fun sendEmail(email: String, editToken: String?): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/$SIGN_UP_PATH/set-email")
            header("X-Api-Edit-Token", editToken)
            body = FormDataContent(
                Parameters.build {
                    append("email", email)
                }
            )
        }
            .data
    }

    override suspend fun sendPersonalData(
        firstName: String,
        lastName: String,
        birthDay: String,
        editToken: String?
    ): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/$SIGN_UP_PATH/set-personal-data")
            header("X-Api-Edit-Token", editToken)
            body = FormDataContent(
                Parameters.build {
                    append("first_name", firstName)
                    append("last_name", lastName)
                    append("birthday", birthDay)
                }
            )
        }
            .data
    }

    override suspend fun sendNewPassword(
        password: String,
        key: String,
        code: String
    ): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/$SIGN_UP_PATH/set-password")
            body = FormDataContent(
                Parameters.build {
                    append("password", password)
                    append("key", key)
                    append("code", code)
                }
            )
        }
            .data
    }

    override suspend fun recoverAccess(email: String): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/$RECOVER")
            body = FormDataContent(
                Parameters.build {
                    append("email", email)
                }
            )
        }
            .data
    }

    override suspend fun verify(
        endpoint: String,
        key: String,
        code: String,
        client: String?,
        editToken: String?
    ): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/$endpoint")
            header("X-Api-Edit-Token", editToken)
            body = FormDataContent(
                Parameters.build {
                    append("key", key)
                    append("code", code)
                    client?.let { client ->
                        append("client", client)
                    }
                    append("accept", true.toString())
                }
            )
        }
            .data
    }

    override suspend fun resendVerifyCode(key: String): VerifyMetaData {
        return httpClient.post<ResponseBody<VerifyMetaData>> {
            url(urlString = "$baseUrl/verification/resend")
            body = FormDataContent(
                Parameters.build {
                    append("key", key)
                }
            )
        }
            .data
    }

    //endregion

    //region =================== Wallet ===================

    override suspend fun getWallets(): List<Wallet> {
        return httpClient.get<ResponseBody<HashMap<String, Wallet>>> {
            url(urlString = "$baseUrl/wallet")
        }
            .data
            .values
            .toList()
    }

    override suspend fun getWalletAddress(currency: String): String {
        return httpClient.get<ResponseBody<HashMap<String, Any>>> {
            url {
                takeFrom(urlString = "$baseUrl/topup/address")
            }
        }
            .data["address"]
            .let { address -> address as? String ?: "" }
            .toString()
    }

    override suspend fun getLimits(
        cryptoCurrency: String?,
        fiatCurrency: String?
    ): HashMap<String, HashMap<String, Limit>> {
        return httpClient.get<ResponseBody<HashMap<String, HashMap<String, Limit>>>> {
            url {
                takeFrom(urlString = "$baseUrl/wallet/limits")

                parameter("crypto_currency", cryptoCurrency)
                parameter("currency", fiatCurrency)
            }
        }
            .data
    }

    override suspend fun getTransactions(
        type: String?,
        limit: Int?,
        offset: Int?,
        currency: String?
    ): List<Transaction> {
        return httpClient.get<ResponseBody<List<Transaction>>> {
            url {
                takeFrom(urlString = "$baseUrl/transactions")

                parameter("type", type)
                parameter("limit", limit)
                parameter("offset", offset)
                parameter("currency", currency)
            }
        }
            .data
    }

    override suspend fun getPublicConvert(
        fromCurrency: String,
        toCurrency: String,
        type: TransactionType,
        amount: Double
    ): ConverterRate {
        return httpClient.get<ResponseBody<ConverterRate>> {
            url {
                takeFrom(urlString = "$baseUrl/public/convert")

                parameter("from", fromCurrency)
                parameter("to", toCurrency)
                parameter("type", type.value)
                parameter("amount", amount)
            }
        }
            .data
    }

    override suspend fun getRate(
        fromCurrency: String,
        toCurrency: String,
        type: TransactionType
    ): Rate {
        return httpClient.get<ResponseBody<Rate>> {
            url {
                takeFrom(urlString = "$baseUrl/rate")

                parameter("from", fromCurrency)
                parameter("to", toCurrency)
                val actualType: TransactionType = when (type) {
                    TransactionType.Withdraw -> TransactionType.Sell
                    else -> type
                }
                parameter("type", actualType.value)
            }
        }
            .data
    }

    //endregion

}