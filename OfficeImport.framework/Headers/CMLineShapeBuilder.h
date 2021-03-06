/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMShapeBuilder.h>
#import <OfficeImport/OfficeImport-Structs.h>

@class OADStroke;

__attribute__((visibility("hidden")))
@interface CMLineShapeBuilder : CMShapeBuilder {
@private
	OADStroke *_stroke;	// 20 = 0x14
}
- (void)dealloc;	// 0x109371
- (void)setStroke:(id)stroke;	// 0x108471
- (CGPathRef)createShapeWithTransform:(CGAffineTransform)transform;	// 0x10884d
- (void)_renderStraightConnector1InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x108b19
- (void)_renderBentConnector2InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x1dc6a5
- (float)_adjustedCoefAtIndex:(int)index;	// 0x1d30f1
- (void)_renderBentConnector3InPath:(CGPathRef)path withTransform:(CGAffineTransform)transform andOrientedBounds:(id)bounds headSrc:(CGPoint *)src headDst:(CGPoint *)dst tailSrc:(CGPoint *)src6 tailDst:(CGPoint *)dst7;	// 0x1d2f7d
- (float)_getRotationFromPoint:(CGPoint)point toPoint:(CGPoint)point2 withBounds:(id)bounds;	// 0x108c31
- (CGRect)_boundingBoxForLineEnd:(id)lineEnd;	// 0x10916d
- (void)_renderLineEnd:(id)end atPoint:(CGPoint)point withOrientation:(float)orientation inPath:(CGPathRef)path;	// 0x108cb9
@end
