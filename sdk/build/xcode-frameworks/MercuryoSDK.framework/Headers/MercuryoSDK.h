#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MSDKTransaction, MSDKKotlinException, MSDKKotlinEnum, MSDKPaymentSystem, MSDKKotlinArray, MSDKResponseBody, MSDKTxBlockChain, MSDKTxCard, MSDKKtor_client_coreHttpClient, MSDKKotlinx_serialization_runtimeJson, MSDKKotlinThrowable, MSDKKotlinx_serialization_runtimeSerialKind, MSDKKotlinNothing, MSDKKotlinx_serialization_runtimeUpdateMode, MSDKKtor_client_coreHttpClientEngineConfig, MSDKKotlinx_coroutines_coreCoroutineDispatcher, MSDKKtor_client_coreHttpClientConfig, MSDKKtor_client_coreHttpReceivePipeline, MSDKKtor_client_coreHttpRequestPipeline, MSDKKtor_client_coreHttpResponsePipeline, MSDKKtor_client_coreHttpSendPipeline, MSDKKotlinx_serialization_runtimeJsonBuilder, MSDKKotlinx_serialization_runtimeJsonConfiguration, MSDKKotlinx_serialization_runtimeJsonElement, MSDKKtor_client_coreProxyConfig, MSDKKotlinAbstractCoroutineContextElement, MSDKKtor_utilsAttributeKey, MSDKKtor_utilsPipelinePhase, MSDKKtor_utilsPipeline, MSDKKotlinx_serialization_runtimeJsonNull, MSDKKotlinx_serialization_runtimeJsonPrimitive, MSDKKtor_httpUrl, MSDKKtor_httpURLProtocol;

