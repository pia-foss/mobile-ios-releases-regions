#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class RegionsRegionEndpoint, RegionsRegionJsonFallback, RegionsRegionLowerLatencyInformation, RegionsShadowsocksRegionsResponse, RegionsKotlinError, RegionsVpnRegionsResponse, RegionsRegionsBuilder, RegionsKotlinEnumCompanion, RegionsKotlinEnum<E>, RegionsRegionsProtocol, RegionsKotlinArray<T>, RegionsRegionsUtils, RegionsRegionsCompanion, RegionsShadowsocksRegionsResponseCompanion, RegionsVpnRegionsResponseProtocolDetails, RegionsVpnRegionsResponseRegion, RegionsVpnRegionsResponseCompanion, RegionsVpnRegionsResponseProtocolDetailsCompanion, RegionsVpnRegionsResponseRegionServerDetails, RegionsVpnRegionsResponseRegionCompanion, RegionsVpnRegionsResponseRegionServerDetailsCompanion, RegionsKotlinThrowable, RegionsKotlinx_serialization_coreSerializersModule, RegionsKotlinx_serialization_coreSerialKind, RegionsKotlinNothing;

@protocol RegionsRegionsAPI, RegionsIRegionEndpointProvider, RegionsPlatformInstancesProvider, RegionsKotlinComparable, RegionsKotlinCoroutineContext, RegionsKotlinx_coroutines_coreCoroutineScope, RegionsKotlinx_serialization_coreKSerializer, RegionsKotlinIterator, RegionsKotlinCoroutineContextElement, RegionsKotlinCoroutineContextKey, RegionsKotlinx_serialization_coreEncoder, RegionsKotlinx_serialization_coreSerialDescriptor, RegionsKotlinx_serialization_coreSerializationStrategy, RegionsKotlinx_serialization_coreDecoder, RegionsKotlinx_serialization_coreDeserializationStrategy, RegionsKotlinx_serialization_coreCompositeEncoder, RegionsKotlinAnnotation, RegionsKotlinx_serialization_coreCompositeDecoder, RegionsKotlinx_serialization_coreSerializersModuleCollector, RegionsKotlinKClass, RegionsKotlinKDeclarationContainer, RegionsKotlinKAnnotatedElement, RegionsKotlinKClassifier;

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
@interface RegionsBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface RegionsBase (RegionsBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface RegionsMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface RegionsMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorRegionsKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface RegionsNumber : NSNumber
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
@interface RegionsByte : RegionsNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface RegionsUByte : RegionsNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface RegionsShort : RegionsNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface RegionsUShort : RegionsNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface RegionsInt : RegionsNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface RegionsUInt : RegionsNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface RegionsLong : RegionsNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface RegionsULong : RegionsNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface RegionsFloat : RegionsNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface RegionsDouble : RegionsNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface RegionsBoolean : RegionsNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("IRegionEndpointProvider")))
@protocol RegionsIRegionEndpointProvider
@required
- (NSArray<RegionsRegionEndpoint *> *)regionEndpoints __attribute__((swift_name("regionEndpoints()")));
@end

