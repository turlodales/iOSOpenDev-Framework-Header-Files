/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMFromSuperParserContext.h>
#import <IMFoundation/IMFoundation-Structs.h>

@class NSArray, NSString, NSAttributedString, NSMutableArray, NSMutableAttributedString;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext {
	NSMutableAttributedString *_content;	// 16 = 0x10
	NSMutableArray *_attachments;	// 20 = 0x14
	NSString *_backgroundColor;	// 24 = 0x18
	NSString *_foregroundColor;	// 28 = 0x1c
	unsigned _offset;	// 32 = 0x20
	int _baseWritingDirection;	// 36 = 0x24
	BOOL _extractAttachments;	// 40 = 0x28
	BOOL _hadBaseWritingDirectionAttribute;	// 41 = 0x29
}
@property(readonly, assign) NSArray *attachments;	// G=0x285a1; @synthesize=_attachments
@property(readonly, assign) NSAttributedString *sanitizedContent;	// G=0x2858d; @synthesize=_content
// declared property getter: - (id)attachments;	// 0x285a1
// declared property getter: - (id)sanitizedContent;	// 0x2858d
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range fileTransferGUID:(id)guid filename:(id)filename bookmark:(id)bookmark width:(id)width height:(id)height;	// 0x284d1
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range characters:(id)characters;	// 0x281c5
- (void)parserDidEnd:(id)parser;	// 0x280c9
- (void)parserDidStart:(id)parser bodyAttributes:(id)attributes;	// 0x27eb1
- (id)resultsForLogging;	// 0x27e81
- (id)name;	// 0x27e75
- (void)dealloc;	// 0x27ded
- (id)initWithAttributedString:(id)attributedString extractAttachments:(BOOL)attachments;	// 0x27d69
@end