/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class GMMMapInfo, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMSearchResponse : XXUnknownSuperclass {
	int _status;	// 4 = 0x4
	NSString *_errorMessage;	// 8 = 0x8
	NSString *_originalQuery;	// 12 = 0xc
	NSString *_refinementQuery;	// 16 = 0x10
	BOOL _hasAutoSpellingCorrected;	// 20 = 0x14
	BOOL _autoSpellingCorrected;	// 21 = 0x15
	NSString *_spellingSuggestion;	// 24 = 0x18
	GMMMapInfo *_mapInfo;	// 28 = 0x1c
	NSMutableArray *_searchResults;	// 32 = 0x20
	NSMutableArray *_documentInfos;	// 36 = 0x24
	NSMutableArray *_categorys;	// 40 = 0x28
	BOOL _hasResultOffset;	// 44 = 0x2c
	int _resultOffset;	// 48 = 0x30
	BOOL _hasPayloadType;	// 52 = 0x34
	int _payloadType;	// 56 = 0x38
	BOOL _hasTotalResults;	// 60 = 0x3c
	int _totalResults;	// 64 = 0x40
	NSString *_splitQuerySearchPart;	// 68 = 0x44
	NSString *_splitQueryLocationPart;	// 72 = 0x48
}
@property(retain, nonatomic) NSString *splitQueryLocationPart;	// G=0x197a5; S=0x197b5; @synthesize=_splitQueryLocationPart
@property(readonly, assign, nonatomic) BOOL hasSplitQueryLocationPart;	// G=0x188b1; 
@property(retain, nonatomic) NSString *splitQuerySearchPart;	// G=0x19771; S=0x19781; @synthesize=_splitQuerySearchPart
@property(readonly, assign, nonatomic) BOOL hasSplitQuerySearchPart;	// G=0x18899; 
@property(assign, nonatomic) int totalResults;	// G=0x1884d; S=0x18875; @synthesize=_totalResults
@property(assign, nonatomic) BOOL hasTotalResults;	// G=0x19751; S=0x19761; @synthesize=_hasTotalResults
@property(assign, nonatomic) int payloadType;	// G=0x18805; S=0x18829; @synthesize=_payloadType
@property(assign, nonatomic) BOOL hasPayloadType;	// G=0x19731; S=0x19741; @synthesize=_hasPayloadType
@property(assign, nonatomic) int resultOffset;	// G=0x187bd; S=0x187e1; @synthesize=_resultOffset
@property(assign, nonatomic) BOOL hasResultOffset;	// G=0x19711; S=0x19721; @synthesize=_hasResultOffset
@property(retain, nonatomic) NSMutableArray *categorys;	// G=0x196dd; S=0x196ed; @synthesize=_categorys
@property(retain, nonatomic) NSMutableArray *documentInfos;	// G=0x196a9; S=0x196b9; @synthesize=_documentInfos
@property(retain, nonatomic) NSMutableArray *searchResults;	// G=0x19675; S=0x19685; @synthesize=_searchResults
@property(retain, nonatomic) GMMMapInfo *mapInfo;	// G=0x19641; S=0x19651; @synthesize=_mapInfo
@property(readonly, assign, nonatomic) BOOL hasMapInfo;	// G=0x185b9; 
@property(retain, nonatomic) NSString *spellingSuggestion;	// G=0x1960d; S=0x1961d; @synthesize=_spellingSuggestion
@property(readonly, assign, nonatomic) BOOL hasSpellingSuggestion;	// G=0x185a1; 
@property(assign, nonatomic) BOOL autoSpellingCorrected;	// G=0x18559; S=0x1857d; @synthesize=_autoSpellingCorrected
@property(assign, nonatomic) BOOL hasAutoSpellingCorrected;	// G=0x195ed; S=0x195fd; @synthesize=_hasAutoSpellingCorrected
@property(retain, nonatomic) NSString *refinementQuery;	// G=0x195b9; S=0x195c9; @synthesize=_refinementQuery
@property(readonly, assign, nonatomic) BOOL hasRefinementQuery;	// G=0x18541; 
@property(retain, nonatomic) NSString *originalQuery;	// G=0x19585; S=0x19595; @synthesize=_originalQuery
@property(readonly, assign, nonatomic) BOOL hasOriginalQuery;	// G=0x18529; 
@property(retain, nonatomic) NSString *errorMessage;	// G=0x19551; S=0x19561; @synthesize=_errorMessage
@property(readonly, assign, nonatomic) BOOL hasErrorMessage;	// G=0x18511; 
@property(assign, nonatomic) int status;	// G=0x19531; S=0x19541; @synthesize=_status
// declared property setter: - (void)setSplitQueryLocationPart:(id)part;	// 0x197b5
// declared property getter: - (id)splitQueryLocationPart;	// 0x197a5
// declared property setter: - (void)setSplitQuerySearchPart:(id)part;	// 0x19781
// declared property getter: - (id)splitQuerySearchPart;	// 0x19771
// declared property setter: - (void)setHasTotalResults:(BOOL)results;	// 0x19761
// declared property getter: - (BOOL)hasTotalResults;	// 0x19751
// declared property setter: - (void)setHasPayloadType:(BOOL)type;	// 0x19741
// declared property getter: - (BOOL)hasPayloadType;	// 0x19731
// declared property setter: - (void)setHasResultOffset:(BOOL)offset;	// 0x19721
// declared property getter: - (BOOL)hasResultOffset;	// 0x19711
// declared property setter: - (void)setCategorys:(id)categorys;	// 0x196ed
// declared property getter: - (id)categorys;	// 0x196dd
// declared property setter: - (void)setDocumentInfos:(id)infos;	// 0x196b9
// declared property getter: - (id)documentInfos;	// 0x196a9
// declared property setter: - (void)setSearchResults:(id)results;	// 0x19685
// declared property getter: - (id)searchResults;	// 0x19675
// declared property setter: - (void)setMapInfo:(id)info;	// 0x19651
// declared property getter: - (id)mapInfo;	// 0x19641
// declared property setter: - (void)setSpellingSuggestion:(id)suggestion;	// 0x1961d
// declared property getter: - (id)spellingSuggestion;	// 0x1960d
// declared property setter: - (void)setHasAutoSpellingCorrected:(BOOL)corrected;	// 0x195fd
// declared property getter: - (BOOL)hasAutoSpellingCorrected;	// 0x195ed
// declared property setter: - (void)setRefinementQuery:(id)query;	// 0x195c9
// declared property getter: - (id)refinementQuery;	// 0x195b9
// declared property setter: - (void)setOriginalQuery:(id)query;	// 0x19595
// declared property getter: - (id)originalQuery;	// 0x19585
// declared property setter: - (void)setErrorMessage:(id)message;	// 0x19561
// declared property getter: - (id)errorMessage;	// 0x19551
// declared property setter: - (void)setStatus:(int)status;	// 0x19541
// declared property getter: - (int)status;	// 0x19531
- (void)writeTo:(id)to;	// 0x19049
- (BOOL)readFrom:(id)from;	// 0x18c09
- (id)dictionaryRepresentation;	// 0x18939
- (id)description;	// 0x188c9
// declared property getter: - (BOOL)hasSplitQueryLocationPart;	// 0x188b1
// declared property getter: - (BOOL)hasSplitQuerySearchPart;	// 0x18899
// declared property setter: - (void)setTotalResults:(int)results;	// 0x18875
// declared property getter: - (int)totalResults;	// 0x1884d
// declared property setter: - (void)setPayloadType:(int)type;	// 0x18829
// declared property getter: - (int)payloadType;	// 0x18805
// declared property setter: - (void)setResultOffset:(int)offset;	// 0x187e1
// declared property getter: - (int)resultOffset;	// 0x187bd
- (id)categoryAtIndex:(unsigned)index;	// 0x1879d
- (unsigned)categorysCount;	// 0x1877d
- (void)addCategory:(id)category;	// 0x18719
- (id)documentInfoAtIndex:(unsigned)index;	// 0x186f9
- (unsigned)documentInfosCount;	// 0x186d9
- (void)addDocumentInfo:(id)info;	// 0x18675
- (id)searchResultAtIndex:(unsigned)index;	// 0x18655
- (unsigned)searchResultsCount;	// 0x18635
- (void)addSearchResult:(id)result;	// 0x185d1
// declared property getter: - (BOOL)hasMapInfo;	// 0x185b9
// declared property getter: - (BOOL)hasSpellingSuggestion;	// 0x185a1
// declared property setter: - (void)setAutoSpellingCorrected:(BOOL)corrected;	// 0x1857d
// declared property getter: - (BOOL)autoSpellingCorrected;	// 0x18559
// declared property getter: - (BOOL)hasRefinementQuery;	// 0x18541
// declared property getter: - (BOOL)hasOriginalQuery;	// 0x18529
// declared property getter: - (BOOL)hasErrorMessage;	// 0x18511
- (void)dealloc;	// 0x18419
@end
