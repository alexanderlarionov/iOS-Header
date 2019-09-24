//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CMWakeGestureDelegate;

@interface CMWakeGestureManager : NSObject
{
    id <CMWakeGestureDelegate> _delegate;
}

+ (_Bool)isWakeGestureOverrideEnabled;
+ (_Bool)isWakeGestureAvailable;
+ (id)sharedManager;
+ (id)stringForGestureState:(long long)arg1;
@property(nonatomic) id <CMWakeGestureDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logAssert;
- (void)forceDetected;
- (void)simulateGesture:(long long)arg1 after:(double)arg2;
- (_Bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)stopWakeGestureUpdates;
- (void)startWakeGestureUpdates;

@end
