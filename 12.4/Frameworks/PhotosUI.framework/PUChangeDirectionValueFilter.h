//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUValueFilter.h>

@interface PUChangeDirectionValueFilter : PUValueFilter
{
    double _threshold;
    double _minimumChangeValue;
}

@property(nonatomic) double minimumChangeValue; // @synthesize minimumChangeValue=_minimumChangeValue;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
