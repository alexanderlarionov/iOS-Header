//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSChromeViewController, MKMapAttribution, NSSet;

__attribute__((visibility("hidden")))
@interface SettingsController : NSObject
{
    _Bool _showsEnvironments;
    _Bool _showsRadarComposer;
    _Bool _viewModeSwitchingAvailable;
    _Bool _shouldChangeViewModeForLabels;
    _Bool _shouldChangeViewModeForTraffic;
    _Bool _userDesiresTraffic;
    _Bool _userRequestingViewModeChange;
    IOSChromeViewController *_chrome;
    NSSet *_disallowedViewModes;
}

@property(nonatomic) _Bool userRequestingViewModeChange; // @synthesize userRequestingViewModeChange=_userRequestingViewModeChange;
@property(nonatomic) _Bool userDesiresTraffic; // @synthesize userDesiresTraffic=_userDesiresTraffic;
@property(nonatomic) _Bool shouldChangeViewModeForTraffic; // @synthesize shouldChangeViewModeForTraffic=_shouldChangeViewModeForTraffic;
@property(nonatomic) _Bool shouldChangeViewModeForLabels; // @synthesize shouldChangeViewModeForLabels=_shouldChangeViewModeForLabels;
@property(readonly, nonatomic) _Bool viewModeSwitchingAvailable; // @synthesize viewModeSwitchingAvailable=_viewModeSwitchingAvailable;
@property(readonly, nonatomic) _Bool showsRadarComposer; // @synthesize showsRadarComposer=_showsRadarComposer;
@property(readonly, nonatomic) _Bool showsEnvironments; // @synthesize showsEnvironments=_showsEnvironments;
@property(readonly, nonatomic) NSSet *disallowedViewModes; // @synthesize disallowedViewModes=_disallowedViewModes;
@property(nonatomic) __weak IOSChromeViewController *chrome; // @synthesize chrome=_chrome;
- (void).cxx_destruct;
- (_Bool)is3DModeEnabled;
- (void)setDisallowedViewModes:(id)arg1;
- (void)setViewModeSwitchingAvailable:(_Bool)arg1;
- (long long)viewModeForSelectedViewMode:(long long)arg1;
- (void)setUserDesiresTraffic:(_Bool)arg1 shouldForceUpdateMapViewDisplayOptions:(_Bool)arg2;
@property(nonatomic) _Bool userDesiresLabels;
- (void)setUserDesiresLabels:(_Bool)arg1 shouldForceUpdateMapViewDisplayOptions:(_Bool)arg2;
@property(nonatomic) _Bool showsTraffic;
@property(nonatomic) _Bool showsLabels;
- (void)setViewMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long viewMode;
- (void)presentWeatherAttribution;
- (void)presentAttributions;
- (void)proceedToReportAProblem;
- (void)proceedToAddAPlace;
- (void)proceedToEnvironmentsSelector;
- (void)markMyLocation;
@property(readonly, nonatomic) _Bool canShowTraffic;
@property(readonly, nonatomic) _Bool canShowLabels;
@property(readonly, nonatomic) MKMapAttribution *mapAttribution;
- (void)_userDefaultsDidChange;
- (id)init;

@end
