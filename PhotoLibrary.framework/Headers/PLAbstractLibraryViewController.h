/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PLAlbumListChangeObserver.h>
#import <PhotoLibrary/PLAbstractLibraryViewController.h>
#import <PhotoLibrary/PLAlbumChangeObserver.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>
#import <PhotoLibrary/PLPhotoLibraryShouldReloadObserver.h>

@class PLSyncProgressView, NSArray, NSObject;
@protocol PLAlbumContainer, PLAssetContainer;

@interface PLAbstractLibraryViewController : XXUnknownSuperclass <PLAlbumListChangeObserver, PLAlbumChangeObserver, PLPhotoLibraryShouldReloadObserver> {
	NSObject *_albumList;	// 152 = 0x98
	NSObject *_hiddenAlbum;	// 156 = 0x9c
	NSArray *_syncProgressAlbums;	// 160 = 0xa0
	unsigned _previousAlbumsCount;	// 164 = 0xa4
	unsigned _ignoreReorderNotificationCount;	// 168 = 0xa8
	unsigned _justCreatedAlbumIndex;	// 172 = 0xac
	unsigned _lastPendingCount;	// 176 = 0xb0
	unsigned _totalItemsCount;	// 180 = 0xb4
	id _didSelectAlbumHandler;	// 184 = 0xb8
	struct {
		unsigned contentMode : 8;
		unsigned hasContent : 1;
		unsigned albumsListViewInSync : 1;
		unsigned syncProgressVisible : 1;
		unsigned visible : 1;
		unsigned reserved : 20;
	} _alcFlags;	// 188 = 0xbc
}
@property(copy, nonatomic) id didSelectAlbumHandler;	// G=0xda441; S=0xda451; @synthesize=_didSelectAlbumHandler
@property(retain, nonatomic) NSObject<PLAssetContainer> *hiddenAlbum;	// G=0x8abd; S=0xd9b29; @synthesize=_hiddenAlbum
@property(readonly, assign, nonatomic) int contentMode;	// G=0x762d; 
@property(readonly, assign, nonatomic) NSObject<PLAlbumContainer> *albumList;	// G=0x3a61; @synthesize=_albumList
// declared property setter: - (void)setDidSelectAlbumHandler:(id)selectAlbumHandler;	// 0xda451
// declared property getter: - (id)didSelectAlbumHandler;	// 0xda441
// declared property getter: - (NSObject *)albumList;	// 0x3a61
// declared property getter: - (NSObject *)hiddenAlbum;	// 0x8abd
- (void)_updateAlbumsWithNotification:(id)notification;	// 0x327d
- (void)_updateSyncProgress;	// 0x7b85
- (void)_updateHasContent;	// 0x35f1
- (void)addAlbum:(id)album;	// 0xd9ec9
- (void)shouldReload:(id)reload;	// 0xd9e85
- (void)albumDidChange:(id)album;	// 0xd9dc1
- (void)albumListDidChange:(id)albumList;	// 0xd9cb1
- (void)viewDidDisappear:(BOOL)view;	// 0x7001
- (void)viewWillAppear:(BOOL)view;	// 0x7af1
- (void)viewDidUnload;	// 0xd9c59
- (id)_syncProgressAlbums;	// 0xd9b81
- (void)setHiddenAlbum:(id)album animated:(BOOL)animated;	// 0xd9b3d
// declared property setter: - (void)setHiddenAlbum:(NSObject *)album;	// 0xd9b29
- (void)setAlbumList:(NSObject *)list contentMode:(int)mode;	// 0x31d5
// declared property getter: - (int)contentMode;	// 0x762d
- (void)didReceiveMemoryWarning;	// 0xd9afd
- (void)dealloc;	// 0xd9a29
- (id)init;	// 0x30e9
@end

@interface PLAbstractLibraryViewController (PrivateForSubclasses)
@property(readonly, assign, nonatomic) BOOL hasContent;	// G=0x3a71; 
@property(assign, nonatomic) BOOL albumsListViewInSync;	// G=0x7b71; S=0x31ad; 
@property(readonly, assign, nonatomic) BOOL libraryViewVisible;	// G=0xda475; 
- (void)increaseIgnoreReorderNotificationCount;	// 0xda489
// declared property getter: - (BOOL)hasContent;	// 0x3a71
// declared property setter: - (void)setAlbumsListViewInSync:(BOOL)sync;	// 0x31ad
// declared property getter: - (BOOL)albumsListViewInSync;	// 0x7b71
// declared property getter: - (BOOL)libraryViewVisible;	// 0xda475
@end

@interface PLAbstractLibraryViewController (OverridePoints)
@property(assign, getter=isSyncProgressVisible) BOOL syncProgressVisible;	// G=0x7e65; S=0x7e79; 
@property(readonly, assign, nonatomic) PLSyncProgressView *syncProgressView;	// G=0xda4b1; 
// declared property setter: - (void)setSyncProgressVisible:(BOOL)visible;	// 0x7e79
// declared property getter: - (BOOL)isSyncProgressVisible;	// 0x7e65
// declared property getter: - (id)syncProgressView;	// 0xda4b1
- (BOOL)updateInterfaceForDeletedAlbumIndexes:(id)deletedAlbumIndexes addedIndexes:(id)indexes changedIndexes:(id)indexes3 needsFullReload:(BOOL)reload;	// 0x3f0d
- (void)updateInterfaceForHasContentChange;	// 0x39a1
- (void)scrollToAlbumAtIndex:(unsigned)index animated:(BOOL)animated select:(BOOL)select;	// 0xda4ad
- (void)beginAddPhotosSessionForAlbum:(NSObject *)album completionHandler:(id)handler;	// 0xda4a9
- (void)navigateToRevealAlbum:(NSObject *)revealAlbum animated:(BOOL)animated;	// 0xda4a5
- (void)navigateToAlbum:(NSObject *)album animated:(BOOL)animated completion:(id)completion;	// 0xda4a1
- (void)hideAlbum:(NSObject *)album;	// 0xda49d
@end
