/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDelayedNodeContext.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class EXState, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface EXSheetContext : XXUnknownSuperclass <OCDDelayedNodeContext> {
@private
	EXState *mSheetState;	// 4 = 0x4
	NSURL *mPackageLocation;	// 8 = 0x8
	NSString *mType;	// 12 = 0xc
}
- (id)initWithSheetLocation:(id)sheetLocation sheetXmlType:(id)type state:(id)state;	// 0x1a6215
- (void)dealloc;	// 0x1a96e5
- (bool)loadDelayedNode:(id)node;	// 0x1a67a1
@end