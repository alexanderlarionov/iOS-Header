//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface RBProcessCPUMaximumLimits : NSObject <BSDescriptionProviding>
{
    unsigned long long _percentage;
    unsigned long long _duration;
    unsigned long long _violationPolicy;
}

@property(readonly, nonatomic) unsigned long long violationPolicy; // @synthesize violationPolicy=_violationPolicy;
@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long percentage; // @synthesize percentage=_percentage;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)unionLimit:(id)arg1;
- (id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2 violationPolicy:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
