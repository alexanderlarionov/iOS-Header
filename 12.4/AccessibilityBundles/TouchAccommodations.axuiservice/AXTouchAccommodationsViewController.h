//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CATransformLayer;

@interface AXTouchAccommodationsViewController : UIViewController
{
    CATransformLayer *_transformLayer;
}

- (void).cxx_destruct;
- (void)removeAllHandTouchMarkers;
- (struct CGPath *)_drawFullCircleWithRadius:(double)arg1;
- (id)_createProgressLayerWithColor:(id)arg1 withFilterName:(id)arg2 forHoldDuration:(_Bool)arg3;
- (id)_createTransformLayerForHoldDuration:(_Bool)arg1;
- (id)_createLayerAtPoint:(struct CGPoint)arg1;
- (void)updateLocationOfHandTouchMarkerAtPoints:(id)arg1;
- (void)resetProgressTrackOfHandTouchMarkerAtPoints:(id)arg1;
- (void)viewDidLoad;

@end
