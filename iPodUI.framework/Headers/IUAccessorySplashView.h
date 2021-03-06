/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class UIImageView, UIButton, UINavigationBar, UITabBar, UIImage, UILabel;

@interface IUAccessorySplashView : XXUnknownSuperclass {
	unsigned _imageIsExternal : 1;	// 46 = 0x2e
	UIImageView *_imageView;	// 48 = 0x30
	UILabel *_label;	// 52 = 0x34
	UINavigationBar *_navigationBar;	// 56 = 0x38
	UILabel *_routeNameLabel;	// 60 = 0x3c
	UIButton *_routePickerButton;	// 64 = 0x40
	UITabBar *_tabBar;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) UILabel *routeNameLabel;	// G=0x66871; 
@property(readonly, assign, nonatomic) UIButton *routePickerButton;	// G=0x66759; 
@property(retain, nonatomic) UIImage *image;	// G=0x66739; S=0x669b9; 
- (id)_navBarTitle;	// 0x66af9
- (void)_availableRoutesChangedNotification:(id)notification;	// 0x66ae5
- (void)_routePickerButtonAction:(id)action;	// 0x66a59
// declared property setter: - (void)setImage:(id)image;	// 0x669b9
- (void)setExternalImage:(id)image;	// 0x66991
// declared property getter: - (id)routeNameLabel;	// 0x66871
// declared property getter: - (id)routePickerButton;	// 0x66759
// declared property getter: - (id)image;	// 0x66739
- (void)layoutSubviews;	// 0x66229
- (void)reloadRoutePickerAnimated:(BOOL)animated;	// 0x66079
- (void)dealloc;	// 0x65f39
- (id)initWithFrame:(CGRect)frame;	// 0x65a25
@end
