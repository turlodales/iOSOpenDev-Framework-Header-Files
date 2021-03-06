/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/CALRunLoopSemaphore.h>
#import <DACalDAV/DACalDAV-Structs.h>
#import <DACalDAV/XXUnknownSuperclass.h>

@class NSLock;

@interface CALRunLoopSemaphore : XXUnknownSuperclass {
	CFRunLoopRef _rloop;	// 4 = 0x4
	int _count;	// 8 = 0x8
	int _pipe[2];	// 12 = 0xc
	CFSocketRef _socket;	// 20 = 0x14
	CFRunLoopSourceRef _socketSource;	// 24 = 0x18
	NSLock *_countLock;	// 28 = 0x1c
}
- (int)value;	// 0x14bd1
- (void)up;	// 0x14b61
- (void)down;	// 0x14a99
- (void)finalize;	// 0x149fd
- (void)dealloc;	// 0x14945
- (id)initWithCFRunLoop:(CFRunLoopRef)cfrunLoop;	// 0x14815
- (id)init;	// 0x147f1
@end

@interface CALRunLoopSemaphore (Private)
- (void)awake;	// 0x147ed
@end
