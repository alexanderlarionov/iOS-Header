//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RELocationManager : NSObject
{
}

+ (id)locationManager;
+ (id)simulatedLocationManager;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (id)currentLocation;

@end
