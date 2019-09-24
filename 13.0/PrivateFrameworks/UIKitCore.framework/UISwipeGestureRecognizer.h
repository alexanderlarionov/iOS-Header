//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer
{
    double _maximumDuration;
    double _minimumPrimaryMovement;
    double _maximumPrimaryMovement;
    double _minimumSecondaryMovement;
    double _maximumSecondaryMovement;
    double _rateOfMinimumMovementDecay;
    double _rateOfMaximumMovementDecay;
    unsigned long long _numberOfTouchesRequired;
    NSMutableArray *_touches;
    unsigned long long _direction;
    struct CGPoint _startLocation;
    struct CGPoint *_startLocations;
    double _startTime;
    _Bool _failed;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_shouldDefaultToTouches;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
@property(nonatomic) double rateOfMaximumMovementDecay; // @synthesize rateOfMaximumMovementDecay=_rateOfMaximumMovementDecay;
@property(nonatomic) double rateOfMinimumMovementDecay; // @synthesize rateOfMinimumMovementDecay=_rateOfMinimumMovementDecay;
@property(nonatomic) double maximumSecondaryMovement; // @synthesize maximumSecondaryMovement=_maximumSecondaryMovement;
@property(nonatomic) double minimumSecondaryMovement; // @synthesize minimumSecondaryMovement=_minimumSecondaryMovement;
@property(nonatomic) double maximumPrimaryMovement; // @synthesize maximumPrimaryMovement=_maximumPrimaryMovement;
@property(nonatomic) double minimumPrimaryMovement; // @synthesize minimumPrimaryMovement=_minimumPrimaryMovement;
@property(nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
- (void).cxx_destruct;
- (void)_appendSubclassDescription:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)_checkForSwipeWithDelta:(struct CGPoint)arg1 time:(double)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
@property(readonly, nonatomic) struct CGPoint startPoint;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
