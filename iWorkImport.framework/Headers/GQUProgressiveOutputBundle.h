/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>

@class GQUProgressiveHelper;

__attribute__((visibility("hidden")))
@interface GQUProgressiveOutputBundle : XXUnknownSuperclass <GQUOutputBundle> {
@private
	GQUProgressiveHelper *mHelper;	// 4 = 0x4
	CFDictionaryRef mQuickLookProperties;	// 8 = 0x8
	CFDictionaryRef mAttachmentsURLs;	// 12 = 0xc
	CFDictionaryRef mComputedAttachments;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
	CFStringRef mUriScheme;	// 24 = 0x18
	BOOL mPreviewStarted;	// 28 = 0x1c
}
- (id)initWithHandler:(id)handler;	// 0x492a1
- (void)dealloc;	// 0x491d1
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x49161
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x48421
- (BOOL)appendData:(CFDataRef)data mimeType:(CFStringRef)type resourceName:(CFStringRef)name;	// 0x48451
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x48fb5
- (void)setDocumentSize:(CGSize)size;	// 0x483d5
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x483d9
- (void)startProgressiveData;	// 0x48f4d
- (void)closeAttachment:(CFStringRef)attachment;	// 0x484a5
- (CFURLRef)getAttachmentURL:(CFStringRef)url mimeType:(CFStringRef)type;	// 0x48e31
- (void)setCurrentSheetUri:(CFStringRef)uri;	// 0x484e1
@end
