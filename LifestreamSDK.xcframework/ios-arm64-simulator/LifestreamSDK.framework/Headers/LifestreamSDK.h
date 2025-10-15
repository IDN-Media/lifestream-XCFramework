#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class LSDKApiError, LSDKApiErrorCompanion, LSDKApiResponseDto<T>, LSDKApiResponseDtoCompanion, LSDKApiService, LSDKCreateLinkRequestDto, LSDKCreateLinkRequestDtoCompanion, LSDKEncryptionUtil, LSDKHealth, LSDKHealthCompanion, LSDKHealthStatus, LSDKHttpClientFactory, LSDKKermitLogger, LSDKKermitLoggerCompanion, LSDKKermit_coreBaseLogger, LSDKKermit_coreLogWriter, LSDKKermit_coreSeverity, LSDKKotlinAbstractCoroutineContextElement, LSDKKotlinAbstractCoroutineContextKey<B, E>, LSDKKotlinArray<T>, LSDKKotlinByteArray, LSDKKotlinByteIterator, LSDKKotlinCancellationException, LSDKKotlinEnum<E>, LSDKKotlinEnumCompanion, LSDKKotlinException, LSDKKotlinIllegalArgumentException, LSDKKotlinIllegalStateException, LSDKKotlinKTypeProjection, LSDKKotlinKTypeProjectionCompanion, LSDKKotlinKVariance, LSDKKotlinNothing, LSDKKotlinRuntimeException, LSDKKotlinThrowable, LSDKKotlinUnit, LSDKKotlinx_coroutines_coreCoroutineDispatcher, LSDKKotlinx_coroutines_coreCoroutineDispatcherKey, LSDKKotlinx_io_coreBuffer, LSDKKotlinx_serialization_coreSerialKind, LSDKKotlinx_serialization_coreSerializersModule, LSDKKotlinx_serialization_jsonJsonElement, LSDKKotlinx_serialization_jsonJsonElementCompanion, LSDKKtor_client_coreHttpClient, LSDKKtor_client_coreHttpClientCall, LSDKKtor_client_coreHttpClientCallCompanion, LSDKKtor_client_coreHttpClientConfig<T>, LSDKKtor_client_coreHttpClientEngineConfig, LSDKKtor_client_coreHttpReceivePipeline, LSDKKtor_client_coreHttpReceivePipelinePhases, LSDKKtor_client_coreHttpRequestBuilder, LSDKKtor_client_coreHttpRequestBuilderCompanion, LSDKKtor_client_coreHttpRequestData, LSDKKtor_client_coreHttpRequestPipeline, LSDKKtor_client_coreHttpRequestPipelinePhases, LSDKKtor_client_coreHttpResponse, LSDKKtor_client_coreHttpResponseContainer, LSDKKtor_client_coreHttpResponseData, LSDKKtor_client_coreHttpResponsePipeline, LSDKKtor_client_coreHttpResponsePipelinePhases, LSDKKtor_client_coreHttpSendPipeline, LSDKKtor_client_coreHttpSendPipelinePhases, LSDKKtor_client_coreProxyConfig, LSDKKtor_eventsEventDefinition<T>, LSDKKtor_eventsEvents, LSDKKtor_httpContentType, LSDKKtor_httpContentTypeCompanion, LSDKKtor_httpHeaderValueParam, LSDKKtor_httpHeaderValueWithParameters, LSDKKtor_httpHeaderValueWithParametersCompanion, LSDKKtor_httpHeadersBuilder, LSDKKtor_httpHttpMethod, LSDKKtor_httpHttpMethodCompanion, LSDKKtor_httpHttpProtocolVersion, LSDKKtor_httpHttpProtocolVersionCompanion, LSDKKtor_httpHttpStatusCode, LSDKKtor_httpHttpStatusCodeCompanion, LSDKKtor_httpOutgoingContent, LSDKKtor_httpURLBuilder, LSDKKtor_httpURLBuilderCompanion, LSDKKtor_httpURLProtocol, LSDKKtor_httpURLProtocolCompanion, LSDKKtor_httpUrl, LSDKKtor_httpUrlCompanion, LSDKKtor_utilsAttributeKey<T>, LSDKKtor_utilsGMTDate, LSDKKtor_utilsGMTDateCompanion, LSDKKtor_utilsMonth, LSDKKtor_utilsMonthCompanion, LSDKKtor_utilsPipeline<TSubject, TContext>, LSDKKtor_utilsPipelinePhase, LSDKKtor_utilsStringValuesBuilderImpl, LSDKKtor_utilsTypeInfo, LSDKKtor_utilsWeekDay, LSDKKtor_utilsWeekDayCompanion, LSDKLifestream, LSDKLifestreamConfig, LSDKLifestreamConfigCompanion, LSDKLink, LSDKLinkCompanion, LSDKLinkRequestBuilder, LSDKLink_, LSDKLoggerFactory, LSDKOrganization, LSDKOrganizationCompanion, LSDKOrganization_, LSDKUserMessage, LSDKUserMessageCompanion;

