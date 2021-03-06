/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUVideoPartListViewController.h>
#import <iPodUI/UIAlertViewDelegate.h>

@class NSIndexPath, UIAlertView;

@interface IUVideoEpisodesViewController : IUVideoPartListViewController <UIAlertViewDelegate> {
	UIAlertView *_deleteConfirmAlertView;	// 232 = 0xe8
	NSIndexPath *_expandedIndexPath;	// 236 = 0xec
	float _expandedRowHeight;	// 240 = 0xf0
}
@property(retain, nonatomic) NSIndexPath *expandedIndexPath;	// G=0x74671; S=0x74681; @synthesize=_expandedIndexPath
// declared property setter: - (void)setExpandedIndexPath:(id)path;	// 0x74681
// declared property getter: - (id)expandedIndexPath;	// 0x74671
- (void)_moreButtonPressedForCell:(id)cell;	// 0x742c9
- (void)_destroyDeleteConfirmAlertView;	// 0x74285
- (void)_deleteEpisodeAtIndex:(int)index;	// 0x74195
- (void)_cancelDeleteConfirmAlertView:(BOOL)view;	// 0x74141
- (void)_rentalDataDidLoadNotification:(id)_rentalData;	// 0x74121
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x740a9
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x73d11
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;	// 0x73cbd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x73a59
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x73969
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x738c1
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x73811
- (void)startPlaybackFromIndexPath:(id)indexPath;	// 0x7373d
- (id)mediaItemAtIndexPath:(id)indexPath;	// 0x736c9
- (id)indexPathForMediaItem:(id)mediaItem atTime:(double)time;	// 0x735b1
- (unsigned)trackToPlayInDataSource:(id)dataSource;	// 0x73559
- (id)indexPathForRowOfContentPosition;	// 0x733e9
- (Class)tableViewCellClass;	// 0x73389
- (void)cancelMoreButtonExpansion;	// 0x732bd
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x73275
- (id)title;	// 0x7321d
- (void)dealloc;	// 0x73185
- (id)init;	// 0x73105
@end
