/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/XXUnknownSuperclass.h>

@class NSMapTable, NSLock;

@interface GEODirectionsRequester : XXUnknownSuperclass {
	NSMapTable *_pendingRequests;	// 4 = 0x4
	NSLock *_pendingRequestsLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedRequester;	// 0x1e14d
- (id)hostnameForProviderID:(short)providerID;	// 0x1e8b5
- (Class)classForProviderID:(short)providerID;	// 0x1e895
- (void)registerProvider:(Class)provider;	// 0x1e855
- (void)cancelRequest:(id)request;	// 0x1e79d
- (void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;	// 0x1e3ad
- (void)dealloc;	// 0x1e29d
- (id)init;	// 0x1e1c1
@end