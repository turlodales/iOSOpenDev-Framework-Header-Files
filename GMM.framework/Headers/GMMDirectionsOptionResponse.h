/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionResponse : XXUnknownSuperclass {
	NSMutableArray *_optionDefinitions;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *optionDefinitions;	// G=0x1e201; S=0x1e211; @synthesize=_optionDefinitions
// declared property setter: - (void)setOptionDefinitions:(id)definitions;	// 0x1e211
// declared property getter: - (id)optionDefinitions;	// 0x1e201
- (void)writeTo:(id)to;	// 0x1e0ed
- (BOOL)readFrom:(id)from;	// 0x1df79
- (id)dictionaryRepresentation;	// 0x1df25
- (id)description;	// 0x1deb5
- (id)optionDefinitionAtIndex:(unsigned)index;	// 0x1de95
- (unsigned)optionDefinitionsCount;	// 0x1de75
- (void)addOptionDefinition:(id)definition;	// 0x1de11
- (void)dealloc;	// 0x1ddcd
@end
