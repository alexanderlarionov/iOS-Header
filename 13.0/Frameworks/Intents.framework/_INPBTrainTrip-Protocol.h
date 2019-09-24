//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDateTime, _INPBDateTimeRange, _INPBLocationValue;

@protocol _INPBTrainTrip <NSObject>
@property(readonly, nonatomic) _Bool hasTripDuration;
@property(retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property(readonly, nonatomic) _Bool hasTrainNumber;
@property(copy, nonatomic) NSString *trainNumber;
@property(readonly, nonatomic) _Bool hasTrainName;
@property(copy, nonatomic) NSString *trainName;
@property(readonly, nonatomic) _Bool hasProvider;
@property(copy, nonatomic) NSString *provider;
@property(readonly, nonatomic) _Bool hasOnlineCheckInTime;
@property(retain, nonatomic) _INPBDateTime *onlineCheckInTime;
@property(readonly, nonatomic) _Bool hasDepartureStationLocation;
@property(retain, nonatomic) _INPBLocationValue *departureStationLocation;
@property(readonly, nonatomic) _Bool hasDeparturePlatform;
@property(copy, nonatomic) NSString *departurePlatform;
@property(readonly, nonatomic) _Bool hasArrivalStationLocation;
@property(retain, nonatomic) _INPBLocationValue *arrivalStationLocation;
@property(readonly, nonatomic) _Bool hasArrivalPlatform;
@property(copy, nonatomic) NSString *arrivalPlatform;
@end
