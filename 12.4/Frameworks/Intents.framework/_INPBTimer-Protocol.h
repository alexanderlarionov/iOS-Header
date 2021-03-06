//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString;

@protocol _INPBTimer <NSObject>
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state;
@property(nonatomic) _Bool hasRemainingTime;
@property(nonatomic) double remainingTime;
@property(readonly, nonatomic) _Bool hasLabel;
@property(retain, nonatomic) _INPBDataString *label;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) double duration;
- (int)StringAsState:(NSString *)arg1;
- (NSString *)stateAsString:(int)arg1;
@end

