//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMExposureResult, CUCaptureController;

@protocol CAMExposureDelegate <NSObject>
- (void)captureController:(CUCaptureController *)arg1 didOutputExposureResult:(CAMExposureResult *)arg2;

@optional
- (_Bool)captureControllerUserHasAdjustedExposureTargetBias:(CUCaptureController *)arg1;
@end

