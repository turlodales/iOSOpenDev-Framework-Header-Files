/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class PDAnimationInfoData;

__attribute__((visibility("hidden")))
@interface PDAnimationInfo : XXUnknownSuperclass {
@private
	PDAnimationInfoData *mEntrance;	// 4 = 0x4
	PDAnimationInfoData *mExit;	// 8 = 0x8
	PDAnimationInfoData *mMedia;	// 12 = 0xc
}
@property(retain, nonatomic) PDAnimationInfoData *mediaData;	// G=0x229c3d; S=0x22a5ad; @synthesize=mMedia
@property(retain) id entranceData;	// G=0x229c1d; S=0x229c8d; converted property
@property(retain) id exitData;	// G=0x229c2d; S=0x229ccd; converted property
- (void)dealloc;	// 0x22a539
// converted property setter: - (void)setEntranceData:(id)data;	// 0x229c8d
// converted property getter: - (id)entranceData;	// 0x229c1d
// converted property setter: - (void)setExitData:(id)data;	// 0x229ccd
// converted property getter: - (id)exitData;	// 0x229c2d
// declared property getter: - (id)mediaData;	// 0x229c3d
// declared property setter: - (void)setMediaData:(id)data;	// 0x22a5ad
@end