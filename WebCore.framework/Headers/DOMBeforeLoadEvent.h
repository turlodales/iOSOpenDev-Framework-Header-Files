/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/DOMEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMBeforeLoadEvent : DOMEvent {
}
@property(readonly, copy) NSString *url;	// G=0x2ef2c1; 
// declared property getter: - (id)url;	// 0x2ef2c1
- (void)initBeforeLoadEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable url:(id)url;	// 0x2ef389
@end
