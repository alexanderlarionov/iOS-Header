//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CRBulletin.h"

@interface CRDNDGeofenceAlert : CRBulletin
{
    _Bool _geofenceEnter;
}

@property(nonatomic) _Bool geofenceEnter; // @synthesize geofenceEnter=_geofenceEnter;
- (unsigned long long)maxDisplayedBulletins;
- (id)defaultAction;
- (id)message;
- (id)title;
- (id)initWithEnterGeofence:(_Bool)arg1;

@end
