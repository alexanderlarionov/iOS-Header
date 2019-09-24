//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

#import <CoreSpeech/CSXPCConnectionDelegate-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSSiriAssertionMonitor : CSEventMonitor <CSXPCConnectionDelegate>
{
    unsigned char _assertionState;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;
- (_Bool)isEnabled;
- (void)_notifyObserver:(_Bool)arg1;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
