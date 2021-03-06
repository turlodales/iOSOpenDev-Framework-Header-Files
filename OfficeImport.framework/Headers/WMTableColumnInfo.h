/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMTableColumnInfo : XXUnknownSuperclass {
@private
	NSMutableArray *mStopArray;	// 4 = 0x4
}
- (id)initWithStopArray:(id)stopArray;	// 0x146121
- (void)dealloc;	// 0x147fc1
- (float)stopAt:(unsigned)at;	// 0x146365
- (void)mergeStopArray:(id)array;	// 0x1461a5
- (unsigned)columnSpan:(float)span at:(unsigned)at;	// 0x146f0d
- (unsigned)count;	// 0x2f0e31
@end
