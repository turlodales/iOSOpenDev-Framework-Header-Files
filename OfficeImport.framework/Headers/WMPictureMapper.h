/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDrawableMapper.h>

@class WDPicture;

__attribute__((visibility("hidden")))
@interface WMPictureMapper : CMDrawableMapper {
@private
	WDPicture *wdPicture;	// 80 = 0x50
}
- (id)initWithWDPicture:(id)wdpicture parent:(id)parent;	// 0x94ea1
- (void)mapAt:(id)at withState:(id)state;	// 0x91275
- (void)mapBounds;	// 0x913f9
- (void)setBoundingBox;	// 0x94f89
@end
