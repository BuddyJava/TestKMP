package io.mercuryo.entity

import kotlinx.serialization.*

@Serializable
class ResponseBody<T : Any>(
    val status: Int? = null,
    val code: Int? = null,
    val data: T,
    val message: String? = null
)

@Serializer(forClass = ResponseBody::class)
class ResponseBodySerializer<T : Any>(private val dataSerializer: KSerializer<T>) :
    KSerializer<ResponseBody<T>> {
    override val descriptor: SerialDescriptor = SerialDescriptor("ResponseBodySerializer") {
        val dataDescriptor = dataSerializer.descriptor
        element("data", dataDescriptor, isOptional = true)
        element("status", dataDescriptor)
        element("code", dataDescriptor)
        element("message", dataDescriptor)
    }

    override fun serialize(encoder: Encoder, value: ResponseBody<T>) {
        val out = encoder.beginStructure(descriptor)
        out.encodeSerializableElement(descriptor, 0, dataSerializer, value.data)

        value.status?.let { status -> out.encodeIntElement(descriptor, 1, status) }
        value.code?.let { code -> out.encodeIntElement(descriptor, 2, code) }
        value.message?.let { message -> out.encodeStringElement(descriptor, 3, message) }

        out.endStructure(descriptor)
    }

    override fun deserialize(decoder: Decoder): ResponseBody<T> {
        val inp = decoder.beginStructure(descriptor)
        lateinit var data: T
        var status: Int? = null
        var code: Int? = null
        var message: String? = null
        loop@ while (true) {
            when (val i = inp.decodeElementIndex(descriptor)) {
                CompositeDecoder.READ_DONE -> break@loop
                0 -> data = inp.decodeSerializableElement(descriptor, i, dataSerializer)
                1 -> status = inp.decodeIntElement(descriptor, i)
                2 -> code = inp.decodeIntElement(descriptor, i)
                3 -> message = inp.decodeStringElement(descriptor, i)
                else -> throw SerializationException("Unknown index $i")
            }
        }
        inp.endStructure(descriptor)

        return ResponseBody(status, code, data, message)
    }
}