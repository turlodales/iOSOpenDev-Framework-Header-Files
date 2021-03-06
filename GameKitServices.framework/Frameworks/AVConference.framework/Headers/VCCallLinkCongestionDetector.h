/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

#import <AVConference/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface VCCallLinkCongestionDetector : XXUnknownSuperclass {
@private
	BOOL isLinkCongested;	// 4 = 0x4
	double rttThreshold;	// 8 = 0x8
	double lossRateThreshold;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL isLinkCongested;	// G=0x600c1; S=0x600d1; @synthesize
- (id)initWithRTTThreshold:(double)rttthreshold lossRateThreshold:(double)threshold;	// 0x604b9
- (void)addNewRTT:(double)rtt packetLossRate:(double)rate timestamp:(double)timestamp;	// 0x60069
// declared property getter: - (BOOL)isLinkCongested;	// 0x600c1
// declared property setter: - (void)setIsLinkCongested:(BOOL)congested;	// 0x600d1
@end
