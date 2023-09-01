#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PIARRegionEndpoint, PIARRegionLowerLatencyInformation, PIARRegionsResponse, PIARKotlinError, PIARRegionsBuilder, PIARKotlinEnumCompanion, PIARKotlinEnum<E>, PIARRegionsProtocol, PIARKotlinArray<T>, PIARRegionsUtils, PIARRegionsResponseProtocolDetails, PIARRegionsResponseRegion, PIARRegionsResponseCompanion, PIARRegionsResponseProtocolDetailsCompanion, PIARRegionsResponseRegionServerDetails, PIARRegionsResponseRegionCompanion, PIARRegionsResponseRegionServerDetailsCompanion, PIARTranslationsGeoResponseCompanion, PIARTranslationsGeoResponse, PIARMessageVerificator, PIARPingPerformerCompanion, PIARKotlinPair<__covariant A, __covariant B>, PIARRegionHttpClient, PIARKtor_client_coreHttpClient, PIARKotlinException, PIARRegionsCompanion, PIARKotlinThrowable, PIARKtor_client_coreHttpClientEngineConfig, PIARKtor_client_coreHttpClientConfig<T>, PIARKtor_client_coreHttpRequestBuilder, PIARKtor_client_coreHttpClientCall, PIARKotlinx_coroutines_coreCoroutineDispatcher, PIARKtor_client_coreHttpReceivePipeline, PIARKtor_client_coreHttpRequestPipeline, PIARKtor_client_coreHttpResponsePipeline, PIARKtor_client_coreHttpSendPipeline, PIARKotlinx_serialization_coreSerializersModule, PIARKotlinx_serialization_coreSerialKind, PIARKotlinNothing, PIARKtor_client_coreHttpRequestData, PIARKtor_client_coreHttpResponseData, PIARKtor_client_coreProxyConfig, PIARKotlinRuntimeException, PIARKotlinIllegalStateException, PIARKtor_httpHeadersBuilder, PIARKtor_client_coreHttpRequestBuilderCompanion, PIARKtor_httpURLBuilder, PIARKtor_httpHttpMethod, PIARKtor_client_coreHttpClientCallCompanion, PIARKtor_client_coreTypeInfo, PIARKtor_client_coreHttpResponse, PIARKtor_utilsAttributeKey<T>, PIARKotlinAbstractCoroutineContextElement, PIARKotlinx_coroutines_coreCoroutineDispatcherKey, PIARKtor_utilsPipelinePhase, PIARKtor_utilsPipeline<TSubject, TContext>, PIARKtor_client_coreHttpReceivePipelinePhases, PIARKtor_client_coreHttpRequestPipelinePhases, PIARKtor_client_coreHttpResponsePipelinePhases, PIARKtor_client_coreHttpResponseContainer, PIARKtor_client_coreHttpSendPipelinePhases, PIARKtor_httpUrl, PIARKtor_httpOutgoingContent, PIARKtor_httpHttpStatusCode, PIARKtor_utilsGMTDate, PIARKtor_httpHttpProtocolVersion, PIARKtor_utilsStringValuesBuilder, PIARKtor_httpURLProtocol, PIARKtor_httpParametersBuilder, PIARKtor_httpURLBuilderCompanion, PIARKotlinCancellationException, PIARKotlinUnit, PIARKtor_httpHttpMethodCompanion, PIARKtor_ioMemory, PIARKtor_ioIoBuffer, PIARKotlinByteArray, PIARKtor_ioByteReadPacket, PIARKtor_ioByteOrder, PIARKotlinAbstractCoroutineContextKey<B, E>, PIARKtor_httpUrlCompanion, PIARKtor_httpContentType, PIARKtor_httpHttpStatusCodeCompanion, PIARKtor_utilsGMTDateCompanion, PIARKtor_utilsWeekDay, PIARKtor_utilsMonth, PIARKtor_httpHttpProtocolVersionCompanion, PIARKtor_httpURLProtocolCompanion, PIARKtor_httpUrlEncodingOption, PIARKtor_ioMemoryCompanion, PIARKtor_ioBufferCompanion, PIARKtor_ioBuffer, PIARKtor_ioChunkBuffer, PIARKtor_ioChunkBufferCompanion, PIARKotlinCharArray, PIARKtor_ioIoBufferCompanion, PIARKotlinByteIterator, PIARKtor_ioAbstractInputCompanion, PIARKtor_ioAbstractInput, PIARKtor_ioByteReadPacketBaseCompanion, PIARKtor_ioByteReadPacketBase, PIARKtor_ioByteReadPacketPlatformBase, PIARKtor_ioByteReadPacketCompanion, PIARKtor_ioByteOrderCompanion, PIARKotlinKTypeProjection, PIARKtor_httpHeaderValueParam, PIARKtor_httpHeaderValueWithParametersCompanion, PIARKtor_httpHeaderValueWithParameters, PIARKtor_httpContentTypeCompanion, PIARKtor_utilsWeekDayCompanion, PIARKtor_utilsMonthCompanion, PIARKotlinx_coroutines_coreAtomicDesc, PIARKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, PIARKotlinCharIterator, PIARKotlinKVariance, PIARKotlinKTypeProjectionCompanion, PIARKotlinx_coroutines_coreAtomicOp<__contravariant T>, PIARKotlinx_coroutines_coreOpDescriptor, PIARKotlinx_coroutines_coreLockFreeLinkedListNode, PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, PIARKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol PIARRegionsAPI, PIARIRegionEndpointProvider, PIARKotlinComparable, PIARKotlinx_serialization_coreKSerializer, PIARKotlinCoroutineContext, PIARKotlinx_coroutines_coreCoroutineScope, PIARKotlinIterator, PIARKotlinx_serialization_coreEncoder, PIARKotlinx_serialization_coreSerialDescriptor, PIARKotlinx_serialization_coreSerializationStrategy, PIARKotlinx_serialization_coreDecoder, PIARKotlinx_serialization_coreDeserializationStrategy, PIARKtor_ioCloseable, PIARKtor_client_coreHttpClientEngine, PIARKtor_client_coreHttpClientEngineCapability, PIARKtor_utilsAttributes, PIARKotlinCoroutineContextElement, PIARKotlinCoroutineContextKey, PIARKotlinx_serialization_coreCompositeEncoder, PIARKotlinAnnotation, PIARKotlinx_serialization_coreCompositeDecoder, PIARKtor_client_coreHttpClientFeature, PIARKtor_httpHttpMessageBuilder, PIARKotlinx_coroutines_coreJob, PIARKtor_ioByteReadChannel, PIARKtor_utilsTypeInfo, PIARKtor_client_coreHttpRequest, PIARKotlinContinuation, PIARKotlinContinuationInterceptor, PIARKotlinx_coroutines_coreRunnable, PIARKotlinSuspendFunction2, PIARKotlinx_serialization_coreSerializersModuleCollector, PIARKotlinKClass, PIARKtor_httpHeaders, PIARKtor_utilsStringValues, PIARKotlinMapEntry, PIARKotlinx_coroutines_coreChildHandle, PIARKotlinx_coroutines_coreChildJob, PIARKotlinx_coroutines_coreDisposableHandle, PIARKotlinSequence, PIARKotlinx_coroutines_coreSelectClause0, PIARKtor_ioReadSession, PIARKotlinSuspendFunction1, PIARKotlinAppendable, PIARKotlinKType, PIARKtor_httpHttpMessage, PIARKotlinFunction, PIARKotlinKDeclarationContainer, PIARKotlinKAnnotatedElement, PIARKotlinKClassifier, PIARKtor_httpParameters, PIARKotlinx_coroutines_coreParentJob, PIARKotlinx_coroutines_coreSelectInstance, PIARKotlinSuspendFunction0, PIARKtor_ioObjectPool, PIARKtor_ioInput, PIARKtor_ioOutput;

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
@interface PIARBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface PIARBase (PIARBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface PIARMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PIARMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorPIARKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface PIARNumber : NSNumber
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
@interface PIARByte : PIARNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface PIARUByte : PIARNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface PIARShort : PIARNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface PIARUShort : PIARNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface PIARInt : PIARNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface PIARUInt : PIARNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface PIARLong : PIARNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface PIARULong : PIARNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface PIARFloat : PIARNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface PIARDouble : PIARNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface PIARBoolean : PIARNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("IRegionEndpointProvider")))
@protocol PIARIRegionEndpointProvider
@required
- (NSArray<PIARRegionEndpoint *> *)regionEndpoints __attribute__((swift_name("regionEndpoints()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionEndpoint")))
@interface PIARRegionEndpoint : PIARBase
- (instancetype)initWithEndpoint:(NSString *)endpoint isProxy:(BOOL)isProxy usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("init(endpoint:isProxy:usePinnedCertificate:certificateCommonName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (PIARRegionEndpoint *)doCopyEndpoint:(NSString *)endpoint isProxy:(BOOL)isProxy usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("doCopy(endpoint:isProxy:usePinnedCertificate:certificateCommonName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable certificateCommonName __attribute__((swift_name("certificateCommonName")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@property (readonly) BOOL isProxy __attribute__((swift_name("isProxy")));
@property (readonly) BOOL usePinnedCertificate __attribute__((swift_name("usePinnedCertificate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionLowerLatencyInformation")))
@interface PIARRegionLowerLatencyInformation : PIARBase
- (instancetype)initWithRegion:(NSString *)region endpoint:(NSString *)endpoint latency:(int64_t)latency __attribute__((swift_name("init(region:endpoint:latency:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component3 __attribute__((swift_name("component3()")));
- (PIARRegionLowerLatencyInformation *)doCopyRegion:(NSString *)region endpoint:(NSString *)endpoint latency:(int64_t)latency __attribute__((swift_name("doCopy(region:endpoint:latency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@property (readonly) int64_t latency __attribute__((swift_name("latency")));
@property (readonly) NSString *region __attribute__((swift_name("region")));
@end;

__attribute__((swift_name("RegionsAPI")))
@protocol PIARRegionsAPI
@required
- (void)fetchRegionsLocale:(NSString *)locale callback:(void (^)(PIARRegionsResponse * _Nullable, NSArray<PIARKotlinError *> *))callback __attribute__((swift_name("fetchRegions(locale:callback:)")));
- (void)pingRequestsCallback:(void (^)(NSArray<PIARRegionLowerLatencyInformation *> *, NSArray<PIARKotlinError *> *))callback __attribute__((swift_name("pingRequests(callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsBuilder")))
@interface PIARRegionsBuilder : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<PIARRegionsAPI>)build __attribute__((swift_name("build()")));
- (PIARRegionsBuilder *)setCertificateCertificate:(NSString * _Nullable)certificate __attribute__((swift_name("setCertificate(certificate:)")));
- (PIARRegionsBuilder *)setEndpointProviderEndpointsProvider:(id<PIARIRegionEndpointProvider>)endpointsProvider __attribute__((swift_name("setEndpointProvider(endpointsProvider:)")));
- (PIARRegionsBuilder *)setUserAgentUserAgent:(NSString *)userAgent __attribute__((swift_name("setUserAgent(userAgent:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol PIARKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface PIARKotlinEnum<E> : PIARBase <PIARKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsProtocol")))
@interface PIARRegionsProtocol : PIARKotlinEnum<PIARRegionsProtocol *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PIARRegionsProtocol *openvpnTcp __attribute__((swift_name("openvpnTcp")));
@property (class, readonly) PIARRegionsProtocol *openvpnUdp __attribute__((swift_name("openvpnUdp")));
@property (class, readonly) PIARRegionsProtocol *wireguard __attribute__((swift_name("wireguard")));
@property (class, readonly) PIARRegionsProtocol *meta __attribute__((swift_name("meta")));
+ (PIARKotlinArray<PIARRegionsProtocol *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *protocol __attribute__((swift_name("protocol")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsUtils")))
@interface PIARRegionsUtils : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)regionsUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARRegionsUtils *shared __attribute__((swift_name("shared")));
- (PIARRegionsResponse *)parseRegionsResponseString:(NSString *)regionsResponseString __attribute__((swift_name("parse(regionsResponseString:)")));
- (NSString *)stringifyRegionsResponse:(PIARRegionsResponse *)regionsResponse __attribute__((swift_name("stringify(regionsResponse:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsResponse")))
@interface PIARRegionsResponse : PIARBase
- (instancetype)initWithGroups:(NSDictionary<NSString *, NSArray<PIARRegionsResponseProtocolDetails *> *> *)groups regions:(NSArray<PIARRegionsResponseRegion *> *)regions __attribute__((swift_name("init(groups:regions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARRegionsResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, NSArray<PIARRegionsResponseProtocolDetails *> *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<PIARRegionsResponseRegion *> *)component2 __attribute__((swift_name("component2()")));
- (PIARRegionsResponse *)doCopyGroups:(NSDictionary<NSString *, NSArray<PIARRegionsResponseProtocolDetails *> *> *)groups regions:(NSArray<PIARRegionsResponseRegion *> *)regions __attribute__((swift_name("doCopy(groups:regions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSArray<PIARRegionsResponseProtocolDetails *> *> *groups __attribute__((swift_name("groups")));
@property (readonly) NSArray<PIARRegionsResponseRegion *> *regions __attribute__((swift_name("regions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsResponse.Companion")))
@interface PIARRegionsResponseCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARRegionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<PIARKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsResponse.ProtocolDetails")))
@interface PIARRegionsResponseProtocolDetails : PIARBase
- (instancetype)initWithName:(NSString *)name ports:(NSArray<PIARInt *> *)ports __attribute__((swift_name("init(name:ports:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARRegionsResponseProtocolDetailsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<PIARInt *> *)component2 __attribute__((swift_name("component2()")));
- (PIARRegionsResponseProtocolDetails *)doCopyName:(NSString *)name ports:(NSArray<PIARInt *> *)ports __attribute__((swift_name("doCopy(name:ports:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<PIARInt *> *ports __attribute__((swift_name("ports")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsResponse.ProtocolDetailsCompanion")))
@interface PIARRegionsResponseProtocolDetailsCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARRegionsResponseProtocolDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<PIARKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsResponse.Region")))
@interface PIARRegionsResponseRegion : PIARBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name country:(NSString *)country dns:(NSString *)dns geo:(BOOL)geo offline:(BOOL)offline latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude autoRegion:(BOOL)autoRegion portForward:(BOOL)portForward proxy:(NSArray<NSString *> *)proxy servers:(NSDictionary<NSString *, NSArray<PIARRegionsResponseRegionServerDetails *> *> *)servers __attribute__((swift_name("init(id:name:country:dns:geo:offline:latitude:longitude:autoRegion:portForward:proxy:servers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARRegionsResponseRegionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component10 __attribute__((swift_name("component10()")));
- (NSArray<NSString *> *)component11 __attribute__((swift_name("component11()")));
- (NSDictionary<NSString *, NSArray<PIARRegionsResponseRegionServerDetails *> *> *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (PIARRegionsResponseRegion *)doCopyId:(NSString *)id name:(NSString *)name country:(NSString *)country dns:(NSString *)dns geo:(BOOL)geo offline:(BOOL)offline latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude autoRegion:(BOOL)autoRegion portForward:(BOOL)portForward proxy:(NSArray<NSString *> *)proxy servers:(NSDictionary<NSString *, NSArray<PIARRegionsResponseRegionServerDetails *> *> *)servers __attribute__((swift_name("doCopy(id:name:country:dns:geo:offline:latitude:longitude:autoRegion:portForward:proxy:servers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL autoRegion __attribute__((swift_name("autoRegion")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *dns __attribute__((swift_name("dns")));
@property (readonly) BOOL geo __attribute__((swift_name("geo")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) NSString * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BOOL offline __attribute__((swift_name("offline")));
@property (readonly) BOOL portForward __attribute__((swift_name("portForward")));
@property (readonly) NSArray<NSString *> *proxy __attribute__((swift_name("proxy")));
@property (readonly) NSDictionary<NSString *, NSArray<PIARRegionsResponseRegionServerDetails *> *> *servers __attribute__((swift_name("servers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsResponse.RegionCompanion")))
@interface PIARRegionsResponseRegionCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARRegionsResponseRegionCompanion *shared __attribute__((swift_name("shared")));
- (id<PIARKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsResponse.RegionServerDetails")))
@interface PIARRegionsResponseRegionServerDetails : PIARBase
- (instancetype)initWithIp:(NSString *)ip cn:(NSString *)cn usesVanillaOVPN:(BOOL)usesVanillaOVPN __attribute__((swift_name("init(ip:cn:usesVanillaOVPN:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARRegionsResponseRegionServerDetailsCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (PIARRegionsResponseRegionServerDetails *)doCopyIp:(NSString *)ip cn:(NSString *)cn usesVanillaOVPN:(BOOL)usesVanillaOVPN __attribute__((swift_name("doCopy(ip:cn:usesVanillaOVPN:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cn __attribute__((swift_name("cn")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@property (readonly) BOOL usesVanillaOVPN __attribute__((swift_name("usesVanillaOVPN")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsResponse.RegionServerDetailsCompanion")))
@interface PIARRegionsResponseRegionServerDetailsCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARRegionsResponseRegionServerDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<PIARKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TranslationsGeoResponse")))
@interface PIARTranslationsGeoResponse : PIARBase
- (instancetype)initWithCountryGroups:(NSDictionary<NSString *, NSString *> *)countryGroups gps:(NSDictionary<NSString *, NSArray<NSString *> *> *)gps translations:(NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> *)translations __attribute__((swift_name("init(countryGroups:gps:translations:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARTranslationsGeoResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, NSString *> *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> *)component3 __attribute__((swift_name("component3()")));
- (PIARTranslationsGeoResponse *)doCopyCountryGroups:(NSDictionary<NSString *, NSString *> *)countryGroups gps:(NSDictionary<NSString *, NSArray<NSString *> *> *)gps translations:(NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> *)translations __attribute__((swift_name("doCopy(countryGroups:gps:translations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> *countryGroups __attribute__((swift_name("countryGroups")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *gps __attribute__((swift_name("gps")));
@property (readonly) NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> *translations __attribute__((swift_name("translations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TranslationsGeoResponse.Companion")))
@interface PIARTranslationsGeoResponseCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARTranslationsGeoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<PIARKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MessageVerificator")))
@interface PIARMessageVerificator : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)messageVerificator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARMessageVerificator *shared __attribute__((swift_name("shared")));
- (BOOL)verifyMessageMessage:(NSString *)message key:(NSString *)key __attribute__((swift_name("verifyMessage(message:key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PingPerformer")))
@interface PIARPingPerformer : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PIARPingPerformerCompanion *companion __attribute__((swift_name("companion")));
- (void)pingEndpointsEndpoints:(NSDictionary<NSString *, NSArray<NSString *> *> *)endpoints callback:(void (^)(NSDictionary<NSString *, NSArray<PIARKotlinPair<NSString *, PIARLong *> *> *> *))callback __attribute__((swift_name("pingEndpoints(endpoints:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PingPerformer.Companion")))
@interface PIARPingPerformerCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARPingPerformerCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionHttpClient")))
@interface PIARRegionHttpClient : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)regionHttpClient __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARRegionHttpClient *shared __attribute__((swift_name("shared")));
- (PIARKotlinPair<PIARKtor_client_coreHttpClient *, PIARKotlinException *> *)clientCertificate:(NSString * _Nullable)certificate pinnedEndpoint:(PIARKotlinPair<NSString *, NSString *> * _Nullable)pinnedEndpoint __attribute__((swift_name("client(certificate:pinnedEndpoint:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol PIARKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<PIARKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Regions")))
@interface PIARRegions : PIARBase <PIARRegionsAPI, PIARKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithUserAgent:(NSString *)userAgent endpointsProvider:(id<PIARIRegionEndpointProvider>)endpointsProvider certificate:(NSString * _Nullable)certificate __attribute__((swift_name("init(userAgent:endpointsProvider:certificate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARRegionsCompanion *companion __attribute__((swift_name("companion")));
- (void)fetchRegionsLocale:(NSString *)locale callback:(void (^)(PIARRegionsResponse * _Nullable, NSArray<PIARKotlinError *> *))callback __attribute__((swift_name("fetchRegions(locale:callback:)")));
- (void)pingRequestsCallback:(void (^)(NSArray<PIARRegionLowerLatencyInformation *> *, NSArray<PIARKotlinError *> *))callback __attribute__((swift_name("pingRequests(callback:)")));
@property (readonly) id<PIARKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Regions.Companion")))
@interface PIARRegionsCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARRegionsCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsAPIKt")))
@interface PIARRegionsAPIKt : PIARBase
@property (class, readonly) int32_t REGIONS_PING_TIMEOUT __attribute__((swift_name("REGIONS_PING_TIMEOUT")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface PIARKotlinThrowable : PIARBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (PIARKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PIARKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinError")))
@interface PIARKotlinError : PIARKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PIARKotlinEnumCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PIARKotlinArray<T> : PIARBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PIARInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PIARKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PIARKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PIARKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PIARKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PIARKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PIARKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PIARKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PIARKotlinx_serialization_coreKSerializer <PIARKotlinx_serialization_coreSerializationStrategy, PIARKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface PIARKotlinPair<__covariant A, __covariant B> : PIARBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (PIARKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol PIARKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface PIARKtor_client_coreHttpClient : PIARBase <PIARKotlinx_coroutines_coreCoroutineScope, PIARKtor_ioCloseable>
- (instancetype)initWithEngine:(id<PIARKtor_client_coreHttpClientEngine>)engine userConfig:(PIARKtor_client_coreHttpClientConfig<PIARKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (PIARKtor_client_coreHttpClient *)configBlock:(void (^)(PIARKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(PIARKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(PIARKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<PIARKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PIARKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<PIARKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) PIARKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<PIARKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) PIARKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) PIARKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) PIARKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) PIARKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) PIARKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("KotlinException")))
@interface PIARKotlinException : PIARKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol PIARKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<PIARKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<PIARKotlinCoroutineContextElement> _Nullable)getKey:(id<PIARKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<PIARKotlinCoroutineContext>)minusKeyKey:(id<PIARKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<PIARKotlinCoroutineContext>)plusContext:(id<PIARKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol PIARKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PIARKotlinx_serialization_coreEncoder
@required
- (id<PIARKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PIARKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PIARKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<PIARKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PIARKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PIARKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PIARKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<PIARKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<PIARKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<PIARKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) PIARKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PIARKotlinx_serialization_coreDecoder
@required
- (id<PIARKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PIARKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (PIARKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PIARKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PIARKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PIARKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol PIARKtor_client_coreHttpClientEngine <PIARKotlinx_coroutines_coreCoroutineScope, PIARKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(PIARKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(PIARKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(PIARKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) PIARKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) PIARKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<PIARKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface PIARKtor_client_coreHttpClientEngineConfig : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property PIARKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) PIARKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface PIARKtor_client_coreHttpClientConfig<T> : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PIARKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(PIARKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<PIARKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(PIARKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(PIARKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface PIARKotlinRuntimeException : PIARKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PIARKotlinIllegalStateException : PIARKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface PIARKotlinCancellationException : PIARKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol PIARKtor_httpHttpMessageBuilder
@required
@property (readonly) PIARKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface PIARKtor_client_coreHttpRequestBuilder : PIARBase <PIARKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PIARKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PIARKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<PIARKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<PIARKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<PIARKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (PIARKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(PIARKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (PIARKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(PIARKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(PIARKtor_httpURLBuilder *, PIARKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<PIARKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<PIARKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) PIARKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property PIARKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PIARKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface PIARKtor_client_coreHttpClientCall : PIARBase <PIARKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) PIARKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<PIARKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(PIARKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<PIARKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<PIARKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PIARKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<PIARKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<PIARKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) PIARKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol PIARKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol PIARKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(PIARKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(PIARKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(PIARKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(PIARKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(PIARKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(PIARKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(PIARKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(PIARKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<PIARKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol PIARKotlinCoroutineContextElement <PIARKotlinCoroutineContext>
@required
@property (readonly) id<PIARKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface PIARKotlinAbstractCoroutineContextElement : PIARBase <PIARKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<PIARKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PIARKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol PIARKotlinContinuationInterceptor <PIARKotlinCoroutineContextElement>
@required
- (id<PIARKotlinContinuation>)interceptContinuationContinuation:(id<PIARKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<PIARKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface PIARKotlinx_coroutines_coreCoroutineDispatcher : PIARKotlinAbstractCoroutineContextElement <PIARKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<PIARKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<PIARKotlinCoroutineContext>)context block:(id<PIARKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<PIARKotlinCoroutineContext>)context block:(id<PIARKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<PIARKotlinContinuation>)interceptContinuationContinuation:(id<PIARKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<PIARKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (PIARKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (PIARKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(PIARKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<PIARKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface PIARKtor_utilsPipeline<TSubject, TContext> : PIARBase
- (instancetype)initWithPhase:(PIARKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PIARKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PIARKotlinArray<PIARKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(PIARKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(PIARKtor_utilsPipelinePhase *)reference phase:(PIARKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(PIARKtor_utilsPipelinePhase *)reference phase:(PIARKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(PIARKtor_utilsPipelinePhase *)phase block:(id<PIARKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(PIARKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<PIARKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<PIARKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface PIARKtor_client_coreHttpReceivePipeline : PIARKtor_utilsPipeline<PIARKtor_client_coreHttpResponse *, PIARKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PIARKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PIARKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(PIARKotlinArray<PIARKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface PIARKtor_client_coreHttpRequestPipeline : PIARKtor_utilsPipeline<id, PIARKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PIARKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PIARKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(PIARKotlinArray<PIARKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface PIARKtor_client_coreHttpResponsePipeline : PIARKtor_utilsPipeline<PIARKtor_client_coreHttpResponseContainer *, PIARKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PIARKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PIARKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(PIARKotlinArray<PIARKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface PIARKtor_client_coreHttpSendPipeline : PIARKtor_utilsPipeline<id, PIARKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PIARKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PIARKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(PIARKotlinArray<PIARKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol PIARKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PIARKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PIARKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PIARKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PIARKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PIARKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PIARKotlinx_serialization_coreSerializersModule : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<PIARKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<PIARKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PIARKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PIARKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<PIARKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PIARKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<PIARKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PIARKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol PIARKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PIARKotlinx_serialization_coreSerialKind : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PIARKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PIARKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PIARKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PIARKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PIARKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PIARKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PIARKotlinNothing : PIARBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface PIARKtor_client_coreHttpRequestData : PIARBase
- (instancetype)initWithUrl:(PIARKtor_httpUrl *)url method:(PIARKtor_httpHttpMethod *)method headers:(id<PIARKtor_httpHeaders>)headers body:(PIARKtor_httpOutgoingContent *)body executionContext:(id<PIARKotlinx_coroutines_coreJob>)executionContext attributes:(id<PIARKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<PIARKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PIARKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PIARKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<PIARKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<PIARKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PIARKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PIARKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface PIARKtor_client_coreHttpResponseData : PIARBase
- (instancetype)initWithStatusCode:(PIARKtor_httpHttpStatusCode *)statusCode requestTime:(PIARKtor_utilsGMTDate *)requestTime headers:(id<PIARKtor_httpHeaders>)headers version:(PIARKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<PIARKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<PIARKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<PIARKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PIARKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PIARKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PIARKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) PIARKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface PIARKtor_client_coreProxyConfig : PIARBase
- (instancetype)initWithUrl:(PIARKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PIARKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol PIARKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(PIARKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) PIARKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface PIARKtor_utilsStringValuesBuilder : PIARBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PIARKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PIARKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PIARKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PIARKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) PIARMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface PIARKtor_httpHeadersBuilder : PIARKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<PIARKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface PIARKtor_client_coreHttpRequestBuilderCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface PIARKtor_httpURLBuilder : PIARBase
- (instancetype)initWithProtocol:(PIARKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(PIARKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PIARKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (PIARKtor_httpURLBuilder *)pathComponents:(PIARKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (PIARKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) PIARKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property PIARKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol PIARKotlinx_coroutines_coreJob <PIARKotlinCoroutineContextElement>
@required
- (id<PIARKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<PIARKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(PIARKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (PIARKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<PIARKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(PIARKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<PIARKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(PIARKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(PIARKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<PIARKotlinx_coroutines_coreJob>)plusOther_:(id<PIARKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<PIARKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<PIARKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface PIARKtor_httpHttpMethod : PIARBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (PIARKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface PIARKtor_client_coreHttpClientCallCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol PIARKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(PIARKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(PIARLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(PIARKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(PIARLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PIARKtor_ioIoBuffer *)dst completionHandler:(void (^)(PIARInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PIARKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(PIARInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(PIARInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(PIARInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(PIARBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(PIARByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(PIARDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(PIARFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PIARKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(PIARKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PIARKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(PIARKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(PIARKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(PIARKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(PIARInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(PIARLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(PIARKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(PIARKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<PIARKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(PIARShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<PIARKotlinSuspendFunction1>)consumer completionHandler:(void (^)(PIARKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<PIARKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(PIARBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) PIARKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property PIARKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol PIARKtor_utilsTypeInfo
@required
@property (readonly) id<PIARKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<PIARKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<PIARKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface PIARKtor_client_coreTypeInfo : PIARBase <PIARKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<PIARKotlinKClass>)type reifiedType:(id<PIARKotlinKType>)reifiedType kotlinType:(id<PIARKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<PIARKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<PIARKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<PIARKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (PIARKtor_client_coreTypeInfo *)doCopyType:(id<PIARKotlinKClass>)type reifiedType:(id<PIARKotlinKType>)reifiedType kotlinType:(id<PIARKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PIARKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<PIARKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<PIARKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol PIARKtor_httpHttpMessage
@required
@property (readonly) id<PIARKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol PIARKtor_client_coreHttpRequest <PIARKtor_httpHttpMessage, PIARKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<PIARKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PIARKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) PIARKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) PIARKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PIARKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface PIARKtor_client_coreHttpResponse : PIARBase <PIARKtor_httpHttpMessage, PIARKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PIARKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<PIARKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) PIARKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PIARKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PIARKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) PIARKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface PIARKtor_utilsAttributeKey<T> : PIARBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol PIARKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<PIARKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface PIARKotlinAbstractCoroutineContextKey<B, E> : PIARBase <PIARKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<PIARKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<PIARKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface PIARKotlinx_coroutines_coreCoroutineDispatcherKey : PIARKotlinAbstractCoroutineContextKey<id<PIARKotlinContinuationInterceptor>, PIARKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<PIARKotlinCoroutineContextKey>)baseKey safeCast:(id<PIARKotlinCoroutineContextElement> _Nullable (^)(id<PIARKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol PIARKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface PIARKtor_utilsPipelinePhase : PIARBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol PIARKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol PIARKotlinSuspendFunction2 <PIARKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface PIARKtor_client_coreHttpReceivePipelinePhases : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PIARKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PIARKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface PIARKtor_client_coreHttpRequestPipelinePhases : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PIARKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) PIARKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) PIARKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PIARKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface PIARKtor_client_coreHttpResponsePipelinePhases : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PIARKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) PIARKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PIARKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PIARKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface PIARKtor_client_coreHttpResponseContainer : PIARBase
- (instancetype)initWithExpectedType:(id<PIARKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(PIARKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (PIARKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (PIARKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(PIARKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PIARKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface PIARKtor_client_coreHttpSendPipelinePhases : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PIARKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) PIARKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) PIARKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PIARKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PIARKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PIARKotlinKClass>)kClass provider:(id<PIARKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PIARKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PIARKotlinKClass>)kClass serializer:(id<PIARKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PIARKotlinKClass>)baseClass actualClass:(id<PIARKotlinKClass>)actualClass actualSerializer:(id<PIARKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PIARKotlinKClass>)baseClass defaultDeserializerProvider:(id<PIARKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PIARKotlinKClass>)baseClass defaultDeserializerProvider:(id<PIARKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PIARKotlinKClass>)baseClass defaultSerializerProvider:(id<PIARKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PIARKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PIARKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol PIARKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol PIARKotlinKClass <PIARKotlinKDeclarationContainer, PIARKotlinKAnnotatedElement, PIARKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface PIARKtor_httpUrl : PIARBase
- (instancetype)initWithProtocol:(PIARKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<PIARKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (PIARKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<PIARKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (PIARKtor_httpUrl *)doCopyProtocol:(PIARKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<PIARKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PIARKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) PIARKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol PIARKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PIARKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol PIARKtor_httpHeaders <PIARKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface PIARKtor_httpOutgoingContent : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(PIARKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(PIARKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) PIARLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) PIARKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<PIARKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PIARKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface PIARKtor_httpHttpStatusCode : PIARBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (PIARKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (PIARKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface PIARKtor_utilsGMTDate : PIARBase <PIARKotlinComparable>
@property (class, readonly, getter=companion) PIARKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PIARKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (PIARKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (PIARKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (PIARKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(PIARKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(PIARKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PIARKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) PIARKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface PIARKtor_httpHttpProtocolVersion : PIARBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (PIARKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol PIARKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface PIARKtor_httpURLProtocol : PIARBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (PIARKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface PIARKtor_httpParametersBuilder : PIARKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(PIARKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<PIARKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property PIARKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface PIARKtor_httpURLBuilderCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol PIARKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol PIARKotlinx_coroutines_coreChildHandle <PIARKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(PIARKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<PIARKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol PIARKotlinx_coroutines_coreChildJob <PIARKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<PIARKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface PIARKotlinUnit : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol PIARKotlinSequence
@required
- (id<PIARKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol PIARKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<PIARKotlinx_coroutines_coreSelectInstance>)select block:(id<PIARKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface PIARKtor_httpHttpMethodCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (PIARKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<PIARKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) PIARKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) PIARKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) PIARKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) PIARKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) PIARKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) PIARKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) PIARKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface PIARKtor_ioMemory : PIARBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(PIARKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(PIARKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (PIARKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (PIARKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface PIARKtor_ioBuffer : PIARBase
- (instancetype)initWithMemory:(PIARKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (PIARKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(PIARKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) PIARKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface PIARKtor_ioChunkBuffer : PIARKtor_ioBuffer
- (instancetype)initWithMemory:(PIARKtor_ioMemory *)memory origin:(PIARKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<PIARKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(PIARKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (PIARKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (PIARKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<PIARKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) PIARKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) PIARKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol PIARKtor_ioInput <PIARKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(PIARKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property PIARKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol PIARKotlinAppendable
@required
- (id<PIARKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<PIARKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<PIARKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol PIARKtor_ioOutput <PIARKotlinAppendable, PIARKtor_ioCloseable>
@required
- (id<PIARKotlinAppendable>)appendCsq:(PIARKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property PIARKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface PIARKtor_ioIoBuffer : PIARKtor_ioChunkBuffer <PIARKtor_ioInput, PIARKtor_ioOutput>
- (instancetype)initWithMemory:(PIARKtor_ioMemory *)memory origin:(PIARKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(PIARKtor_ioMemory *)memory origin:(PIARKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<PIARKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<PIARKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<PIARKotlinAppendable>)appendCsq:(PIARKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<PIARKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<PIARKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(PIARKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (PIARKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (PIARKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(PIARKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(PIARInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<PIARKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(PIARInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property PIARKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PIARKotlinByteArray : PIARBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PIARByte *(^)(PIARInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PIARKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface PIARKtor_ioAbstractInput : PIARBase <PIARKtor_ioInput>
- (instancetype)initWithHead:(PIARKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PIARKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) PIARKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (PIARKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(PIARKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (PIARKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(PIARKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(PIARKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(PIARKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (PIARKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<PIARKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<PIARKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property PIARKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<PIARKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface PIARKtor_ioByteReadPacketBase : PIARKtor_ioAbstractInput
- (instancetype)initWithHead:(PIARKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PIARKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) PIARKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface PIARKtor_ioByteReadPacketPlatformBase : PIARKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(PIARKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PIARKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface PIARKtor_ioByteReadPacket : PIARKtor_ioByteReadPacketPlatformBase <PIARKtor_ioInput>
- (instancetype)initWithHead:(PIARKtor_ioChunkBuffer *)head pool:(id<PIARKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(PIARKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PIARKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (PIARKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (PIARKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(PIARKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol PIARKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (PIARKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol PIARKotlinSuspendFunction1 <PIARKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface PIARKtor_ioByteOrder : PIARKotlinEnum<PIARKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PIARKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) PIARKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (PIARKotlinArray<PIARKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol PIARKotlinKType
@required
@property (readonly) NSArray<PIARKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<PIARKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol PIARKtor_httpParameters <PIARKtor_utilsStringValues>
@required
@property (readonly) PIARKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface PIARKtor_httpUrlCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface PIARKtor_httpHeaderValueWithParameters : PIARBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PIARKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<PIARKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface PIARKtor_httpContentType : PIARKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<PIARKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PIARKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(PIARKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (PIARKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (PIARKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface PIARKtor_httpHttpStatusCodeCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (PIARKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) PIARKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) PIARKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) PIARKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) PIARKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) PIARKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) PIARKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) PIARKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) PIARKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) PIARKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) PIARKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) PIARKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) PIARKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) PIARKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) PIARKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) PIARKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) PIARKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) PIARKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) PIARKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) PIARKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) PIARKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) PIARKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) PIARKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) PIARKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) PIARKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) PIARKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) PIARKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) PIARKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) PIARKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) PIARKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) PIARKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) PIARKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) PIARKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) PIARKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) PIARKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) PIARKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) PIARKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) PIARKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) PIARKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) PIARKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) PIARKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) PIARKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) PIARKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) PIARKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) PIARKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) PIARKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) PIARKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) PIARKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) PIARKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) PIARKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) PIARKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) PIARKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) PIARKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<PIARKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface PIARKtor_utilsGMTDateCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface PIARKtor_utilsWeekDay : PIARKotlinEnum<PIARKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PIARKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) PIARKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) PIARKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) PIARKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) PIARKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) PIARKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) PIARKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (PIARKotlinArray<PIARKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface PIARKtor_utilsMonth : PIARKotlinEnum<PIARKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIARKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PIARKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) PIARKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) PIARKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) PIARKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) PIARKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) PIARKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) PIARKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) PIARKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) PIARKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) PIARKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) PIARKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) PIARKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (PIARKotlinArray<PIARKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface PIARKtor_httpHttpProtocolVersionCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (PIARKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (PIARKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PIARKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) PIARKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) PIARKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) PIARKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) PIARKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface PIARKtor_httpURLProtocolCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (PIARKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) PIARKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) PIARKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) PIARKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) PIARKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) PIARKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, PIARKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface PIARKtor_httpUrlEncodingOption : PIARKotlinEnum<PIARKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PIARKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) PIARKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) PIARKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) PIARKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (PIARKotlinArray<PIARKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol PIARKotlinx_coroutines_coreParentJob <PIARKotlinx_coroutines_coreJob>
@required
- (PIARKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol PIARKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<PIARKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(PIARKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(PIARKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(PIARKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<PIARKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol PIARKotlinSuspendFunction0 <PIARKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface PIARKtor_ioMemoryCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface PIARKtor_ioBufferCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol PIARKtor_ioObjectPool <PIARKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface PIARKtor_ioChunkBufferCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<PIARKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<PIARKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface PIARKotlinCharArray : PIARBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(PIARInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PIARKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface PIARKtor_ioIoBufferCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<PIARKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<PIARKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<PIARKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface PIARKotlinByteIterator : PIARBase <PIARKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PIARByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface PIARKtor_ioAbstractInputCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface PIARKtor_ioByteReadPacketBaseCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface PIARKtor_ioByteReadPacketCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PIARKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface PIARKtor_ioByteOrderCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (PIARKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface PIARKotlinKTypeProjection : PIARBase
- (instancetype)initWithVariance:(PIARKotlinKVariance * _Nullable)variance type:(id<PIARKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIARKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (PIARKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<PIARKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (PIARKotlinKTypeProjection *)doCopyVariance:(PIARKotlinKVariance * _Nullable)variance type:(id<PIARKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PIARKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) PIARKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface PIARKtor_httpHeaderValueParam : PIARBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (PIARKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface PIARKtor_httpHeaderValueWithParametersCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<PIARKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface PIARKtor_httpContentTypeCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (PIARKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PIARKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface PIARKtor_utilsWeekDayCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (PIARKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PIARKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface PIARKtor_utilsMonthCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (PIARKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PIARKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface PIARKotlinx_coroutines_coreAtomicDesc : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(PIARKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(PIARKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property PIARKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface PIARKotlinx_coroutines_coreOpDescriptor : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(PIARKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PIARKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface PIARKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : PIARKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) PIARKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface PIARKotlinCharIterator : PIARBase <PIARKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface PIARKotlinKVariance : PIARKotlinEnum<PIARKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PIARKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) PIARKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) PIARKotlinKVariance *out __attribute__((swift_name("out")));
+ (PIARKotlinArray<PIARKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface PIARKotlinKTypeProjectionCompanion : PIARBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIARKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (PIARKotlinKTypeProjection *)contravariantType:(id<PIARKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (PIARKotlinKTypeProjection *)covariantType:(id<PIARKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (PIARKotlinKTypeProjection *)invariantType:(id<PIARKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) PIARKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface PIARKotlinx_coroutines_coreAtomicOp<__contravariant T> : PIARKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) PIARKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface PIARKotlinx_coroutines_coreLockFreeLinkedListNode : PIARBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(PIARBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(PIARBoolean *(^)(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(PIARBoolean *(^)(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(PIARBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<PIARKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (PIARKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<PIARKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(PIARBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : PIARKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(PIARKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(PIARKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(PIARKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(PIARKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(PIARKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(PIARKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(PIARKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface PIARKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : PIARKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(PIARKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(PIARKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(PIARKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) PIARKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