__attribute__((swift_name("PlatformInstancesProvider")))
@protocol RegionsPlatformInstancesProvider
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionEndpoint")))
@interface RegionsRegionEndpoint : RegionsBase
- (instancetype)initWithEndpoint:(NSString *)endpoint isProxy:(BOOL)isProxy usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("init(endpoint:isProxy:usePinnedCertificate:certificateCommonName:)"))) __attribute__((objc_designated_initializer));
- (RegionsRegionEndpoint *)doCopyEndpoint:(NSString *)endpoint isProxy:(BOOL)isProxy usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("doCopy(endpoint:isProxy:usePinnedCertificate:certificateCommonName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable certificateCommonName __attribute__((swift_name("certificateCommonName")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@property (readonly) BOOL isProxy __attribute__((swift_name("isProxy")));
@property (readonly) BOOL usePinnedCertificate __attribute__((swift_name("usePinnedCertificate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionJsonFallback")))
@interface RegionsRegionJsonFallback : RegionsBase
- (instancetype)initWithVpnRegionsJson:(NSString *)vpnRegionsJson shadowsocksRegionsJson:(NSString *)shadowsocksRegionsJson metadataJson:(NSString *)metadataJson __attribute__((swift_name("init(vpnRegionsJson:shadowsocksRegionsJson:metadataJson:)"))) __attribute__((objc_designated_initializer));
- (RegionsRegionJsonFallback *)doCopyVpnRegionsJson:(NSString *)vpnRegionsJson shadowsocksRegionsJson:(NSString *)shadowsocksRegionsJson metadataJson:(NSString *)metadataJson __attribute__((swift_name("doCopy(vpnRegionsJson:shadowsocksRegionsJson:metadataJson:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *metadataJson __attribute__((swift_name("metadataJson")));
@property (readonly) NSString *shadowsocksRegionsJson __attribute__((swift_name("shadowsocksRegionsJson")));
@property (readonly) NSString *vpnRegionsJson __attribute__((swift_name("vpnRegionsJson")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionLowerLatencyInformation")))
@interface RegionsRegionLowerLatencyInformation : RegionsBase
- (instancetype)initWithRegion:(NSString *)region endpoint:(NSString *)endpoint latency:(int64_t)latency __attribute__((swift_name("init(region:endpoint:latency:)"))) __attribute__((objc_designated_initializer));
- (RegionsRegionLowerLatencyInformation *)doCopyRegion:(NSString *)region endpoint:(NSString *)endpoint latency:(int64_t)latency __attribute__((swift_name("doCopy(region:endpoint:latency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@property (readonly) int64_t latency __attribute__((swift_name("latency")));
@property (readonly) NSString *region __attribute__((swift_name("region")));
@end

__attribute__((swift_name("RegionsAPI")))
@protocol RegionsRegionsAPI
@required
- (void)fetchShadowsocksRegionsLocale:(NSString *)locale callback:(void (^)(NSArray<RegionsShadowsocksRegionsResponse *> *, RegionsKotlinError * _Nullable))callback __attribute__((swift_name("fetchShadowsocksRegions(locale:callback:)")));
- (void)fetchVpnRegionsLocale:(NSString *)locale callback:(void (^)(RegionsVpnRegionsResponse * _Nullable, RegionsKotlinError * _Nullable))callback __attribute__((swift_name("fetchVpnRegions(locale:callback:)")));
- (void)pingRequestsCallback:(void (^)(NSArray<RegionsRegionLowerLatencyInformation *> *, RegionsKotlinError * _Nullable))callback __attribute__((swift_name("pingRequests(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsBuilder")))
@interface RegionsRegionsBuilder : RegionsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<RegionsRegionsAPI>)build __attribute__((swift_name("build()")));
- (RegionsRegionsBuilder *)setCertificateCertificate:(NSString * _Nullable)certificate __attribute__((swift_name("setCertificate(certificate:)")));
- (RegionsRegionsBuilder *)setEndpointProviderEndpointsProvider:(id<RegionsIRegionEndpointProvider>)endpointsProvider __attribute__((swift_name("setEndpointProvider(endpointsProvider:)")));
- (RegionsRegionsBuilder *)setLogErrorsLogErrors:(BOOL)logErrors __attribute__((swift_name("setLogErrors(logErrors:)")));
- (RegionsRegionsBuilder *)setMetadataRequestPathMetadataRequestPath:(NSString *)metadataRequestPath __attribute__((swift_name("setMetadataRequestPath(metadataRequestPath:)")));
- (RegionsRegionsBuilder *)setPersistencePreferenceNameName:(NSString * _Nullable)name __attribute__((swift_name("setPersistencePreferenceName(name:)")));
- (RegionsRegionsBuilder *)setPlatformInstancesProviderProvider:(id<RegionsPlatformInstancesProvider>)provider __attribute__((swift_name("setPlatformInstancesProvider(provider:)")));
- (RegionsRegionsBuilder *)setRegionJsonFallbackRegionJsonFallback:(RegionsRegionJsonFallback *)regionJsonFallback __attribute__((swift_name("setRegionJsonFallback(regionJsonFallback:)")));
- (RegionsRegionsBuilder *)setShadowsocksRegionsRequestPathShadowsocksRegionsRequestPath:(NSString *)shadowsocksRegionsRequestPath __attribute__((swift_name("setShadowsocksRegionsRequestPath(shadowsocksRegionsRequestPath:)")));
- (RegionsRegionsBuilder *)setUserAgentUserAgent:(NSString *)userAgent __attribute__((swift_name("setUserAgent(userAgent:)")));
- (RegionsRegionsBuilder *)setVpnRegionsRequestPathVpnRegionsRequestPath:(NSString *)vpnRegionsRequestPath __attribute__((swift_name("setVpnRegionsRequestPath(vpnRegionsRequestPath:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol RegionsKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface RegionsKotlinEnum<E> : RegionsBase <RegionsKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RegionsKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsProtocol")))
@interface RegionsRegionsProtocol : RegionsKotlinEnum<RegionsRegionsProtocol *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) RegionsRegionsProtocol *openvpnTcp __attribute__((swift_name("openvpnTcp")));
@property (class, readonly) RegionsRegionsProtocol *openvpnUdp __attribute__((swift_name("openvpnUdp")));
@property (class, readonly) RegionsRegionsProtocol *wireguard __attribute__((swift_name("wireguard")));
@property (class, readonly) RegionsRegionsProtocol *meta __attribute__((swift_name("meta")));
+ (RegionsKotlinArray<RegionsRegionsProtocol *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<RegionsRegionsProtocol *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *protocol __attribute__((swift_name("protocol")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsUtils")))
@interface RegionsRegionsUtils : RegionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)regionsUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RegionsRegionsUtils *shared __attribute__((swift_name("shared")));
- (RegionsVpnRegionsResponse *)parseRegionsResponseString:(NSString *)regionsResponseString __attribute__((swift_name("parse(regionsResponseString:)")));
- (NSString *)stringifyRegionsResponse:(RegionsVpnRegionsResponse *)regionsResponse __attribute__((swift_name("stringify(regionsResponse:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol RegionsKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<RegionsKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Regions")))
@interface RegionsRegions : RegionsBase <RegionsRegionsAPI, RegionsKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) RegionsRegionsCompanion *companion __attribute__((swift_name("companion")));
- (void)fetchShadowsocksRegionsLocale:(NSString *)locale callback:(void (^)(NSArray<RegionsShadowsocksRegionsResponse *> *, RegionsKotlinError * _Nullable))callback __attribute__((swift_name("fetchShadowsocksRegions(locale:callback:)")));
- (void)fetchVpnRegionsLocale:(NSString *)locale callback:(void (^)(RegionsVpnRegionsResponse * _Nullable, RegionsKotlinError * _Nullable))callback __attribute__((swift_name("fetchVpnRegions(locale:callback:)")));
- (void)pingRequestsCallback:(void (^)(NSArray<RegionsRegionLowerLatencyInformation *> *, RegionsKotlinError * _Nullable))callback __attribute__((swift_name("pingRequests(callback:)")));
@property (readonly) id<RegionsKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Regions.Companion")))
@interface RegionsRegionsCompanion : RegionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RegionsRegionsCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShadowsocksRegionsResponse")))
@interface RegionsShadowsocksRegionsResponse : RegionsBase
- (instancetype)initWithRegion:(NSString *)region host:(NSString *)host port:(int32_t)port key:(NSString *)key cipher:(NSString *)cipher __attribute__((swift_name("init(region:host:port:key:cipher:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RegionsShadowsocksRegionsResponseCompanion *companion __attribute__((swift_name("companion")));
- (RegionsShadowsocksRegionsResponse *)doCopyRegion:(NSString *)region host:(NSString *)host port:(int32_t)port key:(NSString *)key cipher:(NSString *)cipher __attribute__((swift_name("doCopy(region:host:port:key:cipher:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cipher __attribute__((swift_name("cipher")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) NSString *region __attribute__((swift_name("region")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShadowsocksRegionsResponse.Companion")))
@interface RegionsShadowsocksRegionsResponseCompanion : RegionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RegionsShadowsocksRegionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<RegionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnRegionsResponse")))
@interface RegionsVpnRegionsResponse : RegionsBase
- (instancetype)initWithGroups:(NSDictionary<NSString *, NSArray<RegionsVpnRegionsResponseProtocolDetails *> *> *)groups regions:(NSArray<RegionsVpnRegionsResponseRegion *> *)regions __attribute__((swift_name("init(groups:regions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RegionsVpnRegionsResponseCompanion *companion __attribute__((swift_name("companion")));
- (RegionsVpnRegionsResponse *)doCopyGroups:(NSDictionary<NSString *, NSArray<RegionsVpnRegionsResponseProtocolDetails *> *> *)groups regions:(NSArray<RegionsVpnRegionsResponseRegion *> *)regions __attribute__((swift_name("doCopy(groups:regions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSArray<RegionsVpnRegionsResponseProtocolDetails *> *> *groups __attribute__((swift_name("groups")));
@property (readonly) NSArray<RegionsVpnRegionsResponseRegion *> *regions __attribute__((swift_name("regions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnRegionsResponse.Companion")))
@interface RegionsVpnRegionsResponseCompanion : RegionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RegionsVpnRegionsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<RegionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnRegionsResponse.ProtocolDetails")))
@interface RegionsVpnRegionsResponseProtocolDetails : RegionsBase
- (instancetype)initWithName:(NSString *)name ports:(NSArray<RegionsInt *> *)ports __attribute__((swift_name("init(name:ports:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RegionsVpnRegionsResponseProtocolDetailsCompanion *companion __attribute__((swift_name("companion")));
- (RegionsVpnRegionsResponseProtocolDetails *)doCopyName:(NSString *)name ports:(NSArray<RegionsInt *> *)ports __attribute__((swift_name("doCopy(name:ports:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<RegionsInt *> *ports __attribute__((swift_name("ports")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnRegionsResponse.ProtocolDetailsCompanion")))
@interface RegionsVpnRegionsResponseProtocolDetailsCompanion : RegionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RegionsVpnRegionsResponseProtocolDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<RegionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnRegionsResponse.Region")))
@interface RegionsVpnRegionsResponseRegion : RegionsBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name country:(NSString *)country dns:(NSString *)dns geo:(BOOL)geo offline:(BOOL)offline latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude autoRegion:(BOOL)autoRegion portForward:(BOOL)portForward proxy:(NSArray<NSString *> *)proxy servers:(NSDictionary<NSString *, NSArray<RegionsVpnRegionsResponseRegionServerDetails *> *> *)servers __attribute__((swift_name("init(id:name:country:dns:geo:offline:latitude:longitude:autoRegion:portForward:proxy:servers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RegionsVpnRegionsResponseRegionCompanion *companion __attribute__((swift_name("companion")));
- (RegionsVpnRegionsResponseRegion *)doCopyId:(NSString *)id name:(NSString *)name country:(NSString *)country dns:(NSString *)dns geo:(BOOL)geo offline:(BOOL)offline latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude autoRegion:(BOOL)autoRegion portForward:(BOOL)portForward proxy:(NSArray<NSString *> *)proxy servers:(NSDictionary<NSString *, NSArray<RegionsVpnRegionsResponseRegionServerDetails *> *> *)servers __attribute__((swift_name("doCopy(id:name:country:dns:geo:offline:latitude:longitude:autoRegion:portForward:proxy:servers:)")));
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
@property (readonly) NSDictionary<NSString *, NSArray<RegionsVpnRegionsResponseRegionServerDetails *> *> *servers __attribute__((swift_name("servers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnRegionsResponse.RegionCompanion")))
@interface RegionsVpnRegionsResponseRegionCompanion : RegionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RegionsVpnRegionsResponseRegionCompanion *shared __attribute__((swift_name("shared")));
- (id<RegionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnRegionsResponse.RegionServerDetails")))
@interface RegionsVpnRegionsResponseRegionServerDetails : RegionsBase
- (instancetype)initWithIp:(NSString *)ip cn:(NSString *)cn usesVanillaOVPN:(BOOL)usesVanillaOVPN __attribute__((swift_name("init(ip:cn:usesVanillaOVPN:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) RegionsVpnRegionsResponseRegionServerDetailsCompanion *companion __attribute__((swift_name("companion")));
- (RegionsVpnRegionsResponseRegionServerDetails *)doCopyIp:(NSString *)ip cn:(NSString *)cn usesVanillaOVPN:(BOOL)usesVanillaOVPN __attribute__((swift_name("doCopy(ip:cn:usesVanillaOVPN:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cn __attribute__((swift_name("cn")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@property (readonly) BOOL usesVanillaOVPN __attribute__((swift_name("usesVanillaOVPN")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VpnRegionsResponse.RegionServerDetailsCompanion")))
@interface RegionsVpnRegionsResponseRegionServerDetailsCompanion : RegionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RegionsVpnRegionsResponseRegionServerDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<RegionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegionsAPIKt")))
@interface RegionsRegionsAPIKt : RegionsBase
@property (class, readonly) int32_t REGIONS_PING_TIMEOUT __attribute__((swift_name("REGIONS_PING_TIMEOUT")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface RegionsKotlinThrowable : RegionsBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(RegionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(RegionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (RegionsKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) RegionsKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinError")))
@interface RegionsKotlinError : RegionsKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(RegionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(RegionsKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface RegionsKotlinEnumCompanion : RegionsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) RegionsKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface RegionsKotlinArray<T> : RegionsBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(RegionsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<RegionsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol RegionsKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<RegionsKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<RegionsKotlinCoroutineContextElement> _Nullable)getKey:(id<RegionsKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<RegionsKotlinCoroutineContext>)minusKeyKey:(id<RegionsKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<RegionsKotlinCoroutineContext>)plusContext:(id<RegionsKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol RegionsKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<RegionsKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<RegionsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol RegionsKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<RegionsKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<RegionsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol RegionsKotlinx_serialization_coreKSerializer <RegionsKotlinx_serialization_coreSerializationStrategy, RegionsKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol RegionsKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol RegionsKotlinCoroutineContextElement <RegionsKotlinCoroutineContext>
@required
@property (readonly) id<RegionsKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol RegionsKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol RegionsKotlinx_serialization_coreEncoder
@required
- (id<RegionsKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<RegionsKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<RegionsKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<RegionsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<RegionsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) RegionsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol RegionsKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<RegionsKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<RegionsKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<RegionsKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) RegionsKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol RegionsKotlinx_serialization_coreDecoder
@required
- (id<RegionsKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<RegionsKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (RegionsKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<RegionsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<RegionsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) RegionsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol RegionsKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<RegionsKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<RegionsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<RegionsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) RegionsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface RegionsKotlinx_serialization_coreSerializersModule : RegionsBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<RegionsKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<RegionsKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<RegionsKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<RegionsKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<RegionsKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<RegionsKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<RegionsKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<RegionsKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol RegionsKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface RegionsKotlinx_serialization_coreSerialKind : RegionsBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol RegionsKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<RegionsKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<RegionsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<RegionsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<RegionsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) RegionsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface RegionsKotlinNothing : RegionsBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol RegionsKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<RegionsKotlinKClass>)kClass provider:(id<RegionsKotlinx_serialization_coreKSerializer> (^)(NSArray<id<RegionsKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<RegionsKotlinKClass>)kClass serializer:(id<RegionsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<RegionsKotlinKClass>)baseClass actualClass:(id<RegionsKotlinKClass>)actualClass actualSerializer:(id<RegionsKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<RegionsKotlinKClass>)baseClass defaultDeserializerProvider:(id<RegionsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<RegionsKotlinKClass>)baseClass defaultDeserializerProvider:(id<RegionsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<RegionsKotlinKClass>)baseClass defaultSerializerProvider:(id<RegionsKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol RegionsKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol RegionsKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol RegionsKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol RegionsKotlinKClass <RegionsKotlinKDeclarationContainer, RegionsKotlinKAnnotatedElement, RegionsKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
