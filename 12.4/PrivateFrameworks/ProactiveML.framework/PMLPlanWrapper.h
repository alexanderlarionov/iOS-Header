//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString;
@protocol PMLPlanProtocol;

@interface PMLPlanWrapper : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    id <PMLPlanProtocol> _plan;
}

@property(readonly, nonatomic) id <PMLPlanProtocol> plan; // @synthesize plan=_plan;
- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlan:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

