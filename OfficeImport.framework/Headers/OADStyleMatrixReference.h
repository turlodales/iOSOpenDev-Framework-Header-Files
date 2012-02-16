/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : XXUnknownSuperclass <NSCopying> {
@private
	unsigned long mMatrixIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(assign) unsigned long matrixIndex;	// G=0x1b9bc5; S=0x1b9619; converted property
@property(retain) id color;	// G=0x1b9c15; S=0x1b9629; converted property
+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x2a6c95
- (id)initWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x1e142d
- (void)dealloc;	// 0x1bc155
- (id)copyWithZone:(NSZone *)zone;	// 0x1ce8e9
// converted property getter: - (unsigned long)matrixIndex;	// 0x1b9bc5
// converted property setter: - (void)setMatrixIndex:(unsigned long)index;	// 0x1b9619
// converted property getter: - (id)color;	// 0x1b9c15
// converted property setter: - (void)setColor:(id)color;	// 0x1b9629
- (void)applyToStrokeInProperties:(id)properties styleMatrix:(id)matrix;	// 0x2a6f25
- (void)applyToFillInProperties:(id)properties styleMatrix:(id)matrix;	// 0x2a6df1
- (void)applyToEffectsInProperties:(id)properties styleMatrix:(id)matrix;	// 0x2a6ce1
@end