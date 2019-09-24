//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDQueryServerClientState, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HDProcessQueryCollection : NSObject
{
    NSMutableDictionary *_queryServersByUUID;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_processBundleIdentifier;
    HDQueryServerClientState *_clientState;
}

@property(copy, nonatomic) HDQueryServerClientState *clientState; // @synthesize clientState=_clientState;
@property(readonly, copy, nonatomic) NSString *processBundleIdentifier; // @synthesize processBundleIdentifier=_processBundleIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)queue_cancelStateChangeTimer;
- (void)queue_startStateChangeTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeQueryServer:(id)arg1;
- (void)addQueryServer:(id)arg1;
@property(readonly, nonatomic) _Bool hasQueryServers;
@property(readonly, copy, nonatomic) NSArray *queryServers;
- (id)initWithProcessBundleIdentifier:(id)arg1;

@end
