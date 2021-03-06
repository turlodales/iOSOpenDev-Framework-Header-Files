/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/XXUnknownSuperclass.h>
#import <iLifeSlideshow/MPFilterManager.h>

@class NSArray, NSMutableDictionary;

@interface MPFilterManager : XXUnknownSuperclass {
	NSMutableDictionary *mFilters;	// 4 = 0x4
	NSArray *mFilterCategories;	// 8 = 0x8
	NSMutableDictionary *mFilterPresets;	// 12 = 0xc
}
+ (id)sharedManager;	// 0x56525
+ (void)releaseSharedManager;	// 0x5656d
- (void)dealloc;	// 0x56599
- (id)versionOfFilterID:(id)filterID;	// 0x5630d
- (id)filterIDsForCategoryID:(id)categoryID;	// 0x562f9
- (id)filterCategoryIDs;	// 0x562fd
- (id)presetIDsForFilterID:(id)filterID;	// 0x56345
- (id)attributesForFilterID:(id)filterID andPresetID:(id)anId;	// 0x5638d
- (id)animationsForFilterID:(id)filterID andPresetID:(id)anId;	// 0x56449
@end

@interface MPFilterManager (VeryInternal)
- (id)initWithPaths:(id)paths;	// 0x56689
@end

@interface MPFilterManager (Private)
+ (void)loadFilterManagerWithPaths:(id)paths;	// 0x5662d
@end

@interface MPFilterManager (Internal)
- (id)constraintsForFilterPresetsMatchingList:(id)filterPresetsMatchingList andCriteria:(id)criteria;	// 0x56e25
- (id)randomFilterPresetFromList:(id)list abidingWithConstraints:(id)constraints;	// 0x57679
- (id)filterPresetsMatchingCriteria:(id)criteria;	// 0x572e5
- (id)randomFilter:(BOOL)filter;	// 0x578a5
@end
