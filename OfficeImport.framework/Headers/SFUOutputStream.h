/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/SFUSimpleOutputStream.h>


@protocol SFUOutputStream <SFUSimpleOutputStream>
- (BOOL)canSeek;
- (void)seekToOffset:(long long)offset whence:(int)whence;
- (long long)offset;
- (BOOL)canCreateInputStream;
- (id)inputStream;
- (void)close;
- (id)closeLocalStream;
@end