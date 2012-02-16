/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class NSString;

@interface LBSGAppProfile : XXUnknownSuperclass {
	NSString *_appName;	// 4 = 0x4
	NSString *_appKey;	// 8 = 0x8
	BOOL _hasRequestType;	// 12 = 0xc
	int _requestType;	// 16 = 0x10
	BOOL _hasSearchType;	// 20 = 0x14
	int _searchType;	// 24 = 0x18
	NSString *_searchTerm;	// 28 = 0x1c
	BOOL _hasZoomLevel;	// 32 = 0x20
	int _zoomLevel;	// 36 = 0x24
}
@property(assign, nonatomic) int zoomLevel;	// G=0x2b031; S=0x2aa59; @synthesize=_zoomLevel
@property(assign, nonatomic) BOOL hasZoomLevel;	// G=0x2b011; S=0x2b021; @synthesize=_hasZoomLevel
@property(retain, nonatomic) NSString *searchTerm;	// G=0x2afdd; S=0x2afed; @synthesize=_searchTerm
@property(readonly, assign, nonatomic) BOOL hasSearchTerm;	// G=0x2aa41; 
@property(assign, nonatomic) int searchType;	// G=0x2afcd; S=0x2aa1d; @synthesize=_searchType
@property(assign, nonatomic) BOOL hasSearchType;	// G=0x2afad; S=0x2afbd; @synthesize=_hasSearchType
@property(assign, nonatomic) int requestType;	// G=0x2af9d; S=0x2a9f9; @synthesize=_requestType
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x2af7d; S=0x2af8d; @synthesize=_hasRequestType
@property(retain, nonatomic) NSString *appKey;	// G=0x2af49; S=0x2af59; @synthesize=_appKey
@property(readonly, assign, nonatomic) BOOL hasAppKey;	// G=0x2a9e1; 
@property(retain, nonatomic) NSString *appName;	// G=0x2af15; S=0x2af25; @synthesize=_appName
@property(readonly, assign, nonatomic) BOOL hasAppName;	// G=0x2a9c9; 
// declared property getter: - (int)zoomLevel;	// 0x2b031
// declared property setter: - (void)setHasZoomLevel:(BOOL)level;	// 0x2b021
// declared property getter: - (BOOL)hasZoomLevel;	// 0x2b011
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x2afed
// declared property getter: - (id)searchTerm;	// 0x2afdd
// declared property getter: - (int)searchType;	// 0x2afcd
// declared property setter: - (void)setHasSearchType:(BOOL)type;	// 0x2afbd
// declared property getter: - (BOOL)hasSearchType;	// 0x2afad
// declared property getter: - (int)requestType;	// 0x2af9d
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x2af8d
// declared property getter: - (BOOL)hasRequestType;	// 0x2af7d
// declared property setter: - (void)setAppKey:(id)key;	// 0x2af59
// declared property getter: - (id)appKey;	// 0x2af49
// declared property setter: - (void)setAppName:(id)name;	// 0x2af25
// declared property getter: - (id)appName;	// 0x2af15
- (void)writeTo:(id)to;	// 0x2ae05
- (BOOL)readFrom:(id)from;	// 0x2aca1
- (id)dictionaryRepresentation;	// 0x2aaed
- (id)description;	// 0x2aa7d
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x2aa59
// declared property getter: - (BOOL)hasSearchTerm;	// 0x2aa41
// declared property setter: - (void)setSearchType:(int)type;	// 0x2aa1d
// declared property setter: - (void)setRequestType:(int)type;	// 0x2a9f9
// declared property getter: - (BOOL)hasAppKey;	// 0x2a9e1
// declared property getter: - (BOOL)hasAppName;	// 0x2a9c9
- (void)dealloc;	// 0x2a95d
@end