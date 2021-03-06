/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSDictionary, NSArray;

@interface ASSettingsTask : ASTask {
@private
	NSArray *_getters;	// 104 = 0x68
	NSDictionary *_setters;	// 108 = 0x6c
}
@property(retain) NSDictionary *setters;	// G=0x15c6d; S=0x15c81; @synthesize=_setters
@property(retain) NSArray *getters;	// G=0x15c35; S=0x15c49; @synthesize=_getters
// declared property setter: - (void)setSetters:(id)setters;	// 0x15c81
// declared property getter: - (id)setters;	// 0x15c6d
// declared property setter: - (void)setGetters:(id)getters;	// 0x15c49
// declared property getter: - (id)getters;	// 0x15c35
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x15bad
- (void)finishWithError:(id)error;	// 0x15785
- (BOOL)processContext:(id)context;	// 0x15481
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x1546d
- (id)requestBody;	// 0x152fd
- (int)commandCode;	// 0x152f9
- (void)dealloc;	// 0x15299
- (id)init;	// 0x1524d
@end
