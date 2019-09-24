//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/NSCopying-Protocol.h>

@class NSArray, NSDateComponents, NSDictionary, NSString;

@interface STAllowance : NSObject <NSCopying>
{
    _Bool _allowanceEnabled;
    _Bool _shouldAllowEditing;
    NSArray *_bundleIdentifiers;
    NSArray *_webDomains;
    NSArray *_categoryIdentifiers;
    NSString *_identifier;
    unsigned long long _behaviorType;
    NSDateComponents *_time;
    NSDictionary *_timeByDay;
}

+ (double)timeIntervalForAllowanceDateComponents:(id)arg1;
+ (id)dateComponentsForDuration:(double)arg1;
@property(copy, nonatomic) NSDictionary *timeByDay; // @synthesize timeByDay=_timeByDay;
@property(copy, nonatomic) NSDateComponents *time; // @synthesize time=_time;
@property(nonatomic) unsigned long long behaviorType; // @synthesize behaviorType=_behaviorType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool shouldAllowEditing; // @synthesize shouldAllowEditing=_shouldAllowEditing;
@property _Bool allowanceEnabled; // @synthesize allowanceEnabled=_allowanceEnabled;
@property(copy) NSArray *categoryIdentifiers; // @synthesize categoryIdentifiers=_categoryIdentifiers;
@property(copy) NSArray *webDomains; // @synthesize webDomains=_webDomains;
@property(copy) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
- (void).cxx_destruct;
- (id)defaultTimeByDay;
- (id)defaultBudgetTime;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *scheduleText;
@property(readonly, nonatomic) double timeToday;
- (id)initWithBlueprint:(id)arg1;
- (id)init;

@end
