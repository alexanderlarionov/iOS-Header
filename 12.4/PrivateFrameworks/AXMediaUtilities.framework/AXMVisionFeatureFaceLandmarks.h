//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding>
{
    _Bool _is3DLandmarks;
    NSDictionary *_results;
}

+ (id)unitTestingFaceLandmarksIs3D:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(nonatomic) _Bool is3DLandmarks; // @synthesize is3DLandmarks=_is3DLandmarks;
- (void).cxx_destruct;
- (id)localizedStringForLandmarkType:(unsigned long long)arg1;
- (id)pointValuesForFaceLandmarkType:(unsigned long long)arg1;
- (id)pointsArrayForRegion:(id)arg1;
- (id)initWithVisionFaceLandmarks:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
