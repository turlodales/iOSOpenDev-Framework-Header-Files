/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MailMessage.h>

@class DAMailMessage, Message, NSString, MailboxUid;

@interface MFDAMessage : MailMessage {
	DAMailMessage *_DAMailMessage;	// 108 = 0x6c
	Message *_rfc822CreatedMessage;	// 112 = 0x70
	MailboxUid *_mailbox;	// 116 = 0x74
	NSString *_externalConversationID;	// 120 = 0x78
}
@property(readonly, assign, nonatomic) DAMailMessage *DAMailMessage;	// G=0x68f21; @synthesize=_DAMailMessage
@property(readonly, retain) MailboxUid *mailbox;	// G=0x68efd; converted property
@property(readonly, retain) NSString *externalConversationID;	// G=0x68eed; converted property
- (id)initWithDAMailMessage:(id)damailMessage mailbox:(id)mailbox;	// 0x69175
- (void)dealloc;	// 0x68f31
- (id)remoteID;	// 0x69155
// converted property getter: - (id)externalConversationID;	// 0x68eed
// converted property getter: - (id)mailbox;	// 0x68efd
- (id)headers;	// 0x69135
- (unsigned long long)messageFlags;	// 0x69055
- (id)messageBody;	// 0x69035
- (BOOL)messageData:(id *)data messageSize:(unsigned *)size isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x68f0d
- (id)remoteMailboxURL;	// 0x6900d
- (unsigned)messageSize;	// 0x68fa5
// declared property getter: - (id)DAMailMessage;	// 0x68f21
@end
