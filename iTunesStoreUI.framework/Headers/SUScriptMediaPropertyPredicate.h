/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, MPMediaPropertyPredicate;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {
	NSString *_comparisonType;	// 36 = 0x24
	NSString *_property;	// 40 = 0x28
	id _value;	// 44 = 0x2c
}
@property(readonly, assign) id value;	// G=0x7c13d; 
@property(readonly, assign) NSString *property;	// G=0x7c0e9; 
@property(readonly, assign) NSString *comparisonType;	// G=0x7c095; 
@property(readonly, assign, nonatomic) MPMediaPropertyPredicate *nativePredicate;	// G=0x7c061; 
+ (void)initialize;	// 0x7c5bd
+ (id)webScriptNameForKey:(const char *)key;	// 0x7c4a9
- (id)scriptAttributeKeys;	// 0x7c55d
- (id)attributeKeys;	// 0x7c54d
- (id)_playlistAttributesForScriptArray:(id)scriptArray;	// 0x7c3d5
- (void)_setProperty:(id)property value:(id)value comparisonType:(int)type;	// 0x7c31d
- (id)_copyValue;	// 0x7c2d5
- (id)_copyProperty;	// 0x7c23d
- (id)_copyComparisonType;	// 0x7c191
// declared property getter: - (id)value;	// 0x7c13d
// declared property getter: - (id)property;	// 0x7c0e9
// declared property getter: - (id)comparisonType;	// 0x7c095
- (id)_className;	// 0x7c089
// declared property getter: - (id)nativePredicate;	// 0x7c061
- (void)dealloc;	// 0x7bfed
- (id)initWithProperty:(id)property value:(id)value comparisonType:(id)type;	// 0x7bda5
@end
