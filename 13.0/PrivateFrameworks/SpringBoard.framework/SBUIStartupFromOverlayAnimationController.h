//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay, BSAnimationSettings, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController
{
    BKSDisplayRenderOverlay *_overlay;
    BSAnimationSettings *_animationSettings;
    _Bool _waitsForAppActivation;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property(nonatomic) _Bool waitsForAppActivation; // @synthesize waitsForAppActivation=_waitsForAppActivation;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (_Bool)_shouldDismissBanner;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end
