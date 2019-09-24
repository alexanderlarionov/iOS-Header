//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REDeviceMotionPredictorProperties-Protocol.h>

@class CMMotionActivity, CMMotionActivityManager, REUpNextScheduler;

@interface REDeviceMotionPredictor : REPredictor <REDeviceMotionPredictorProperties>
{
    CMMotionActivityManager *_activityManager;
    REUpNextScheduler *_scheduler;
    CMMotionActivity *_lastActivity;
    _Bool _stationary;
    unsigned long long _motionType;
}

+ (id)supportedFeatures;
@property unsigned long long motionType; // @synthesize motionType=_motionType;
@property(getter=isStationary) _Bool stationary; // @synthesize stationary=_stationary;
- (void).cxx_destruct;
@property(readonly, nonatomic) CMMotionActivityManager *activityManager;
- (void)_updateWithActivity:(id)arg1;
- (void)pause;
- (void)resume;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)_init;

@end
