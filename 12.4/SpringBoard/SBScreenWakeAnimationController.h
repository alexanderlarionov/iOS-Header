//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SBAppStatusBarSettingsAssertion, SBFLockScreenDateView, UIViewController;
@protocol SBScreenWakeAnimationControllerDelegate, SBScreenWakeAnimationTarget;

@interface SBScreenWakeAnimationController : NSObject
{
    double _originalDateLeftEdge;
    double _originalDateBottomEdge;
    double _finalTimeAlpha;
    double _finalStatusBarAlpha;
    id <SBScreenWakeAnimationControllerDelegate> _delegate;
    UIViewController<SBScreenWakeAnimationTarget> *_target;
    SBFLockScreenDateView *_realDateView;
    _Bool _preparingToAnimateWake;
    _Bool _animatingForWake;
    _Bool _animatingForSleep;
    _Bool _insideWakeCompletionBlock;
    _Bool _insideSleepCompletionBlock;
    int _animationToken;
    CDUnknownBlockType _wakeCompletionBlock;
    CDUnknownBlockType _sleepCompletionBlock;
    _Bool _animatingWallpaper;
    _Bool _animatingContent;
    _Bool _animatingBacklight;
    _Bool _ignoringInteractionEvents;
    _Bool _waitingForScreenUnblank;
    long long _lastBacklightChangeSource;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_temporaryDisabledReasons;
}

+ (double)_animationSpeedForBacklightChangeSource:(long long)arg1 isWake:(_Bool)arg2;
+ (double)backlightFadeDurationForSource:(long long)arg1 isWake:(_Bool)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_runCompletionHandlerForWake:(_Bool)arg1;
- (void)_handleAnimationCompletionIfNecessaryForWaking:(_Bool)arg1;
- (void)sleepForSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setScreenWakeTemporarilyDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_startWakeAnimationsForWaking:(_Bool)arg1 animationSettings:(id)arg2;
- (void)_setLastBacklightChangeSource:(long long)arg1;
- (void)_cleanupAnimationWhenInterruptingWaking:(_Bool)arg1;
- (void)_startWakeIfNecessary;
- (void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 delegate:(id)arg4 target:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_stopIgnoringInteractionEventsIfNeeded;
- (_Bool)interruptSleepAnimationIfNeeded;
- (id)_animationSettingsForBacklightChangeSource:(long long)arg1 isWake:(_Bool)arg2;
- (void)_setRelevantLockScreenViewsHidden:(_Bool)arg1;
- (_Bool)isSleepAnimationInProgress;
- (_Bool)isWakeAnimationInProgressForSource:(long long)arg1;
- (_Bool)isWakeAnimationInProgress;
- (void)dealloc;
- (id)init;

@end
