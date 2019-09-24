//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, TUAnimationFloatFunction;

@interface TUAnimationSizeFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    double _speed;
    TUAnimationFloatFunction *_widthFunction;
    TUAnimationFloatFunction *_heightFunction;
    struct CGSize _startValue;
    struct CGSize _endValue;
}

@property(retain, nonatomic) TUAnimationFloatFunction *heightFunction; // @synthesize heightFunction=_heightFunction;
@property(retain, nonatomic) TUAnimationFloatFunction *widthFunction; // @synthesize widthFunction=_widthFunction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) struct CGSize endValue; // @synthesize endValue=_endValue;
@property(nonatomic) struct CGSize startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;
- (void)_reloadFunctions;
- (struct CGSize)solveForTime:(double)arg1;
- (id)initWithTimingFunction:(id)arg1 startRect:(struct CGSize)arg2 endRect:(struct CGSize)arg3 speed:(double)arg4;

@end
