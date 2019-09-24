//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface SBIdleTimerTimeoutPrecedenceSettings : NSObject <BSDescriptionProviding>
{
    double _normalTimeout;
    double _highTimeout;
    double _criticalTimeout;
}

@property(readonly, nonatomic) double criticalTimeout; // @synthesize criticalTimeout=_criticalTimeout;
@property(readonly, nonatomic) double highTimeout; // @synthesize highTimeout=_highTimeout;
@property(readonly, nonatomic) double normalTimeout; // @synthesize normalTimeout=_normalTimeout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double greatestTimeout;
@property(readonly, nonatomic) double leastTimeout;
@property(readonly, nonatomic) unsigned long long highestPrecedence;
- (void)_setTimeout:(double)arg1 ifGreatestForPrecedence:(unsigned long long)arg2;
- (void)_setTimeout:(double)arg1 ifLeastForPrecedence:(unsigned long long)arg2;
- (void)_setTimeout:(double)arg1 withPrecedence:(unsigned long long)arg2;
- (double)_intervalForPrecedence:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
