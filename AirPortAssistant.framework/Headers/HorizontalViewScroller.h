/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/UIScrollViewDelegate.h>
#import <AirPortAssistant/XXUnknownSuperclass.h>
#import <AirPortAssistant/AirPortAssistant-Structs.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface HorizontalViewScroller : XXUnknownSuperclass <UIScrollViewDelegate> {
	UIView *view;	// 388 = 0x184
	unsigned index;	// 392 = 0x188
}
@property(assign, nonatomic) unsigned index;	// G=0x82aed; S=0x82afd; @synthesize
@property(retain, nonatomic) UIView *view;	// G=0x82ab9; S=0x82ac9; @synthesize
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x82afd
// declared property getter: - (unsigned)index;	// 0x82aed
// declared property setter: - (void)setView:(id)view;	// 0x82ac9
// declared property getter: - (id)view;	// 0x82ab9
- (void)restoreCenterPoint:(CGPoint)point scale:(float)scale;	// 0x828d5
- (CGPoint)minimumContentOffset;	// 0x828c1
- (CGPoint)maximumContentOffset;	// 0x82855
- (float)scaleToRestoreAfterRotation;	// 0x82801
- (CGPoint)pointToCenterAfterRotation;	// 0x82759
- (void)setMaxMinZoomScalesForCurrentBounds;	// 0x8268d
- (void)displayImage:(id)image;	// 0x82569
- (void)displayView:(id)view;	// 0x82485
- (id)viewForZoomingInScrollView:(id)scrollView;	// 0x82471
- (void)layoutSubviews;	// 0x82335
- (void)dealloc;	// 0x822f5
- (id)initWithFrame:(CGRect)frame;	// 0x82251
@end