//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISUserInterfaceStyleModeDelegate-Protocol.h>

@class NSBackgroundActivityScheduler, NSDate, NSString, UISUserInterfaceStyleMode, _UICustomScheduleController, _UISunScheduleController;

@interface UIUserInterfaceStyleArbiter : NSObject <UISUserInterfaceStyleModeDelegate>
{
    UISUserInterfaceStyleMode *_styleMode;
    long long _currentModeValue;
    long long _currentStyle;
    long long _lastProposedAutomaticStyle;
    struct {
        long long style;
        long long timing;
    } _lastOverride;
    int _screenDimmingNotificationToken;
    _Bool _isDim;
    _UISunScheduleController *_sunScheduleController;
    _UICustomScheduleController *_customScheduleController;
    NSDate *_lastUpdateDate;
    NSBackgroundActivityScheduler *_backgroundActivityScheduler;
    int _notificationToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateScreenDimUpdatingStyle:(_Bool)arg1;
- (void)_setWatchesScreenDim:(_Bool)arg1;
- (void)_logPeriodicEvent;
- (void)_logChangeEventWithNewMode:(long long)arg1 oldMode:(long long)arg2 newStyle:(long long)arg3 oldStyle:(long long)arg4 reason:(long long)arg5;
- (long long)_proposedStyleForCurrentMode;
- (_Bool)_updateControllersWithOldModeValue:(long long)arg1 newModeValue:(long long)arg2;
- (void)_updateCurrentStyleAndNotify:(_Bool)arg1 forReason:(long long)arg2;
- (void)_updateCurrentStyleForReason:(long long)arg1;
- (void)userInterfaceStyleModeDidChange:(id)arg1;
- (id)nextTransition;
- (void)toggleCurrentStyleWithOverrideTiming:(long long)arg1;
- (void)toggleCurrentStyle;
@property(readonly, nonatomic) long long currentStyle;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
