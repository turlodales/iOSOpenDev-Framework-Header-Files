/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/XXUnknownSuperclass.h>

@class NSArray, NSString, NSDictionary;

@interface FTRegion : XXUnknownSuperclass {
	NSDictionary *_dictionary;	// 4 = 0x4
	NSArray *_subRegions;	// 8 = 0x8
	FTRegion *_parentRegion;	// 12 = 0xc
}
@property(retain) FTRegion *_parentRegion;	// G=0x1c8f9; S=0x1c90d; @synthesize
@property(retain) NSDictionary *_dictionary;	// G=0x1c8c1; S=0x1c8d5; @synthesize
@property(readonly, assign) NSArray *subRegions;	// G=0x1c5b1; @synthesize=_subRegions
@property(readonly, assign) FTRegion *parentRegion;	// G=0x1c5a1; 
@property(readonly, assign) NSString *basePhoneNumber;	// G=0x1c7dd; 
@property(readonly, assign) NSString *regionID;	// G=0x1c805; 
@property(readonly, assign) NSString *label;	// G=0x1c7b5; 
@property(readonly, assign) NSString *isoCode;	// G=0x1c78d; 
// declared property setter: - (void)set_parentRegion:(id)region;	// 0x1c90d
// declared property getter: - (id)_parentRegion;	// 0x1c8f9
// declared property setter: - (void)set_dictionary:(id)dictionary;	// 0x1c8d5
// declared property getter: - (id)_dictionary;	// 0x1c8c1
- (id)description;	// 0x1c82d
// declared property getter: - (id)regionID;	// 0x1c805
// declared property getter: - (id)basePhoneNumber;	// 0x1c7dd
// declared property getter: - (id)label;	// 0x1c7b5
// declared property getter: - (id)isoCode;	// 0x1c78d
- (id)regionWithID:(id)anId;	// 0x1c5c1
// declared property getter: - (id)subRegions;	// 0x1c5b1
// declared property getter: - (id)parentRegion;	// 0x1c5a1
- (void)_setParentRegion:(id)region;	// 0x1c591
- (void)dealloc;	// 0x1c50d
- (id)_initWithDictionary:(id)dictionary;	// 0x1c335
@end
