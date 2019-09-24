//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHomeGesturePanGestureRecognizer.h>

@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer
{
    long long _touchInterfaceOrientationWhenGestureBegan;
    SBFluidSwitcherViewController *_switcherViewController;
}

@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
- (void).cxx_destruct;
- (long long)_touchInterfaceOrientation;
- (void)reset;
- (void)setState:(long long)arg1;
- (id)viewForTouchHistory;

@end
