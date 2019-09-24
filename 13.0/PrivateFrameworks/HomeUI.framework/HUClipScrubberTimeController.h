//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUClipScrubberTimeController : NSObject
{
    double _timeScale;
    double _minimumDuration;
    double _maximumDuration;
}

+ (id)attributedLiveStringFromDate:(id)arg1;
+ (id)attributedTimeStringFromDate:(id)arg1;
+ (_Bool)_shouldUseTwentyFourHourTime;
+ (id)attributedStringFromDateString:(id)arg1;
+ (id)attributedStringFromTwentyFourHourDateString:(id)arg1;
+ (id)twentyFourHourLiveStringFromDate:(id)arg1;
+ (id)liveStringFromDate:(id)arg1;
+ (id)dayNameStringFromDate:(id)arg1;
+ (id)twelveHourTimeStringFromDate:(id)arg1;
+ (id)twentyFourHourTimeStringFromDate:(id)arg1;
@property(nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(nonatomic) double minimumDuration; // @synthesize minimumDuration=_minimumDuration;
@property(nonatomic) double timeScale; // @synthesize timeScale=_timeScale;
- (_Bool)isAtMinimumZoom;
- (double)suggestedWidthForClip:(id)arg1;
- (double)timeScaleForGestureScale:(double)arg1;
- (double)timeScaleForGestureScale:(double)arg1 maxDuration:(double)arg2;
@property(readonly, nonatomic) double maximumGestureScale;
- (void)updateTimeScaleIfNeeded;
- (void)reloadClips:(id)arg1;
- (id)init;

@end