@protocol MSDKKotlinCoroutineContext, MSDKKotlinx_coroutines_coreCoroutineScope, MSDKKotlinComparable, MSDKKotlinx_serialization_runtimeKSerializer, MSDKKotlinx_serialization_runtimeEncoder, MSDKKotlinx_serialization_runtimeSerialDescriptor, MSDKKotlinx_serialization_runtimeSerializationStrategy, MSDKKotlinx_serialization_runtimeDecoder, MSDKKotlinx_serialization_runtimeDeserializationStrategy, MSDKKtor_client_coreHttpClientEngine, MSDKKotlinCoroutineContextElement, MSDKKotlinCoroutineContextKey, MSDKKotlinIterator, MSDKKotlinx_serialization_runtimeCompositeEncoder, MSDKKotlinx_serialization_runtimeSerialModule, MSDKKotlinAnnotation, MSDKKotlinx_serialization_runtimeCompositeDecoder, MSDKKtor_client_coreHttpClientEngineCapability, MSDKKtor_ioCloseable, MSDKKtor_utilsAttributes, MSDKKotlinx_serialization_runtimeSerialFormat, MSDKKotlinx_serialization_runtimeStringFormat, MSDKKotlinx_serialization_runtimeSerialModuleCollector, MSDKKotlinKClass, MSDKKotlinContinuation, MSDKKotlinContinuationInterceptor, MSDKKotlinx_coroutines_coreRunnable, MSDKKtor_client_coreHttpClientFeature, MSDKKotlinSuspendFunction2, MSDKKotlinKDeclarationContainer, MSDKKotlinKAnnotatedElement, MSDKKotlinKClassifier, MSDKKotlinFunction, MSDKKtor_httpParameters, MSDKKotlinMapEntry, MSDKKtor_utilsStringValues;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface MSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MSDKBase (MSDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface MSDKByte : MSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MSDKUByte : MSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MSDKShort : MSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MSDKUShort : MSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MSDKInt : MSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MSDKUInt : MSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MSDKLong : MSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MSDKULong : MSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MSDKFloat : MSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MSDKDouble : MSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MSDKBoolean : MSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IMercuryoWallet")))
@interface MSDKIMercuryoWallet : MSDKBase <MSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithIsDebug:(BOOL)isDebug __attribute__((swift_name("init(isDebug:)"))) __attribute__((objc_designated_initializer));
- (void)getTransactionsType:(NSString * _Nullable)type limit:(int32_t)limit offset:(int32_t)offset currency:(NSString * _Nullable)currency callback:(void (^)(NSArray<MSDKTransaction *> * _Nullable, MSDKKotlinException * _Nullable))callback __attribute__((swift_name("getTransactions(type:limit:offset:currency:callback:)")));
@property (readonly) id<MSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MercuryoWallet")))
@interface MSDKMercuryoWallet : MSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MercuryoWallet.Companion")))
@interface MSDKMercuryoWalletCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) int32_t defaultPageSize __attribute__((swift_name("defaultPageSize")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MSDKKotlinEnum : MSDKBase <MSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(MSDKKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentSystem")))
@interface MSDKPaymentSystem : MSDKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKPaymentSystem *visa __attribute__((swift_name("visa")));
@property (class, readonly) MSDKPaymentSystem *mastercard __attribute__((swift_name("mastercard")));
@property (class, readonly) MSDKPaymentSystem *maestro __attribute__((swift_name("maestro")));
@property (class, readonly) MSDKPaymentSystem *mir __attribute__((swift_name("mir")));
- (int32_t)compareToOther:(MSDKPaymentSystem *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentSystem.Companion")))
@interface MSDKPaymentSystemCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseBody")))
@interface MSDKResponseBody : MSDKBase
- (instancetype)initWithStatus:(MSDKInt * _Nullable)status code:(MSDKInt * _Nullable)code data:(id)data message:(NSString * _Nullable)message __attribute__((swift_name("init(status:code:data:message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MSDKInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) id data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) MSDKInt * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseBody.Companion")))
@interface MSDKResponseBodyCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer>)serializerTypeParamsSerializers:(MSDKKotlinArray *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer>)serializerTypeSerial0:(id<MSDKKotlinx_serialization_runtimeKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol MSDKKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<MSDKKotlinx_serialization_runtimeEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol MSDKKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MSDKKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<MSDKKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol MSDKKotlinx_serialization_runtimeKSerializer <MSDKKotlinx_serialization_runtimeSerializationStrategy, MSDKKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseBodySerializer")))
@interface MSDKResponseBodySerializer : MSDKBase <MSDKKotlinx_serialization_runtimeKSerializer>
- (instancetype)initWithDataSerializer:(id<MSDKKotlinx_serialization_runtimeKSerializer>)dataSerializer __attribute__((swift_name("init(dataSerializer:)"))) __attribute__((objc_designated_initializer));
- (MSDKResponseBody *)deserializeDecoder:(id<MSDKKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (MSDKResponseBody *)patchDecoder:(id<MSDKKotlinx_serialization_runtimeDecoder>)decoder old:(MSDKResponseBody *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<MSDKKotlinx_serialization_runtimeEncoder>)encoder value:(MSDKResponseBody *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction")))
@interface MSDKTransaction : MSDKBase
- (instancetype)initWithAmount:(MSDKDouble * _Nullable)amount updatedAt:(NSString * _Nullable)updatedAt createdAt:(NSString * _Nullable)createdAt currency:(NSString * _Nullable)currency id:(NSString * _Nullable)id parentId:(NSString * _Nullable)parentId fiatCurrency:(NSString * _Nullable)fiatCurrency type:(NSString * _Nullable)type fiatAmount:(MSDKDouble * _Nullable)fiatAmount status:(NSString * _Nullable)status txId:(NSString * _Nullable)txId txBlockChain:(MSDKTxBlockChain * _Nullable)txBlockChain txCard:(MSDKTxCard * _Nullable)txCard __attribute__((swift_name("init(amount:updatedAt:createdAt:currency:id:parentId:fiatCurrency:type:fiatAmount:status:txId:txBlockChain:txCard:)"))) __attribute__((objc_designated_initializer));
- (MSDKDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (MSDKTxBlockChain * _Nullable)component12 __attribute__((swift_name("component12()")));
- (MSDKTxCard * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (MSDKDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MSDKTransaction *)doCopyAmount:(MSDKDouble * _Nullable)amount updatedAt:(NSString * _Nullable)updatedAt createdAt:(NSString * _Nullable)createdAt currency:(NSString * _Nullable)currency id:(NSString * _Nullable)id parentId:(NSString * _Nullable)parentId fiatCurrency:(NSString * _Nullable)fiatCurrency type:(NSString * _Nullable)type fiatAmount:(MSDKDouble * _Nullable)fiatAmount status:(NSString * _Nullable)status txId:(NSString * _Nullable)txId txBlockChain:(MSDKTxBlockChain * _Nullable)txBlockChain txCard:(MSDKTxCard * _Nullable)txCard __attribute__((swift_name("doCopy(amount:updatedAt:createdAt:currency:id:parentId:fiatCurrency:type:fiatAmount:status:txId:txBlockChain:txCard:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) MSDKDouble * _Nullable fiatAmount __attribute__((swift_name("fiatAmount")));
@property (readonly) NSString * _Nullable fiatCurrency __attribute__((swift_name("fiatCurrency")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable parentId __attribute__((swift_name("parentId")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) MSDKTxBlockChain * _Nullable txBlockChain __attribute__((swift_name("txBlockChain")));
@property (readonly) MSDKTxCard * _Nullable txCard __attribute__((swift_name("txCard")));
@property (readonly) NSString * _Nullable txId __attribute__((swift_name("txId")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction.Companion")))
@interface MSDKTransactionCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TxBlockChain")))
@interface MSDKTxBlockChain : MSDKBase
- (instancetype)initWithId:(NSString * _Nullable)id url:(NSString * _Nullable)url address:(NSString * _Nullable)address fee:(MSDKDouble * _Nullable)fee __attribute__((swift_name("init(id:url:address:fee:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MSDKDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MSDKTxBlockChain *)doCopyId:(NSString * _Nullable)id url:(NSString * _Nullable)url address:(NSString * _Nullable)address fee:(MSDKDouble * _Nullable)fee __attribute__((swift_name("doCopy(id:url:address:fee:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) MSDKDouble * _Nullable fee __attribute__((swift_name("fee")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TxBlockChain.Companion")))
@interface MSDKTxBlockChainCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TxCard")))
@interface MSDKTxCard : MSDKBase
- (instancetype)initWithId:(NSString * _Nullable)id _number:(NSString * _Nullable)_number paymentSystem:(MSDKPaymentSystem *)paymentSystem __attribute__((swift_name("init(id:_number:paymentSystem:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MSDKTxCard *)doCopyId:(NSString * _Nullable)id _number:(NSString * _Nullable)_number paymentSystem:(MSDKPaymentSystem *)paymentSystem __attribute__((swift_name("doCopy(id:_number:paymentSystem:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TxCard.Companion")))
@interface MSDKTxCardCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientFactory")))
@interface MSDKHttpClientFactory : MSDKBase
- (instancetype)initWithEngineFactory:(id<MSDKKtor_client_coreHttpClientEngine> (^)(MSDKLong *, MSDKLong *))engineFactory __attribute__((swift_name("init(engineFactory:)"))) __attribute__((objc_designated_initializer));
- (MSDKKtor_client_coreHttpClient *)createJson:(MSDKKotlinx_serialization_runtimeJson *)json token:(NSString *)token enableLogging:(BOOL)enableLogging __attribute__((swift_name("create(json:token:enableLogging:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientFactory.Companion")))
@interface MSDKHttpClientFactoryCompanion : MSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiImpl")))
@interface MSDKApiImpl : MSDKBase
- (instancetype)initWithEndpoint:(NSString *)endpoint httpClient:(MSDKKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(endpoint:httpClient:)"))) __attribute__((objc_designated_initializer));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<MSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MSDKKotlinCoroutineContext>)minusKeyKey:(id<MSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MSDKKotlinCoroutineContext>)plusContext:(id<MSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MSDKKotlinThrowable : MSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MSDKKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface MSDKKotlinException : MSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MSDKKotlinArray : MSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(MSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol MSDKKotlinx_serialization_runtimeEncoder
@required
- (id<MSDKKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(MSDKKotlinArray *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)")));
- (id<MSDKKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor typeSerializers:(MSDKKotlinArray *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MSDKKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MSDKKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol MSDKKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<MSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<MSDKKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()"))) __attribute__((deprecated("Deprecated in the favour of 'annotations' property")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MSDKKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name"))) __attribute__((unavailable("name property deprecated in the favour of serialName")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol MSDKKotlinx_serialization_runtimeDecoder
@required
- (id<MSDKKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor typeParams:(MSDKKotlinArray *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) MSDKKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol MSDKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol MSDKKtor_client_coreHttpClientEngine <MSDKKotlinx_coroutines_coreCoroutineScope, MSDKKtor_ioCloseable>
@required
- (void)installClient:(MSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) MSDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) MSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<MSDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface MSDKKtor_client_coreHttpClient : MSDKBase <MSDKKotlinx_coroutines_coreCoroutineScope, MSDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<MSDKKtor_client_coreHttpClientEngine>)engine userConfig:(MSDKKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (MSDKKtor_client_coreHttpClient *)configBlock:(void (^)(MSDKKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<MSDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<MSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) MSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<MSDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) MSDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) MSDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) MSDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) MSDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) MSDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialFormat")))
@protocol MSDKKotlinx_serialization_runtimeSerialFormat
@required
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeStringFormat")))
@protocol MSDKKotlinx_serialization_runtimeStringFormat <MSDKKotlinx_serialization_runtimeSerialFormat>
@required
- (id _Nullable)parseDeserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("parse(deserializer:string:)")));
- (NSString *)stringifySerializer:(id<MSDKKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("stringify(serializer:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJson")))
@interface MSDKKotlinx_serialization_runtimeJson : MSDKBase <MSDKKotlinx_serialization_runtimeStringFormat>
- (instancetype)initWithBlock:(void (^)(MSDKKotlinx_serialization_runtimeJsonBuilder *))block __attribute__((swift_name("init(block:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Default constructor is deprecated, please specify the desired configuration explicitly or use Json(JsonConfiguration.Default)")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithConfiguration:(MSDKKotlinx_serialization_runtimeJsonConfiguration *)configuration context:(id<MSDKKotlinx_serialization_runtimeSerialModule>)context __attribute__((swift_name("init(configuration:context:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)fromJsonDeserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer json:(MSDKKotlinx_serialization_runtimeJsonElement *)json __attribute__((swift_name("fromJson(deserializer:json:)")));
- (id)fromJsonTree:(MSDKKotlinx_serialization_runtimeJsonElement *)tree __attribute__((swift_name("fromJson(tree:)")));
- (id _Nullable)parseDeserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("parse(deserializer:string:)")));
- (MSDKKotlinx_serialization_runtimeJsonElement *)parseJsonString:(NSString *)string __attribute__((swift_name("parseJson(string:)")));
- (NSString *)stringifySerializer:(id<MSDKKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("stringify(serializer:value:)")));
- (MSDKKotlinx_serialization_runtimeJsonElement *)toJsonValue:(id)value __attribute__((swift_name("toJson(value:)")));
- (MSDKKotlinx_serialization_runtimeJsonElement *)toJsonSerializer:(id<MSDKKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("toJson(serializer:value:)")));
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MSDKKotlinCoroutineContextElement <MSDKKotlinCoroutineContext>
@required
@property (readonly) id<MSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MSDKKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol MSDKKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MSDKKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MSDKKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)encodeUnitElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeUnitElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol MSDKKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<MSDKKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<MSDKKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<MSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MSDKKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<MSDKKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MSDKKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface MSDKKotlinx_serialization_runtimeSerialKind : MSDKBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol MSDKKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:)")));
- (int16_t)decodeShortElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)decodeUnitElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeUnitElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDescriptor:(id<MSDKKotlinx_serialization_runtimeSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MSDKKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)")));
@property (readonly) id<MSDKKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) MSDKKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MSDKKotlinNothing : MSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface MSDKKotlinx_serialization_runtimeUpdateMode : MSDKKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MSDKKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) MSDKKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) MSDKKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(MSDKKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface MSDKKtor_client_coreHttpClientEngineConfig : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property MSDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) MSDKKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MSDKKotlinAbstractCoroutineContextElement : MSDKBase <MSDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MSDKKotlinContinuationInterceptor <MSDKKotlinCoroutineContextElement>
@required
- (id<MSDKKotlinContinuation>)interceptContinuationContinuation:(id<MSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MSDKKotlinx_coroutines_coreCoroutineDispatcher : MSDKKotlinAbstractCoroutineContextElement <MSDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<MSDKKotlinCoroutineContext>)context block:(id<MSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MSDKKotlinCoroutineContext>)context block:(id<MSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MSDKKotlinContinuation>)interceptContinuationContinuation:(id<MSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MSDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (MSDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MSDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol MSDKKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface MSDKKtor_client_coreHttpClientConfig : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MSDKKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(MSDKKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(MSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<MSDKKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(MSDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(MSDKKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MSDKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(MSDKKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(MSDKKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(MSDKKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(MSDKKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(MSDKKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(MSDKKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(MSDKKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(MSDKKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<MSDKKtor_utilsAttributeKey *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MSDKKtor_utilsPipeline : MSDKBase
- (instancetype)initWithPhase:(MSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MSDKKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(MSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));
- (void)insertPhaseAfterReference:(MSDKKtor_utilsPipelinePhase *)reference phase:(MSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(MSDKKtor_utilsPipelinePhase *)reference phase:(MSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(MSDKKtor_utilsPipelinePhase *)phase block:(id<MSDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(MSDKKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<MSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<MSDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface MSDKKtor_client_coreHttpReceivePipeline : MSDKKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(MSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MSDKKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface MSDKKtor_client_coreHttpRequestPipeline : MSDKKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(MSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MSDKKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface MSDKKtor_client_coreHttpResponsePipeline : MSDKKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(MSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MSDKKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface MSDKKtor_client_coreHttpSendPipeline : MSDKKtor_utilsPipeline
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithPhase:(MSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MSDKKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonBuilder")))
@interface MSDKKotlinx_serialization_runtimeJsonBuilder : MSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MSDKKotlinx_serialization_runtimeJsonConfiguration *)buildConfiguration __attribute__((swift_name("buildConfiguration()")));
- (id<MSDKKotlinx_serialization_runtimeSerialModule>)buildModule __attribute__((swift_name("buildModule()")));
@property BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property NSString *indent __attribute__((swift_name("indent")));
@property BOOL isLenient __attribute__((swift_name("isLenient")));
@property BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property id<MSDKKotlinx_serialization_runtimeSerialModule> serialModule __attribute__((swift_name("serialModule")));
@property BOOL serializeSpecialFloatingPointValues __attribute__((swift_name("serializeSpecialFloatingPointValues")));
@property BOOL strictMode __attribute__((swift_name("strictMode"))) __attribute__((unavailable("'strictMode = true' is replaced with 3 new configuration parameters: 'ignoreUnknownKeys = false' to fail if an unknown key is encountered, 'serializeSpecialFloatingPointValues = false' to fail on 'NaN' and 'Infinity' values, 'isLenient = false' to prohibit parsing of any non-compliant or malformed JSON")));
@property BOOL unquoted __attribute__((swift_name("unquoted"))) __attribute__((unavailable("'unquoted' is deprecated in the favour of 'unquotedPrint'")));
@property BOOL unquotedPrint __attribute__((swift_name("unquotedPrint")));
@property BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonConfiguration")))
@interface MSDKKotlinx_serialization_runtimeJsonConfiguration : MSDKBase
- (instancetype)initWithEncodeDefaults:(BOOL)encodeDefaults ignoreUnknownKeys:(BOOL)ignoreUnknownKeys isLenient:(BOOL)isLenient serializeSpecialFloatingPointValues:(BOOL)serializeSpecialFloatingPointValues allowStructuredMapKeys:(BOOL)allowStructuredMapKeys prettyPrint:(BOOL)prettyPrint unquotedPrint:(BOOL)unquotedPrint indent:(NSString *)indent useArrayPolymorphism:(BOOL)useArrayPolymorphism classDiscriminator:(NSString *)classDiscriminator updateMode:(MSDKKotlinx_serialization_runtimeUpdateMode *)updateMode __attribute__((swift_name("init(encodeDefaults:ignoreUnknownKeys:isLenient:serializeSpecialFloatingPointValues:allowStructuredMapKeys:prettyPrint:unquotedPrint:indent:useArrayPolymorphism:classDiscriminator:updateMode:)"))) __attribute__((objc_designated_initializer));
- (MSDKKotlinx_serialization_runtimeJsonConfiguration *)doCopyEncodeDefaults:(BOOL)encodeDefaults ignoreUnknownKeys:(BOOL)ignoreUnknownKeys isLenient:(BOOL)isLenient serializeSpecialFloatingPointValues:(BOOL)serializeSpecialFloatingPointValues allowStructuredMapKeys:(BOOL)allowStructuredMapKeys prettyPrint:(BOOL)prettyPrint unquotedPrint:(BOOL)unquotedPrint indent:(NSString *)indent useArrayPolymorphism:(BOOL)useArrayPolymorphism classDiscriminator:(NSString *)classDiscriminator updateMode:(MSDKKotlinx_serialization_runtimeUpdateMode *)updateMode __attribute__((swift_name("doCopy(encodeDefaults:ignoreUnknownKeys:isLenient:serializeSpecialFloatingPointValues:allowStructuredMapKeys:prettyPrint:unquotedPrint:indent:useArrayPolymorphism:classDiscriminator:updateMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeJsonElement")))
@interface MSDKKotlinx_serialization_runtimeJsonElement : MSDKBase
- (BOOL)containsKey_:(NSString *)key __attribute__((swift_name("contains(key_:)")));
@property (readonly) BOOL isNull __attribute__((swift_name("isNull")));
@property (readonly) NSArray<MSDKKotlinx_serialization_runtimeJsonElement *> *jsonArray __attribute__((swift_name("jsonArray")));
@property (readonly) MSDKKotlinx_serialization_runtimeJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@property (readonly) NSDictionary<NSString *, MSDKKotlinx_serialization_runtimeJsonElement *> *jsonObject __attribute__((swift_name("jsonObject")));
@property (readonly) MSDKKotlinx_serialization_runtimeJsonPrimitive *primitive __attribute__((swift_name("primitive")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol MSDKKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<MSDKKotlinKClass>)kClass serializer:(id<MSDKKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MSDKKotlinKClass>)baseClass actualClass:(id<MSDKKotlinKClass>)actualClass actualSerializer:(id<MSDKKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MSDKKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MSDKKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MSDKKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MSDKKotlinKClass <MSDKKotlinKDeclarationContainer, MSDKKotlinKAnnotatedElement, MSDKKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface MSDKKtor_client_coreProxyConfig : MSDKBase
- (instancetype)initWithUrl:(MSDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol MSDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MSDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol MSDKKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(MSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) MSDKKtor_utilsAttributeKey *key __attribute__((swift_name("key")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MSDKKtor_utilsAttributeKey : MSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MSDKKtor_utilsPipelinePhase : MSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol MSDKKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MSDKKotlinSuspendFunction2 <MSDKKotlinFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeJsonPrimitive")))
@interface MSDKKotlinx_serialization_runtimeJsonPrimitive : MSDKKotlinx_serialization_runtimeJsonElement
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL boolean __attribute__((swift_name("boolean")));
@property (readonly) MSDKBoolean * _Nullable booleanOrNull __attribute__((swift_name("booleanOrNull")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly, getter=double) double double_ __attribute__((swift_name("double_")));
@property (readonly) MSDKDouble * _Nullable doubleOrNull __attribute__((swift_name("doubleOrNull")));
@property (readonly, getter=float) float float_ __attribute__((swift_name("float_")));
@property (readonly) MSDKFloat * _Nullable floatOrNull __attribute__((swift_name("floatOrNull")));
@property (readonly, getter=int) int32_t int_ __attribute__((swift_name("int_")));
@property (readonly) MSDKInt * _Nullable intOrNull __attribute__((swift_name("intOrNull")));
@property (readonly, getter=long) int64_t long_ __attribute__((swift_name("long_")));
@property (readonly) MSDKLong * _Nullable longOrNull __attribute__((swift_name("longOrNull")));
@property (readonly) MSDKKotlinx_serialization_runtimeJsonPrimitive *primitive __attribute__((swift_name("primitive")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeJsonNull")))
@interface MSDKKotlinx_serialization_runtimeJsonNull : MSDKKotlinx_serialization_runtimeJsonPrimitive
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly) MSDKKotlinx_serialization_runtimeJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface MSDKKtor_httpUrl : MSDKBase
- (instancetype)initWithProtocol:(MSDKKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<MSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (MSDKKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<MSDKKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (MSDKKtor_httpUrl *)doCopyProtocol:(MSDKKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<MSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MSDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MSDKKtor_httpURLProtocol : MSDKBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (MSDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MSDKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol MSDKKtor_httpParameters <MSDKKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol MSDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
