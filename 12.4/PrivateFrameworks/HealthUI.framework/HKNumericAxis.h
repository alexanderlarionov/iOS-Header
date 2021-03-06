//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKAxis.h>

@protocol HKAxisLabelDimension, HKZoomScale;

@interface HKNumericAxis : HKAxis
{
    id <HKAxisLabelDimension> _labelDimension;
    double _topVerticalLabelPadding;
    double _bottomVerticalLabelPadding;
    id <HKZoomScale> _scalarZoomScaleEngine;
}

+ (id)standardNumericYAxisWithLabelDimension:(id)arg1;
+ (double)_roundUpByMultiple:(double)arg1 factor:(double)arg2;
+ (double)_roundDownByMultiple:(double)arg1 factor:(double)arg2;
+ (id)ticksAndLabelsForRangeInModelCoordinates:(id)arg1 maximumLabelCount:(long long)arg2 endingOptions:(long long)arg3 dimension:(id)arg4;
@property(readonly, nonatomic) id <HKZoomScale> scalarZoomScaleEngine; // @synthesize scalarZoomScaleEngine=_scalarZoomScaleEngine;
@property(nonatomic) double bottomVerticalLabelPadding; // @synthesize bottomVerticalLabelPadding=_bottomVerticalLabelPadding;
@property(nonatomic) double topVerticalLabelPadding; // @synthesize topVerticalLabelPadding=_topVerticalLabelPadding;
@property(retain, nonatomic) id <HKAxisLabelDimension> labelDimension; // @synthesize labelDimension=_labelDimension;
- (void).cxx_destruct;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)zoomScaleEngine;
- (double)labelSpacingFactorForNumberFormatter;
- (id)stringFromNumber:(id)arg1;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange)arg2;
- (id)init;

@end

