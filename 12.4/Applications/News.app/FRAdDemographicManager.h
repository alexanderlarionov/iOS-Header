//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCKeyValueStore, FRAdDemographic, NSCalendar;

@interface FRAdDemographicManager : NSObject
{
    FRAdDemographic *_currentDemographic;
    FCKeyValueStore *_store;
    NSCalendar *_calendar;
}

+ (id)sharedDemographicManager;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) FCKeyValueStore *store; // @synthesize store=_store;
@property(retain) FRAdDemographic *currentDemographic; // @synthesize currentDemographic=_currentDemographic;
- (void).cxx_destruct;
- (void)convertDemoString:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)_currentDemographicFromStore;
- (void)fetchDemographicData;
- (id)init;

@end
