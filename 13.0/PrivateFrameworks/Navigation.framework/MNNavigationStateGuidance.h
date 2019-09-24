//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNNavigationState.h>

@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState
{
    MNNavigationSessionManager *_navigationSessionManager;
    MNStartNavigationDetails *_startDetails;
}

+ (id)guidanceStateForStartDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3;
- (void).cxx_destruct;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)stopCurrentGuidancePrompt;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)switchToRoute:(id)arg1;
- (void)resumeOriginalDestination;
- (void)updateDestination:(id)arg1;
- (void)stopNavigation;
- (void)preEnterState;
- (void)leaveState;
- (void)enterState;
- (id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3;
- (id)traceManager;
- (_Bool)shouldClearStoredRoutes;
- (unsigned long long)desiredLocationProviderType;
- (_Bool)requiresHighMemoryThreshold;
- (id)currentDestination;
- (void)updateGuidanceWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
