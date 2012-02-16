/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

#import <DataAccessUI/XXUnknownSuperclass.h>

@class UILabel, UIImageView;

@interface ASMailFolderCell : XXUnknownSuperclass {
	UILabel *_mailFolderText;	// 244 = 0xf4
	UIImageView *_mailFolderIcon;	// 248 = 0xf8
	unsigned _level;	// 252 = 0xfc
}
@property(assign, getter=isChecked) BOOL checked;	// G=0xc3cd; S=0xc3ed; converted property
+ (float)mtcOffsetForLevel:(int)level;	// 0xc47d
+ (id)_iconFromBundle:(id)bundle forASFolderType:(int)asfolderType nested:(BOOL)nested;	// 0xbfd5
+ (int)_mailboxUidTypeForASFolderType:(int)asfolderType;	// 0xbfbd
+ (int)_cacheIndexForType:(int)type nested:(BOOL)nested;	// 0xbf6d
- (void)dealloc;	// 0xc6dd
- (void)layoutSubviews;	// 0xc4b5
// converted property setter: - (void)setChecked:(BOOL)checked;	// 0xc3ed
// converted property getter: - (BOOL)isChecked;	// 0xc3cd
- (void)setEnabled:(BOOL)enabled;	// 0xc349
- (void)setMailFolder:(id)folder withIndent:(unsigned)indent;	// 0xc295
- (void)_setupMailFolderIconForImage:(id)image;	// 0xc1f9
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0xc091
@end