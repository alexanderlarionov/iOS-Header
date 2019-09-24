//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/CLLocationManager.h>

#import <HomeKitDaemon/HMDCLLocationManager-Protocol.h>

@class NSSet, NSString;
@protocol HMDCLLocationManagerDelegate;

@interface CLLocationManager (HomeLocation) <HMDCLLocationManager>
+ (id)hmdRegionStateAsString:(int)arg1;
+ (int)convertToHMDRegionState:(long long)arg1;
+ (id)hmdLocationAuthorizationAsString:(int)arg1;
+ (int)convertToHMDLocationAuthorization:(int)arg1;
+ (id)regionDescription:(id)arg1;
+ (id)referenceFrameDescription:(int)arg1;
+ (id)regionStateDescription:(long long)arg1;
+ (id)locationAuthorizationDescription:(int)arg1;
+ (_Bool)convertAuthStatusToBool:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HMDCLLocationManagerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) double desiredAccuracy;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSSet *monitoredRegions;
@property(readonly) Class superclass;
@end
