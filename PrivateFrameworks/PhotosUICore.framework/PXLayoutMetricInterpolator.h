/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutMetricInterpolator : NSObject {
    double  __cachedMetric;
    NSValue * __cachedValue;
    NSMutableArray * __referenceValuesByMetrics;
    struct { 
        bool referenceValuesByMetricsOrder; 
    }  _needsUpdateFlags;
}

@property (setter=_setCachedMetric:, nonatomic) double _cachedMetric;
@property (setter=_setCachedValue:, nonatomic, retain) NSValue *_cachedValue;
@property (nonatomic, readonly) NSMutableArray *_referenceValuesByMetrics;

+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)albumsGridItemWidthInterpolator;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)memoriesItemWidthInterpolator;

- (void).cxx_destruct;
- (double)_cachedMetric;
- (id)_cachedValue;
- (void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id*)arg2 closestBeforeMatch:(id*)arg3 closestAfterMatch:(id*)arg4;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (id)_referenceValuesByMetrics;
- (void)_setCachedMetric:(double)arg1;
- (void)_setCachedValue:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3;
- (id)init;
- (void)setReferenceValue:(double)arg1 forMetric:(double)arg2;
- (double)valueForMetric:(double)arg1;

@end
