/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <IMAVCore/XXUnknownSuperclass.h>
#import <IMAVCore/IMAVCore-Structs.h>

@class IMAVCamera, NSMutableArray, NSArray;

@interface IMAVCameraController : XXUnknownSuperclass {
	NSMutableArray *_cameras;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
}
@property(retain, nonatomic) IMAVCamera *currentCamera;	// G=0x4484d; S=0x44725; 
@property(readonly, assign, nonatomic) NSArray *cameras;	// G=0x44085; 
+ (id)sharedInstance;	// 0x43f1d
// declared property getter: - (id)currentCamera;	// 0x4484d
// declared property setter: - (void)setCurrentCamera:(id)camera;	// 0x44725
- (void)_loadSavedCamera;	// 0x4444d
- (void)_rebuildCameraList;	// 0x4426d
// declared property getter: - (id)cameras;	// 0x44085
- (void)dealloc;	// 0x44021
- (id)init;	// 0x43fd1
- (BOOL)retainWeakReference;	// 0x43fcd
- (BOOL)allowsWeakReference;	// 0x43fc9
@end