@protocol LSDKHealthRepository, LSDKKermit_coreLoggerConfig, LSDKKermit_coreMutableLoggerConfig, LSDKKotlinAnnotation, LSDKKotlinAutoCloseable, LSDKKotlinComparable, LSDKKotlinContinuation, LSDKKotlinContinuationInterceptor, LSDKKotlinCoroutineContext, LSDKKotlinCoroutineContextElement, LSDKKotlinCoroutineContextKey, LSDKKotlinFunction, LSDKKotlinIterator, LSDKKotlinKAnnotatedElement, LSDKKotlinKClass, LSDKKotlinKClassifier, LSDKKotlinKDeclarationContainer, LSDKKotlinKType, LSDKKotlinMapEntry, LSDKKotlinSequence, LSDKKotlinSuspendFunction2, LSDKKotlinx_coroutines_coreChildHandle, LSDKKotlinx_coroutines_coreChildJob, LSDKKotlinx_coroutines_coreCoroutineScope, LSDKKotlinx_coroutines_coreDisposableHandle, LSDKKotlinx_coroutines_coreFlow, LSDKKotlinx_coroutines_coreFlowCollector, LSDKKotlinx_coroutines_coreJob, LSDKKotlinx_coroutines_coreParentJob, LSDKKotlinx_coroutines_coreRunnable, LSDKKotlinx_coroutines_coreSelectClause, LSDKKotlinx_coroutines_coreSelectClause0, LSDKKotlinx_coroutines_coreSelectInstance, LSDKKotlinx_io_coreRawSink, LSDKKotlinx_io_coreRawSource, LSDKKotlinx_io_coreSink, LSDKKotlinx_io_coreSource, LSDKKotlinx_serialization_coreCompositeDecoder, LSDKKotlinx_serialization_coreCompositeEncoder, LSDKKotlinx_serialization_coreDecoder, LSDKKotlinx_serialization_coreDeserializationStrategy, LSDKKotlinx_serialization_coreEncoder, LSDKKotlinx_serialization_coreKSerializer, LSDKKotlinx_serialization_coreSerialDescriptor, LSDKKotlinx_serialization_coreSerializationStrategy, LSDKKotlinx_serialization_coreSerializersModuleCollector, LSDKKtor_client_coreHttpClientEngine, LSDKKtor_client_coreHttpClientEngineCapability, LSDKKtor_client_coreHttpClientPlugin, LSDKKtor_client_coreHttpRequest, LSDKKtor_httpHeaders, LSDKKtor_httpHttpMessage, LSDKKtor_httpHttpMessageBuilder, LSDKKtor_httpParameters, LSDKKtor_httpParametersBuilder, LSDKKtor_ioByteReadChannel, LSDKKtor_ioCloseable, LSDKKtor_ioJvmSerializable, LSDKKtor_utilsAttributes, LSDKKtor_utilsStringValues, LSDKKtor_utilsStringValuesBuilder, LSDKLifestreamError, LSDKMultiplatform_settings_coroutinesFlowSettings, LSDKMultiplatform_settings_coroutinesSuspendSettings, LSDKSecureStorage;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface LSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface LSDKBase (LSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface LSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface LSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorLSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface LSDKNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface LSDKByte : LSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface LSDKUByte : LSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface LSDKShort : LSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface LSDKUShort : LSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface LSDKInt : LSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface LSDKUInt : LSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface LSDKLong : LSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface LSDKULong : LSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface LSDKFloat : LSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface LSDKDouble : LSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface LSDKBoolean : LSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("KotlinThrowable")))
@interface LSDKKotlinThrowable : LSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (LSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface LSDKKotlinException : LSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface LSDKKotlinRuntimeException : LSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface LSDKKotlinIllegalArgumentException : LSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("LifestreamError")))
@protocol LSDKLifestreamError
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidUrlError")))
@interface LSDKInvalidUrlError : LSDKKotlinIllegalArgumentException <LSDKLifestreamError>
- (instancetype)initWithExpectedPrefix:(NSString *)expectedPrefix __attribute__((swift_name("init(expectedPrefix:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *expectedPrefix __attribute__((swift_name("expectedPrefix")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Lifestream")))
@interface LSDKLifestream : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lifestream __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKLifestream *shared __attribute__((swift_name("shared")));
- (void)configureAppId:(NSString *)appId secretKey:(NSString *)secretKey organization:(NSString *)organization isDebug:(BOOL)isDebug __attribute__((swift_name("configure(appId:secretKey:organization:isDebug:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createLinkBuilder:(void (^)(LSDKLinkRequestBuilder *))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("createLink(builder:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createLinkOnSuccess:(void (^)(NSString *))onSuccess onError:(void (^)(LSDKKotlinThrowable *))onError builder:(void (^)(LSDKLinkRequestBuilder *))builder completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("createLink(onSuccess:onError:builder:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("reset(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resolveDeeplinkUrl:(NSString *)url completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("resolveDeeplink(url:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resolveDeeplinkUrl:(NSString *)url onSuccess:(void (^)(NSString *))onSuccess onError:(void (^)(LSDKKotlinThrowable *))onError completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("resolveDeeplink(url:onSuccess:onError:completionHandler:)")));
@property BOOL isDebug __attribute__((swift_name("isDebug")));
@property (readonly) NSString * _Nullable organizationId __attribute__((swift_name("organizationId")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface LSDKKotlinIllegalStateException : LSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotInitializedError")))
@interface LSDKNotInitializedError : LSDKKotlinIllegalStateException <LSDKLifestreamError>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiService")))
@interface LSDKApiService : LSDKBase
- (instancetype)initWithHttpClient:(LSDKKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(httpClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createLinkRequest:(LSDKCreateLinkRequestDto *)request completionHandler:(void (^)(LSDKApiResponseDto<LSDKLink *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createLink(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHealthStatusWithCompletionHandler:(void (^)(LSDKHealth * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHealthStatus(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLinkSlug:(NSString *)slug orgSlug:(NSString *)orgSlug completionHandler:(void (^)(LSDKApiResponseDto<LSDKLink *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLink(slug:orgSlug:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOrganizationSlug:(NSString *)slug completionHandler:(void (^)(LSDKApiResponseDto<LSDKOrganization *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOrganization(slug:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError")))
@interface LSDKApiError : LSDKBase
- (instancetype)initWithCode:(NSString *)code message:(NSString *)message reason:(NSString *)reason __attribute__((swift_name("init(code:message:reason:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKApiErrorCompanion *companion __attribute__((swift_name("companion")));
- (LSDKApiError *)doCopyCode:(NSString *)code message:(NSString *)message reason:(NSString *)reason __attribute__((swift_name("doCopy(code:message:reason:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiError.Companion")))
@interface LSDKApiErrorCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKApiErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponseDto")))
@interface LSDKApiResponseDto<T> : LSDKBase
- (instancetype)initWithStatus:(int32_t)status data:(T _Nullable)data userMessage:(LSDKUserMessage * _Nullable)userMessage error:(LSDKApiError * _Nullable)error __attribute__((swift_name("init(status:data:userMessage:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKApiResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (LSDKApiResponseDto<T> *)doCopyStatus:(int32_t)status data:(T _Nullable)data userMessage:(LSDKUserMessage * _Nullable)userMessage error:(LSDKApiError * _Nullable)error __attribute__((swift_name("doCopy(status:data:userMessage:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) LSDKApiError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) int32_t status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_message")
*/
@property (readonly) LSDKUserMessage * _Nullable userMessage __attribute__((swift_name("userMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponseDtoCompanion")))
@interface LSDKApiResponseDtoCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKApiResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(LSDKKotlinArray<id<LSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<LSDKKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserMessage")))
@interface LSDKUserMessage : LSDKBase
- (instancetype)initWithTitle:(NSString *)title message:(NSString * _Nullable)message __attribute__((swift_name("init(title:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKUserMessageCompanion *companion __attribute__((swift_name("companion")));
- (LSDKUserMessage *)doCopyTitle:(NSString *)title message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(title:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserMessage.Companion")))
@interface LSDKUserMessageCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKUserMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Health")))
@interface LSDKHealth : LSDKBase
- (instancetype)initWithStatus:(NSString *)status version:(NSString *)version __attribute__((swift_name("init(status:version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKHealthCompanion *companion __attribute__((swift_name("companion")));
- (LSDKHealth *)doCopyStatus:(NSString *)status version:(NSString *)version __attribute__((swift_name("doCopy(status:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (LSDKHealthStatus *)toDomain __attribute__((swift_name("toDomain()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Health.Companion")))
@interface LSDKHealthCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKHealthCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateLinkRequestDto")))
@interface LSDKCreateLinkRequestDto : LSDKBase
- (instancetype)initWithOrgId:(NSString *)orgId targetUrl:(NSString *)targetUrl deepLink:(NSString *)deepLink name:(NSString * _Nullable)name slug:(NSString * _Nullable)slug utmSource:(NSString * _Nullable)utmSource utmMedium:(NSString * _Nullable)utmMedium utmCampaign:(NSString * _Nullable)utmCampaign utmTerm:(NSString * _Nullable)utmTerm utmContent:(NSString * _Nullable)utmContent ogTitle:(NSString * _Nullable)ogTitle ogDescription:(NSString * _Nullable)ogDescription ogImage:(NSString * _Nullable)ogImage expiresAt:(NSString * _Nullable)expiresAt createdBy:(NSString * _Nullable)createdBy __attribute__((swift_name("init(orgId:targetUrl:deepLink:name:slug:utmSource:utmMedium:utmCampaign:utmTerm:utmContent:ogTitle:ogDescription:ogImage:expiresAt:createdBy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKCreateLinkRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (LSDKCreateLinkRequestDto *)doCopyOrgId:(NSString *)orgId targetUrl:(NSString *)targetUrl deepLink:(NSString *)deepLink name:(NSString * _Nullable)name slug:(NSString * _Nullable)slug utmSource:(NSString * _Nullable)utmSource utmMedium:(NSString * _Nullable)utmMedium utmCampaign:(NSString * _Nullable)utmCampaign utmTerm:(NSString * _Nullable)utmTerm utmContent:(NSString * _Nullable)utmContent ogTitle:(NSString * _Nullable)ogTitle ogDescription:(NSString * _Nullable)ogDescription ogImage:(NSString * _Nullable)ogImage expiresAt:(NSString * _Nullable)expiresAt createdBy:(NSString * _Nullable)createdBy __attribute__((swift_name("doCopy(orgId:targetUrl:deepLink:name:slug:utmSource:utmMedium:utmCampaign:utmTerm:utmContent:ogTitle:ogDescription:ogImage:expiresAt:createdBy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_by")
*/
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deep_link")
*/
@property (readonly) NSString *deepLink __attribute__((swift_name("deepLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_at")
*/
@property (readonly) NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og_description")
*/
@property (readonly) NSString * _Nullable ogDescription __attribute__((swift_name("ogDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og_image")
*/
@property (readonly) NSString * _Nullable ogImage __attribute__((swift_name("ogImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og_title")
*/
@property (readonly) NSString * _Nullable ogTitle __attribute__((swift_name("ogTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="org_id")
*/
@property (readonly) NSString *orgId __attribute__((swift_name("orgId")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="target_url")
*/
@property (readonly) NSString *targetUrl __attribute__((swift_name("targetUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_campaign")
*/
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_content")
*/
@property (readonly) NSString * _Nullable utmContent __attribute__((swift_name("utmContent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_medium")
*/
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_source")
*/
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_term")
*/
@property (readonly) NSString * _Nullable utmTerm __attribute__((swift_name("utmTerm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateLinkRequestDto.Companion")))
@interface LSDKCreateLinkRequestDtoCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKCreateLinkRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link")))
@interface LSDKLink : LSDKBase
- (instancetype)initWithId:(NSString *)id orgId:(NSString *)orgId name:(NSString * _Nullable)name slug:(NSString *)slug token:(NSString *)token targetUrl:(NSString *)targetUrl deepLink:(NSString *)deepLink utmSource:(NSString * _Nullable)utmSource utmMedium:(NSString * _Nullable)utmMedium utmCampaign:(NSString * _Nullable)utmCampaign utmTerm:(NSString * _Nullable)utmTerm utmContent:(NSString * _Nullable)utmContent ogTitle:(NSString * _Nullable)ogTitle ogDescription:(NSString * _Nullable)ogDescription ogImage:(NSString * _Nullable)ogImage clickCount:(int32_t)clickCount expireAt:(NSString * _Nullable)expireAt createdAt:(NSString *)createdAt createdBy:(NSString * _Nullable)createdBy __attribute__((swift_name("init(id:orgId:name:slug:token:targetUrl:deepLink:utmSource:utmMedium:utmCampaign:utmTerm:utmContent:ogTitle:ogDescription:ogImage:clickCount:expireAt:createdAt:createdBy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKLinkCompanion *companion __attribute__((swift_name("companion")));
- (LSDKLink *)doCopyId:(NSString *)id orgId:(NSString *)orgId name:(NSString * _Nullable)name slug:(NSString *)slug token:(NSString *)token targetUrl:(NSString *)targetUrl deepLink:(NSString *)deepLink utmSource:(NSString * _Nullable)utmSource utmMedium:(NSString * _Nullable)utmMedium utmCampaign:(NSString * _Nullable)utmCampaign utmTerm:(NSString * _Nullable)utmTerm utmContent:(NSString * _Nullable)utmContent ogTitle:(NSString * _Nullable)ogTitle ogDescription:(NSString * _Nullable)ogDescription ogImage:(NSString * _Nullable)ogImage clickCount:(int32_t)clickCount expireAt:(NSString * _Nullable)expireAt createdAt:(NSString *)createdAt createdBy:(NSString * _Nullable)createdBy __attribute__((swift_name("doCopy(id:orgId:name:slug:token:targetUrl:deepLink:utmSource:utmMedium:utmCampaign:utmTerm:utmContent:ogTitle:ogDescription:ogImage:clickCount:expireAt:createdAt:createdBy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (LSDKLink_ *)toDomain __attribute__((swift_name("toDomain()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="click_count")
*/
@property (readonly) int32_t clickCount __attribute__((swift_name("clickCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_by")
*/
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deep_link")
*/
@property (readonly) NSString *deepLink __attribute__((swift_name("deepLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expire_at")
*/
@property (readonly) NSString * _Nullable expireAt __attribute__((swift_name("expireAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og_description")
*/
@property (readonly) NSString * _Nullable ogDescription __attribute__((swift_name("ogDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og_image")
*/
@property (readonly) NSString * _Nullable ogImage __attribute__((swift_name("ogImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og_title")
*/
@property (readonly) NSString * _Nullable ogTitle __attribute__((swift_name("ogTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="org_id")
*/
@property (readonly) NSString *orgId __attribute__((swift_name("orgId")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="target_url")
*/
@property (readonly) NSString *targetUrl __attribute__((swift_name("targetUrl")));
@property (readonly) NSString *token __attribute__((swift_name("token")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_campaign")
*/
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_content")
*/
@property (readonly) NSString * _Nullable utmContent __attribute__((swift_name("utmContent")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_medium")
*/
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_source")
*/
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="utm_term")
*/
@property (readonly) NSString * _Nullable utmTerm __attribute__((swift_name("utmTerm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.Companion")))
@interface LSDKLinkCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKLinkCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Organization")))
@interface LSDKOrganization : LSDKBase
- (instancetype)initWithId:(NSString *)id slug:(NSString *)slug androidAssetLinks:(LSDKKotlinx_serialization_jsonJsonElement *)androidAssetLinks iosAssociation:(LSDKKotlinx_serialization_jsonJsonElement *)iosAssociation androidStoreUrl:(NSString * _Nullable)androidStoreUrl iosStoreUrl:(NSString * _Nullable)iosStoreUrl isActive:(BOOL)isActive createdAt:(NSString *)createdAt __attribute__((swift_name("init(id:slug:androidAssetLinks:iosAssociation:androidStoreUrl:iosStoreUrl:isActive:createdAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKOrganizationCompanion *companion __attribute__((swift_name("companion")));
- (LSDKOrganization *)doCopyId:(NSString *)id slug:(NSString *)slug androidAssetLinks:(LSDKKotlinx_serialization_jsonJsonElement *)androidAssetLinks iosAssociation:(LSDKKotlinx_serialization_jsonJsonElement *)iosAssociation androidStoreUrl:(NSString * _Nullable)androidStoreUrl iosStoreUrl:(NSString * _Nullable)iosStoreUrl isActive:(BOOL)isActive createdAt:(NSString *)createdAt __attribute__((swift_name("doCopy(id:slug:androidAssetLinks:iosAssociation:androidStoreUrl:iosStoreUrl:isActive:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (LSDKOrganization_ *)toDomain __attribute__((swift_name("toDomain()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="android_assetlinks")
*/
@property (readonly) LSDKKotlinx_serialization_jsonJsonElement *androidAssetLinks __attribute__((swift_name("androidAssetLinks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="android_store_url")
*/
@property (readonly) NSString * _Nullable androidStoreUrl __attribute__((swift_name("androidStoreUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ios_association")
*/
@property (readonly) LSDKKotlinx_serialization_jsonJsonElement *iosAssociation __attribute__((swift_name("iosAssociation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ios_store_url")
*/
@property (readonly) NSString * _Nullable iosStoreUrl __attribute__((swift_name("iosStoreUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_active")
*/
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Organization.Companion")))
@interface LSDKOrganizationCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKOrganizationCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("HealthRepository")))
@protocol LSDKHealthRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHealthStatusWithCompletionHandler:(void (^)(LSDKHealthStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHealthStatus(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HealthRepositoryImpl")))
@interface LSDKHealthRepositoryImpl : LSDKBase <LSDKHealthRepository>
- (instancetype)initWithApiService:(LSDKApiService *)apiService __attribute__((swift_name("init(apiService:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHealthStatusWithCompletionHandler:(void (^)(LSDKHealthStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHealthStatus(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientFactory")))
@interface LSDKHttpClientFactory : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpClientFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKHttpClientFactory *shared __attribute__((swift_name("shared")));
- (LSDKKtor_client_coreHttpClient *)createCustomLogger:(LSDKKermitLogger *)customLogger __attribute__((swift_name("create(customLogger:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerFactory")))
@interface LSDKLoggerFactory : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loggerFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKLoggerFactory *shared __attribute__((swift_name("shared")));
- (LSDKKermitLogger *)createTag:(NSString *)tag __attribute__((swift_name("create(tag:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HealthStatus")))
@interface LSDKHealthStatus : LSDKBase
- (instancetype)initWithStatus:(NSString *)status version:(NSString *)version __attribute__((swift_name("init(status:version:)"))) __attribute__((objc_designated_initializer));
- (LSDKHealthStatus *)doCopyStatus:(NSString *)status version:(NSString *)version __attribute__((swift_name("doCopy(status:version:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifestreamConfig")))
@interface LSDKLifestreamConfig : LSDKBase
- (instancetype)initWithAppId:(NSString *)appId secretKey:(NSString *)secretKey organization:(NSString *)organization organizationId:(NSString *)organizationId __attribute__((swift_name("init(appId:secretKey:organization:organizationId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKLifestreamConfigCompanion *companion __attribute__((swift_name("companion")));
- (LSDKLifestreamConfig *)doCopyAppId:(NSString *)appId secretKey:(NSString *)secretKey organization:(NSString *)organization organizationId:(NSString *)organizationId __attribute__((swift_name("doCopy(appId:secretKey:organization:organizationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *appId __attribute__((swift_name("appId")));
@property (readonly) NSString *organization __attribute__((swift_name("organization")));
@property (readonly) NSString *organizationId __attribute__((swift_name("organizationId")));
@property (readonly) NSString *secretKey __attribute__((swift_name("secretKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifestreamConfig.Companion")))
@interface LSDKLifestreamConfigCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKLifestreamConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link_")))
@interface LSDKLink_ : LSDKBase
- (instancetype)initWithId:(NSString *)id orgId:(NSString *)orgId name:(NSString * _Nullable)name slug:(NSString *)slug targetUrl:(NSString *)targetUrl deepLink:(NSString *)deepLink token:(NSString *)token utmSource:(NSString * _Nullable)utmSource utmMedium:(NSString * _Nullable)utmMedium utmCampaign:(NSString * _Nullable)utmCampaign utmTerm:(NSString * _Nullable)utmTerm utmContent:(NSString * _Nullable)utmContent ogTitle:(NSString * _Nullable)ogTitle ogDescription:(NSString * _Nullable)ogDescription ogImage:(NSString * _Nullable)ogImage clickCount:(int32_t)clickCount expireAt:(NSString * _Nullable)expireAt createdAt:(NSString *)createdAt createdBy:(NSString * _Nullable)createdBy __attribute__((swift_name("init(id:orgId:name:slug:targetUrl:deepLink:token:utmSource:utmMedium:utmCampaign:utmTerm:utmContent:ogTitle:ogDescription:ogImage:clickCount:expireAt:createdAt:createdBy:)"))) __attribute__((objc_designated_initializer));
- (LSDKLink_ *)doCopyId:(NSString *)id orgId:(NSString *)orgId name:(NSString * _Nullable)name slug:(NSString *)slug targetUrl:(NSString *)targetUrl deepLink:(NSString *)deepLink token:(NSString *)token utmSource:(NSString * _Nullable)utmSource utmMedium:(NSString * _Nullable)utmMedium utmCampaign:(NSString * _Nullable)utmCampaign utmTerm:(NSString * _Nullable)utmTerm utmContent:(NSString * _Nullable)utmContent ogTitle:(NSString * _Nullable)ogTitle ogDescription:(NSString * _Nullable)ogDescription ogImage:(NSString * _Nullable)ogImage clickCount:(int32_t)clickCount expireAt:(NSString * _Nullable)expireAt createdAt:(NSString *)createdAt createdBy:(NSString * _Nullable)createdBy __attribute__((swift_name("doCopy(id:orgId:name:slug:targetUrl:deepLink:token:utmSource:utmMedium:utmCampaign:utmTerm:utmContent:ogTitle:ogDescription:ogImage:clickCount:expireAt:createdAt:createdBy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t clickCount __attribute__((swift_name("clickCount")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property (readonly) NSString *deepLink __attribute__((swift_name("deepLink")));
@property (readonly) NSString * _Nullable expireAt __attribute__((swift_name("expireAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable ogDescription __attribute__((swift_name("ogDescription")));
@property (readonly) NSString * _Nullable ogImage __attribute__((swift_name("ogImage")));
@property (readonly) NSString * _Nullable ogTitle __attribute__((swift_name("ogTitle")));
@property (readonly) NSString *orgId __attribute__((swift_name("orgId")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@property (readonly) NSString *targetUrl __attribute__((swift_name("targetUrl")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property (readonly) NSString * _Nullable utmContent __attribute__((swift_name("utmContent")));
@property (readonly) NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property (readonly) NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@property (readonly) NSString * _Nullable utmTerm __attribute__((swift_name("utmTerm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkRequestBuilder")))
@interface LSDKLinkRequestBuilder : LSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property NSString *deepLink __attribute__((swift_name("deepLink")));
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable ogDescription __attribute__((swift_name("ogDescription")));
@property NSString * _Nullable ogImage __attribute__((swift_name("ogImage")));
@property NSString * _Nullable ogTitle __attribute__((swift_name("ogTitle")));
@property NSString *orgId __attribute__((swift_name("orgId")));
@property NSString * _Nullable slug __attribute__((swift_name("slug")));
@property NSString *targetUrl __attribute__((swift_name("targetUrl")));
@property NSString * _Nullable utmCampaign __attribute__((swift_name("utmCampaign")));
@property NSString * _Nullable utmContent __attribute__((swift_name("utmContent")));
@property NSString * _Nullable utmMedium __attribute__((swift_name("utmMedium")));
@property NSString * _Nullable utmSource __attribute__((swift_name("utmSource")));
@property NSString * _Nullable utmTerm __attribute__((swift_name("utmTerm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Organization_")))
@interface LSDKOrganization_ : LSDKBase
- (instancetype)initWithId:(NSString *)id slug:(NSString *)slug androidAssetLinks:(LSDKKotlinx_serialization_jsonJsonElement *)androidAssetLinks iosAssociation:(LSDKKotlinx_serialization_jsonJsonElement *)iosAssociation androidStoreUrl:(NSString * _Nullable)androidStoreUrl iosStoreUrl:(NSString * _Nullable)iosStoreUrl isActive:(BOOL)isActive createdAt:(NSString *)createdAt __attribute__((swift_name("init(id:slug:androidAssetLinks:iosAssociation:androidStoreUrl:iosStoreUrl:isActive:createdAt:)"))) __attribute__((objc_designated_initializer));
- (LSDKOrganization_ *)doCopyId:(NSString *)id slug:(NSString *)slug androidAssetLinks:(LSDKKotlinx_serialization_jsonJsonElement *)androidAssetLinks iosAssociation:(LSDKKotlinx_serialization_jsonJsonElement *)iosAssociation androidStoreUrl:(NSString * _Nullable)androidStoreUrl iosStoreUrl:(NSString * _Nullable)iosStoreUrl isActive:(BOOL)isActive createdAt:(NSString *)createdAt __attribute__((swift_name("doCopy(id:slug:androidAssetLinks:iosAssociation:androidStoreUrl:iosStoreUrl:isActive:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LSDKKotlinx_serialization_jsonJsonElement *androidAssetLinks __attribute__((swift_name("androidAssetLinks")));
@property (readonly) NSString * _Nullable androidStoreUrl __attribute__((swift_name("androidStoreUrl")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) LSDKKotlinx_serialization_jsonJsonElement *iosAssociation __attribute__((swift_name("iosAssociation")));
@property (readonly) NSString * _Nullable iosStoreUrl __attribute__((swift_name("iosStoreUrl")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetHealthStatusUseCase")))
@interface LSDKGetHealthStatusUseCase : LSDKBase
- (instancetype)initWithRepository:(id<LSDKHealthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(LSDKHealthStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncryptionUtil")))
@interface LSDKEncryptionUtil : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)encryptionUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKEncryptionUtil *shared __attribute__((swift_name("shared")));
- (NSString *)decryptEncryptedData:(NSString *)encryptedData key:(NSString *)key __attribute__((swift_name("decrypt(encryptedData:key:)")));
- (NSString *)encryptData:(NSString *)data key:(NSString *)key __attribute__((swift_name("encrypt(data:key:)")));
@end

__attribute__((swift_name("SecureStorage")))
@protocol LSDKSecureStorage
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStringKey:(NSString *)key completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getString(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putStringKey:(NSString *)key value:(NSString *)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putString(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SecureStorageImpl")))
@interface LSDKSecureStorageImpl : LSDKBase <LSDKSecureStorage>
- (instancetype)initWithSettings:(id<LSDKMultiplatform_settings_coroutinesFlowSettings>)settings storageKey:(NSString *)storageKey __attribute__((swift_name("init(settings:storageKey:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStringKey:(NSString *)key completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getString(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putStringKey:(NSString *)key value:(NSString *)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putString(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsFactory")))
@interface LSDKSettingsFactory : LSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<LSDKSecureStorage>)createSettings __attribute__((swift_name("createSettings()")));
@end

@interface LSDKApiResponseDto (Extensions)
- (id _Nullable)toResult __attribute__((swift_name("toResult()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogConfigKt")))
@interface LSDKLogConfigKt : LSDKBase
+ (LSDKKermit_coreSeverity *)getLogLevel __attribute__((swift_name("getLogLevel()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformContext_iosKt")))
@interface LSDKPlatformContext_iosKt : LSDKBase
+ (id)getPlatformContext __attribute__((swift_name("getPlatformContext()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface LSDKKotlinArray<T> : LSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(LSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<LSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface LSDKKotlinCancellationException : LSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol LSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<LSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol LSDKKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol LSDKKtor_ioCloseable <LSDKKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface LSDKKtor_client_coreHttpClient : LSDKBase <LSDKKotlinx_coroutines_coreCoroutineScope, LSDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<LSDKKtor_client_coreHttpClientEngine>)engine userConfig:(LSDKKtor_client_coreHttpClientConfig<LSDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (LSDKKtor_client_coreHttpClient *)configBlock:(void (^)(LSDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<LSDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<LSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<LSDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) LSDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) LSDKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) LSDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) LSDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) LSDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) LSDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol LSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<LSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol LSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<LSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<LSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol LSDKKotlinx_serialization_coreKSerializer <LSDKKotlinx_serialization_coreSerializationStrategy, LSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface LSDKKotlinx_serialization_jsonJsonElement : LSDKBase
@property (class, readonly, getter=companion) LSDKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Kermit_coreBaseLogger")))
@interface LSDKKermit_coreBaseLogger : LSDKBase
- (instancetype)initWithConfig:(id<LSDKKermit_coreLoggerConfig>)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (void)logSeverity:(LSDKKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("log(severity:tag:throwable:message:)")));
- (void)logBlockSeverity:(LSDKKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("logBlock(severity:tag:throwable:message:)")));
- (void)processLogSeverity:(LSDKKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("processLog(severity:tag:throwable:message:)")));
@property (readonly) id<LSDKKermit_coreLoggerConfig> config __attribute__((swift_name("config")));
@property (readonly) id<LSDKKermit_coreMutableLoggerConfig> mutableConfig __attribute__((swift_name("mutableConfig")));
@end

__attribute__((swift_name("KermitLogger")))
@interface LSDKKermitLogger : LSDKKermit_coreBaseLogger
- (instancetype)initWithConfig:(id<LSDKKermit_coreLoggerConfig>)config tag:(NSString *)tag __attribute__((swift_name("init(config:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfig:(id<LSDKKermit_coreLoggerConfig>)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKermitLoggerCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aMessageString:(NSString *)messageString throwable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("a(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aThrowable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("a(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dMessageString:(NSString *)messageString throwable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("d(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dThrowable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("d(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eMessageString:(NSString *)messageString throwable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("e(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eThrowable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("e(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iMessageString:(NSString *)messageString throwable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("i(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iThrowable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("i(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vMessageString:(NSString *)messageString throwable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("v(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vThrowable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("v(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wMessageString:(NSString *)messageString throwable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("w(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wThrowable:(LSDKKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("w(throwable:tag:message:)")));
- (LSDKKermitLogger *)withTagTag:(NSString *)tag __attribute__((swift_name("withTag(tag:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("Multiplatform_settings_coroutinesSuspendSettings")))
@protocol LSDKMultiplatform_settings_coroutinesSuspendSettings
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue completionHandler:(void (^)(LSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBoolean(key:defaultValue:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBooleanOrNullKey:(NSString *)key completionHandler:(void (^)(LSDKBoolean * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getBooleanOrNull(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue completionHandler:(void (^)(LSDKDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDouble(key:defaultValue:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDoubleOrNullKey:(NSString *)key completionHandler:(void (^)(LSDKDouble * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDoubleOrNull(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloatKey:(NSString *)key defaultValue:(float)defaultValue completionHandler:(void (^)(LSDKFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloat(key:defaultValue:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloatOrNullKey:(NSString *)key completionHandler:(void (^)(LSDKFloat * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloatOrNull(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue completionHandler:(void (^)(LSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getInt(key:defaultValue:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIntOrNullKey:(NSString *)key completionHandler:(void (^)(LSDKInt * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getIntOrNull(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue completionHandler:(void (^)(LSDKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLong(key:defaultValue:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLongOrNullKey:(NSString *)key completionHandler:(void (^)(LSDKLong * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLongOrNull(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getString(key:defaultValue:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStringOrNullKey:(NSString *)key completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getStringOrNull(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasKeyKey:(NSString *)key completionHandler:(void (^)(LSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasKey(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)keysWithCompletionHandler:(void (^)(NSSet<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("keys(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putBooleanKey:(NSString *)key value:(BOOL)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putBoolean(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putDoubleKey:(NSString *)key value:(double)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putDouble(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putFloatKey:(NSString *)key value:(float)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putFloat(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putIntKey:(NSString *)key value:(int32_t)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putInt(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putLongKey:(NSString *)key value:(int64_t)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putLong(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putStringKey:(NSString *)key value:(NSString *)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putString(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sizeWithCompletionHandler:(void (^)(LSDKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("size(completionHandler:)")));
@end

__attribute__((swift_name("Multiplatform_settings_coroutinesFlowSettings")))
@protocol LSDKMultiplatform_settings_coroutinesFlowSettings <LSDKMultiplatform_settings_coroutinesSuspendSettings>
@required
- (id<LSDKKotlinx_coroutines_coreFlow>)getBooleanFlowKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBooleanFlow(key:defaultValue:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getBooleanOrNullFlowKey:(NSString *)key __attribute__((swift_name("getBooleanOrNullFlow(key:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getDoubleFlowKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDoubleFlow(key:defaultValue:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getDoubleOrNullFlowKey:(NSString *)key __attribute__((swift_name("getDoubleOrNullFlow(key:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getFloatFlowKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloatFlow(key:defaultValue:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getFloatOrNullFlowKey:(NSString *)key __attribute__((swift_name("getFloatOrNullFlow(key:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getIntFlowKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getIntFlow(key:defaultValue:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getIntOrNullFlowKey:(NSString *)key __attribute__((swift_name("getIntOrNullFlow(key:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getLongFlowKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLongFlow(key:defaultValue:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getLongOrNullFlowKey:(NSString *)key __attribute__((swift_name("getLongOrNullFlow(key:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getStringFlowKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getStringFlow(key:defaultValue:)")));
- (id<LSDKKotlinx_coroutines_coreFlow>)getStringOrNullFlowKey:(NSString *)key __attribute__((swift_name("getStringOrNullFlow(key:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol LSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface LSDKKotlinEnum<E> : LSDKBase <LSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kermit_coreSeverity")))
@interface LSDKKermit_coreSeverity : LSDKKotlinEnum<LSDKKermit_coreSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LSDKKermit_coreSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) LSDKKermit_coreSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) LSDKKermit_coreSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) LSDKKermit_coreSeverity *warn __attribute__((swift_name("warn")));
@property (class, readonly) LSDKKermit_coreSeverity *error __attribute__((swift_name("error")));
@property (class, readonly) LSDKKermit_coreSeverity *assert __attribute__((swift_name("assert")));
+ (LSDKKotlinArray<LSDKKermit_coreSeverity *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LSDKKermit_coreSeverity *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol LSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol LSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<LSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<LSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<LSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<LSDKKotlinCoroutineContext>)minusKeyKey:(id<LSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<LSDKKotlinCoroutineContext>)plusContext:(id<LSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol LSDKKtor_client_coreHttpClientEngine <LSDKKotlinx_coroutines_coreCoroutineScope, LSDKKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(LSDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(LSDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(LSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) LSDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) LSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<LSDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface LSDKKtor_client_coreHttpClientEngineConfig : LSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property LSDKKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property LSDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface LSDKKtor_client_coreHttpClientConfig<T> : LSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LSDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(LSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<LSDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(LSDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(LSDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol LSDKKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol LSDKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(LSDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(LSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(LSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(LSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(LSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(LSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (void)setKey:(LSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (id)takeKey:(LSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(LSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<LSDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface LSDKKtor_eventsEvents : LSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(LSDKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<LSDKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(LSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(LSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface LSDKKtor_utilsPipeline<TSubject, TContext> : LSDKBase
- (instancetype)initWithPhases:(LSDKKotlinArray<LSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(LSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(LSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(LSDKKtor_utilsPipelinePhase *)reference phase:(LSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(LSDKKtor_utilsPipelinePhase *)reference phase:(LSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(LSDKKtor_utilsPipelinePhase *)phase block:(id<LSDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<LSDKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(LSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(LSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(LSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(LSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<LSDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface LSDKKtor_client_coreHttpReceivePipeline : LSDKKtor_utilsPipeline<LSDKKtor_client_coreHttpResponse *, LSDKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LSDKKotlinArray<LSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(LSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface LSDKKtor_client_coreHttpRequestPipeline : LSDKKtor_utilsPipeline<id, LSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LSDKKotlinArray<LSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(LSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface LSDKKtor_client_coreHttpResponsePipeline : LSDKKtor_utilsPipeline<LSDKKtor_client_coreHttpResponseContainer *, LSDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LSDKKotlinArray<LSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(LSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface LSDKKtor_client_coreHttpSendPipeline : LSDKKtor_utilsPipeline<id, LSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(LSDKKotlinArray<LSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(LSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<LSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol LSDKKotlinx_serialization_coreEncoder
@required
- (id<LSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<LSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<LSDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<LSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<LSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) LSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol LSDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<LSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<LSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<LSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) LSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol LSDKKotlinx_serialization_coreDecoder
@required
- (id<LSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<LSDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (LSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<LSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<LSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) LSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface LSDKKotlinx_serialization_jsonJsonElementCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kermit_coreLoggerConfig")))
@protocol LSDKKermit_coreLoggerConfig
@required
@property (readonly) NSArray<LSDKKermit_coreLogWriter *> *logWriterList __attribute__((swift_name("logWriterList")));
@property (readonly) LSDKKermit_coreSeverity *minSeverity __attribute__((swift_name("minSeverity")));
@end

__attribute__((swift_name("Kermit_coreMutableLoggerConfig")))
@protocol LSDKKermit_coreMutableLoggerConfig <LSDKKermit_coreLoggerConfig>
@required
- (void)setLogWriterList:(NSArray<LSDKKermit_coreLogWriter *> *)value __attribute__((swift_name("setLogWriterList(_:)")));
- (void)setMinSeverity:(LSDKKermit_coreSeverity *)value __attribute__((swift_name("setMinSeverity(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitLogger.Companion")))
@interface LSDKKermitLoggerCompanion : LSDKKermitLogger
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfig:(id<LSDKKermit_coreLoggerConfig>)config tag:(NSString *)tag __attribute__((swift_name("init(config:tag:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKermitLoggerCompanion *shared __attribute__((swift_name("shared")));
- (void)aTag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("a(tag:throwable:message:)")));
- (void)addLogWriterLogWriter:(LSDKKotlinArray<LSDKKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("addLogWriter(logWriter:)")));
- (void)dTag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("d(tag:throwable:message:)")));
- (void)eTag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("e(tag:throwable:message:)")));
- (void)iTag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("i(tag:throwable:message:)")));
- (void)setLogWritersLogWriter:(LSDKKotlinArray<LSDKKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("setLogWriters(logWriter:)")));
- (void)setLogWritersLogWriters:(NSArray<LSDKKermit_coreLogWriter *> *)logWriters __attribute__((swift_name("setLogWriters(logWriters:)")));
- (void)setMinSeveritySeverity:(LSDKKermit_coreSeverity *)severity __attribute__((swift_name("setMinSeverity(severity:)")));
- (void)setTagTag:(NSString *)tag __attribute__((swift_name("setTag(tag:)")));
- (void)vTag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("v(tag:throwable:message:)")));
- (void)wTag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("w(tag:throwable:message:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol LSDKKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<LSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface LSDKKotlinEnumCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol LSDKKotlinCoroutineContextElement <LSDKKotlinCoroutineContext>
@required
@property (readonly) id<LSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol LSDKKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface LSDKKtor_client_coreHttpRequestData : LSDKBase
- (instancetype)initWithUrl:(LSDKKtor_httpUrl *)url method:(LSDKKtor_httpHttpMethod *)method headers:(id<LSDKKtor_httpHeaders>)headers body:(LSDKKtor_httpOutgoingContent *)body executionContext:(id<LSDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<LSDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<LSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LSDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<LSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<LSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface LSDKKtor_client_coreHttpResponseData : LSDKBase
- (instancetype)initWithStatusCode:(LSDKKtor_httpHttpStatusCode *)statusCode requestTime:(LSDKKtor_utilsGMTDate *)requestTime headers:(id<LSDKKtor_httpHeaders>)headers version:(LSDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<LSDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<LSDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<LSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) LSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) LSDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) LSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface LSDKKotlinAbstractCoroutineContextElement : LSDKBase <LSDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<LSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<LSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol LSDKKotlinContinuationInterceptor <LSDKKotlinCoroutineContextElement>
@required
- (id<LSDKKotlinContinuation>)interceptContinuationContinuation:(id<LSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<LSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface LSDKKotlinx_coroutines_coreCoroutineDispatcher : LSDKKotlinAbstractCoroutineContextElement <LSDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<LSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<LSDKKotlinCoroutineContext>)context block:(id<LSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<LSDKKotlinCoroutineContext>)context block:(id<LSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<LSDKKotlinContinuation>)interceptContinuationContinuation:(id<LSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<LSDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (LSDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (LSDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(LSDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<LSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface LSDKKtor_client_coreProxyConfig : LSDKBase
- (instancetype)initWithUrl:(LSDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol LSDKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(LSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) LSDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface LSDKKtor_utilsAttributeKey<T> : LSDKBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(LSDKKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (LSDKKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(LSDKKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface LSDKKtor_eventsEventDefinition<T> : LSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol LSDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface LSDKKtor_utilsPipelinePhase : LSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol LSDKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol LSDKKotlinSuspendFunction2 <LSDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface LSDKKtor_client_coreHttpReceivePipelinePhases : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol LSDKKtor_httpHttpMessage
@required
@property (readonly) id<LSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface LSDKKtor_client_coreHttpResponse : LSDKBase <LSDKKtor_httpHttpMessage, LSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<LSDKKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) LSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) LSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) LSDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) LSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface LSDKKotlinUnit : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface LSDKKtor_client_coreHttpRequestPipelinePhases : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) LSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol LSDKKtor_httpHttpMessageBuilder
@required
@property (readonly) LSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface LSDKKtor_client_coreHttpRequestBuilder : LSDKBase <LSDKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) LSDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (LSDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<LSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<LSDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<LSDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (LSDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(LSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (LSDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(LSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(LSDKKtor_httpURLBuilder *, LSDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<LSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property LSDKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<LSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) LSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property LSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LSDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface LSDKKtor_client_coreHttpResponsePipelinePhases : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) LSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface LSDKKtor_client_coreHttpResponseContainer : LSDKBase
- (instancetype)initWithExpectedType:(LSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (LSDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(LSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LSDKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface LSDKKtor_client_coreHttpClientCall : LSDKBase <LSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(LSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(LSDKKtor_client_coreHttpClient *)client requestData:(LSDKKtor_client_coreHttpRequestData *)requestData responseData:(LSDKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(LSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(LSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<LSDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<LSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LSDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<LSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<LSDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property LSDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface LSDKKtor_client_coreHttpSendPipelinePhases : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) LSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) LSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol LSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<LSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<LSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<LSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) LSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface LSDKKotlinx_serialization_coreSerializersModule : LSDKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<LSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<LSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<LSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<LSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<LSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<LSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<LSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<LSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol LSDKKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface LSDKKotlinx_serialization_coreSerialKind : LSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol LSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<LSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<LSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<LSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<LSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) LSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface LSDKKotlinNothing : LSDKBase
@end

__attribute__((swift_name("Kermit_coreLogWriter")))
@interface LSDKKermit_coreLogWriter : LSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isLoggableTag:(NSString *)tag severity:(LSDKKermit_coreSeverity *)severity __attribute__((swift_name("isLoggable(tag:severity:)")));
- (void)logSeverity:(LSDKKermit_coreSeverity *)severity message:(NSString *)message tag:(NSString *)tag throwable:(LSDKKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(severity:message:tag:throwable:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol LSDKKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol LSDKKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface LSDKKtor_httpUrl : LSDKBase <LSDKKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) LSDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<LSDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) LSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) LSDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface LSDKKtor_httpHttpMethod : LSDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (LSDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol LSDKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol LSDKKtor_httpHeaders <LSDKKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface LSDKKtor_httpOutgoingContent : LSDKBase
- (id _Nullable)getPropertyKey:(LSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(LSDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<LSDKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) LSDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) LSDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<LSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) LSDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol LSDKKotlinx_coroutines_coreJob <LSDKKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<LSDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<LSDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(LSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (LSDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<LSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(LSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<LSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(LSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<LSDKKotlinx_coroutines_coreJob>)plusOther_:(id<LSDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<LSDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<LSDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<LSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface LSDKKtor_httpHttpStatusCode : LSDKBase <LSDKKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(LSDKKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (LSDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (LSDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface LSDKKtor_utilsGMTDate : LSDKBase <LSDKKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(LSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(LSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(LSDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (LSDKKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (LSDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(LSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(LSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) LSDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) LSDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface LSDKKtor_httpHttpProtocolVersion : LSDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (LSDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol LSDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<LSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface LSDKKotlinAbstractCoroutineContextKey<B, E> : LSDKBase <LSDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<LSDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<LSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface LSDKKotlinx_coroutines_coreCoroutineDispatcherKey : LSDKKotlinAbstractCoroutineContextKey<id<LSDKKotlinContinuationInterceptor>, LSDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<LSDKKotlinCoroutineContextKey>)baseKey safeCast:(id<LSDKKotlinCoroutineContextElement> _Nullable (^)(id<LSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol LSDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface LSDKKtor_utilsTypeInfo : LSDKBase
- (instancetype)initWithType:(id<LSDKKotlinKClass>)type kotlinType:(id<LSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<LSDKKotlinKClass>)type reifiedType:(id<LSDKKotlinKType>)reifiedType kotlinType:(id<LSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LSDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<LSDKKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol LSDKKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(LSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(LSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) LSDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<LSDKKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol LSDKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<LSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<LSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<LSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface LSDKKtor_utilsStringValuesBuilderImpl : LSDKBase <LSDKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<LSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<LSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<LSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<LSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) LSDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface LSDKKtor_httpHeadersBuilder : LSDKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<LSDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface LSDKKtor_client_coreHttpRequestBuilderCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface LSDKKtor_httpURLBuilder : LSDKBase
- (instancetype)initWithProtocol:(LSDKKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<LSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (LSDKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<LSDKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<LSDKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property LSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property LSDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface LSDKKtor_client_coreHttpClientCallCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol LSDKKtor_client_coreHttpRequest <LSDKKtor_httpHttpMessage, LSDKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<LSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) LSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) LSDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) LSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) LSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol LSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<LSDKKotlinKClass>)kClass provider:(id<LSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<LSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<LSDKKotlinKClass>)kClass serializer:(id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<LSDKKotlinKClass>)baseClass actualClass:(id<LSDKKotlinKClass>)actualClass actualSerializer:(id<LSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<LSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<LSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<LSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<LSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<LSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<LSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol LSDKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol LSDKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol LSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol LSDKKotlinKClass <LSDKKotlinKDeclarationContainer, LSDKKotlinKAnnotatedElement, LSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface LSDKKtor_httpUrlCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol LSDKKtor_httpParameters <LSDKKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface LSDKKtor_httpURLProtocol : LSDKBase <LSDKKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (LSDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface LSDKKtor_httpHttpMethodCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (LSDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<LSDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) LSDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) LSDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) LSDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) LSDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) LSDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) LSDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) LSDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol LSDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface LSDKKtor_httpHeaderValueWithParameters : LSDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<LSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<LSDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface LSDKKtor_httpContentType : LSDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<LSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<LSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(LSDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (LSDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (LSDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol LSDKKotlinx_coroutines_coreChildHandle <LSDKKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(LSDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<LSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol LSDKKotlinx_coroutines_coreChildJob <LSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<LSDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol LSDKKotlinSequence
@required
- (id<LSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol LSDKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) LSDKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<LSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(LSDKKotlinThrowable *, id _Nullable, id<LSDKKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<LSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol LSDKKotlinx_coroutines_coreSelectClause0 <LSDKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface LSDKKtor_httpHttpStatusCodeCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (LSDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) LSDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) LSDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) LSDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) LSDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) LSDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) LSDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) LSDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) LSDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) LSDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) LSDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) LSDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) LSDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) LSDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) LSDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) LSDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) LSDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) LSDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) LSDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) LSDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) LSDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) LSDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) LSDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) LSDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) LSDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) LSDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) LSDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) LSDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) LSDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) LSDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) LSDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) LSDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) LSDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) LSDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) LSDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) LSDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) LSDKKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) LSDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) LSDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) LSDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) LSDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) LSDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) LSDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) LSDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) LSDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<LSDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface LSDKKtor_utilsWeekDay : LSDKKotlinEnum<LSDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LSDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) LSDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) LSDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) LSDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) LSDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) LSDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) LSDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (LSDKKotlinArray<LSDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LSDKKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface LSDKKtor_utilsMonth : LSDKKotlinEnum<LSDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) LSDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) LSDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) LSDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) LSDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) LSDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) LSDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) LSDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) LSDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) LSDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) LSDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) LSDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) LSDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) LSDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (LSDKKotlinArray<LSDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LSDKKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface LSDKKtor_utilsGMTDateCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<LSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) LSDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface LSDKKtor_httpHttpProtocolVersionCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (LSDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (LSDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) LSDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) LSDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) LSDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) LSDKKtor_httpHttpProtocolVersion *HTTP_3_0 __attribute__((swift_name("HTTP_3_0")));
@property (readonly) LSDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) LSDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol LSDKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<LSDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<LSDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol LSDKKotlinx_io_coreRawSource <LSDKKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(LSDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol LSDKKotlinx_io_coreSource <LSDKKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<LSDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(LSDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<LSDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<LSDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) LSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface LSDKKtor_httpURLBuilderCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol LSDKKtor_httpParametersBuilder <LSDKKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface LSDKKtor_httpURLProtocolCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (LSDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) LSDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) LSDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) LSDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) LSDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) LSDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, LSDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface LSDKKtor_httpHeaderValueParam : LSDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (LSDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface LSDKKtor_httpHeaderValueWithParametersCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<LSDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface LSDKKtor_httpContentTypeCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (LSDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) LSDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol LSDKKotlinx_coroutines_coreParentJob <LSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (LSDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol LSDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<LSDKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<LSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface LSDKKtor_utilsWeekDayCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (LSDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (LSDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface LSDKKtor_utilsMonthCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (LSDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (LSDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface LSDKKotlinKTypeProjection : LSDKBase
- (instancetype)initWithVariance:(LSDKKotlinKVariance * _Nullable)variance type:(id<LSDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) LSDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (LSDKKotlinKTypeProjection *)doCopyVariance:(LSDKKotlinKVariance * _Nullable)variance type:(id<LSDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<LSDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) LSDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface LSDKKotlinByteArray : LSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(LSDKByte *(^)(LSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (LSDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol LSDKKotlinx_io_coreRawSink <LSDKKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(LSDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol LSDKKotlinx_io_coreSink <LSDKKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<LSDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<LSDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(LSDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) LSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface LSDKKotlinx_io_coreBuffer : LSDKBase <LSDKKotlinx_io_coreSource, LSDKKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (LSDKKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(LSDKKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<LSDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(LSDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(LSDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<LSDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<LSDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<LSDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(LSDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<LSDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(LSDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) LSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface LSDKKotlinKVariance : LSDKKotlinEnum<LSDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LSDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) LSDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) LSDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (LSDKKotlinArray<LSDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<LSDKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface LSDKKotlinKTypeProjectionCompanion : LSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) LSDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (LSDKKotlinKTypeProjection *)contravariantType:(id<LSDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (LSDKKotlinKTypeProjection *)covariantType:(id<LSDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (LSDKKotlinKTypeProjection *)invariantType:(id<LSDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) LSDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface LSDKKotlinByteIterator : LSDKBase <LSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (LSDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
