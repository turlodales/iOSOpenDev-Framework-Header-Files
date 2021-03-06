/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/XXUnknownSuperclass.h>

@class NSURL, NSString, NSNumber, NSMutableOrderedSet, PLManagedAlbum;

@interface PLPersistedAlbumMetadata : XXUnknownSuperclass {
@private
	NSString *_title;	// 4 = 0x4
	NSString *_uuid;	// 8 = 0x8
	NSNumber *_kind;	// 12 = 0xc
	NSMutableOrderedSet *_assetUUIDs;	// 16 = 0x10
	PLManagedAlbum *_managedAlbum;	// 20 = 0x14
	NSURL *_metadataURL;	// 24 = 0x18
}
@property(retain, nonatomic) NSURL *metadataURL;	// G=0x6ce15; S=0x6ce25; @synthesize=_metadataURL
@property(retain, nonatomic) PLManagedAlbum *managedAlbum;	// G=0x6cde1; S=0x6cdf1; @synthesize=_managedAlbum
@property(retain, nonatomic) NSMutableOrderedSet *assetUUIDs;	// G=0x6cdad; S=0x6cdbd; @synthesize=_assetUUIDs
@property(retain, nonatomic) NSNumber *kind;	// G=0x6cd79; S=0x6cd89; @synthesize=_kind
@property(retain, nonatomic) NSString *uuid;	// G=0x6cd45; S=0x6cd55; @synthesize=_uuid
@property(retain, nonatomic) NSString *title;	// G=0x6cd11; S=0x6cd21; @synthesize=_title
// declared property setter: - (void)setMetadataURL:(id)url;	// 0x6ce25
// declared property getter: - (id)metadataURL;	// 0x6ce15
// declared property setter: - (void)setManagedAlbum:(id)album;	// 0x6cdf1
// declared property getter: - (id)managedAlbum;	// 0x6cde1
// declared property setter: - (void)setAssetUUIDs:(id)uuids;	// 0x6cdbd
// declared property getter: - (id)assetUUIDs;	// 0x6cdad
// declared property setter: - (void)setKind:(id)kind;	// 0x6cd89
// declared property getter: - (id)kind;	// 0x6cd79
// declared property setter: - (void)setUuid:(id)uuid;	// 0x6cd55
// declared property getter: - (id)uuid;	// 0x6cd45
// declared property setter: - (void)setTitle:(id)title;	// 0x6cd21
// declared property getter: - (id)title;	// 0x6cd11
- (void)_saveMetadata;	// 0x6cab5
- (void)_readMetadata;	// 0x6c8dd
- (id)description;	// 0x6c839
- (BOOL)containsAsset:(id)asset;	// 0x6c7fd
- (id)albumFromDataInManagedObjectContext:(id)managedObjectContext;	// 0x6c75d
- (void)removePersistedAlbumData;	// 0x6c715
- (void)persistAlbumData;	// 0x6c705
- (id)initWithPersistedDataAtPath:(id)path;	// 0x6c6a9
- (id)initWithPLGenericAlbum:(id)plgenericAlbum;	// 0x6c5cd
- (void)dealloc;	// 0x6c525
- (id)init;	// 0x6c50d
@end
