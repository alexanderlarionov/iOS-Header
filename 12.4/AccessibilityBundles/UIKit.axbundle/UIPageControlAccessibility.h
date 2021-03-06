//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIPageControlAccessibility_super.h>

@interface UIPageControlAccessibility : __UIPageControlAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)accessibilityActivate;
- (_Bool)_accessibilitySupportsActivateAction;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)accessibilityFrame;
- (void)setCurrentPage:(long long)arg1;
- (void)_accessibilityCurrentPageDidChange;
- (long long)_accessibilityPageIndex;
- (long long)_accessibilityPageCount;
- (unsigned long long)accessibilityTraits;

@end

