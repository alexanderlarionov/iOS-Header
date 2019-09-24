//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKUserLocationView.h>

@class UIImage, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface UserLocationView : MKUserLocationView
{
    long long _mode;
    VKTimedAnimation *_transitionAnimation;
    _Bool _isNavPuckActive;
    _Bool _inNavigationMapMode;
    _Bool _inNavMode;
    long long _viewMode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (_Bool)isPersistent;
- (void)locationManagerFailedToUpdateLocation;
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;
- (void)_transitionTo:(long long)arg1;
- (void)_transitionToNormalPuckWithDuration:(double)arg1;
- (void)_transitionToNavPuckWithDuration:(double)arg1;
- (void)setAnnotation:(id)arg1;
- (void)_setAnimatingToCoordinate:(_Bool)arg1;
- (void)_setPresentationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setTracking:(_Bool)arg1;
- (void)_updateVKNavigationPuckMarkerFromCurrentState;
- (void)_setVKNavigationPuckMarker:(id)arg1;
- (void)_updateNavPuckAnimated:(_Bool)arg1;
- (_Bool)_shouldUseNavPuck;
- (void)setViewMode:(long long)arg1;
- (void)setInNavMode:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldRotateForCourseWithMode:(long long)arg1;
- (void)_updateForMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIImage *innerImage;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
