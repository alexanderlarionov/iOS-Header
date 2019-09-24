//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraEditKitFramework/__CEKSliderAccessibility_super.h>

@interface CEKSliderAccessibility : __CEKSliderAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (struct CGPoint)accessibilityActivationPoint;
- (void)scrollViewDidScroll:(id)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)_axAdjustValue:(_Bool)arg1;
- (double)_axGetDeltaForCurrentValue:(double)arg1 toIncrement:(_Bool)arg2;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (double)_axNumberOfTickSegments;

@end
