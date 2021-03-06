/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDRowBlock.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EDRowBlock : XXUnknownSuperclass {
@private
	CFDataRef mPackedData;	// 4 = 0x4
	CFDataRef mCellOffsets;	// 8 = 0x8
}
+ (id)rowBlock;	// 0xf0d6d
- (id)init;	// 0xf0db5
- (void)dealloc;	// 0x111425
- (void)doneWithContent;	// 0x111465
- (unsigned)rowCount;	// 0x10a61d
- (unsigned)firstRowNumber;	// 0xf1da5
- (unsigned)lastRowNumber;	// 0xf8b21
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0xf1dc9
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0xf10ad
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0xf1041
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0xf1055
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0xf8ba1
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0xfacfd
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0xfaca9
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0xfac6d
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0xf1151
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0xf15c1
@end

@interface EDRowBlock (EDInternal)
@property(assign) unsigned index;	// G=0x106c59; S=0xf0e49; converted property
// converted property getter: - (unsigned)index;	// 0x106c59
// converted property setter: - (void)setIndex:(unsigned)index;	// 0xf0e49
- (void)incrementIndex;	// 0x26902d
@end

@interface EDRowBlock (EDDomPersistence)
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x2691d5
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x269261
@end

@interface EDRowBlock (Private)
- (unsigned long)startOfCellsOrThrow;	// 0x268e41
- (void)checkCellOffsetOrThrow:(unsigned long)aThrow;	// 0x268f11
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x269091
@end
