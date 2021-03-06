/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/XXUnknownSuperclass.h>
#import <Conference/CNFRegFirstRunExperience.h>

@class UIBarButtonItem, CNFRegLearnMoreButton, CNFRegController;
@protocol CNFRegFirstRunDelegate;

@interface CNFRegSplashScreenController : XXUnknownSuperclass <CNFRegFirstRunExperience> {
@private
	CNFRegLearnMoreButton *_learnMoreButton;	// 164 = 0xa4
	id<CNFRegFirstRunDelegate> _delegate;	// 168 = 0xa8
	CNFRegController *_regController;	// 172 = 0xac
}
@property(assign, nonatomic) id<CNFRegFirstRunDelegate> delegate;	// G=0x2e0e9; S=0x2e0f9; @synthesize=_delegate
@property(retain, nonatomic) CNFRegController *regController;	// G=0x2e0d9; S=0x2e191; @synthesize=_regController
@property(readonly, assign, nonatomic) int currentAppearanceStyle;	// G=0x2e0d5; @dynamic
@property(retain, nonatomic) UIBarButtonItem *customLeftButton;	// G=0x2e20d; S=0x2e235; @dynamic
@property(retain, nonatomic) UIBarButtonItem *customRightButton;	// G=0x2e1b9; S=0x2e1e1; @dynamic
@property(assign, nonatomic) BOOL showSplash;
- (id)init;	// 0x2e109
- (id)initWithRegController:(id)regController account:(id)account;	// 0x2f0b5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f0a9
- (void)dealloc;	// 0x2f039
- (id)splashImage;	// 0x2efcd
- (float)_startingYOffset;	// 0x2ef91
- (void)loadView;	// 0x2e5f5
- (void)willBecomeActive;	// 0x2e5a5
- (void)viewWillAppear:(BOOL)view;	// 0x2e551
- (void)_learnMorePressed:(id)pressed;	// 0x2e521
- (void)_getStartedPressed:(id)pressed;	// 0x2e40d
- (id)_shadowLabelColor;	// 0x2e3c5
- (id)_shadowedLabelWithFont:(id)font text:(id)text;	// 0x2e261
// declared property getter: - (int)currentAppearanceStyle;	// 0x2e0d5
// declared property setter: - (void)setCustomLeftButton:(id)button;	// 0x2e235
// declared property getter: - (id)customLeftButton;	// 0x2e20d
// declared property setter: - (void)setCustomRightButton:(id)button;	// 0x2e1e1
// declared property getter: - (id)customRightButton;	// 0x2e1b9
// declared property getter: - (id)regController;	// 0x2e0d9
// declared property setter: - (void)setRegController:(id)controller;	// 0x2e191
// declared property getter: - (id)delegate;	// 0x2e0e9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2e0f9
@end
