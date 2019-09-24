//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/PSYInitialSyncStateObserverDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, NSUUID, PSYInitialSyncStateObserver;
@protocol OS_dispatch_queue;

@interface ICNanoPairedDeviceStatusMonitor : NSObject <PSYInitialSyncStateObserverDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    NSMapTable *_observers;
    PSYInitialSyncStateObserver *_initialSyncStateObserver;
    NSString *_pairingIDPropertyName;
    _Bool _isInitialSyncComplete;
}

+ (id)sharedMonitor;
@property(nonatomic) _Bool isInitialSyncComplete; // @synthesize isInitialSyncComplete=_isInitialSyncComplete;
- (void).cxx_destruct;
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;
- (void)deviceBecameActive:(id)arg1;
- (void)_handlePairedDeviceChangedNotification;
- (id)_activePairedDevice;
- (id)_allObservers;
@property(readonly, nonatomic, getter=isMediaSyncingSupported) _Bool mediaSyncingSupported;
@property(readonly, copy, nonatomic) NSArray *allPairedDevicePairingIDs;
@property(readonly, copy, nonatomic) NSUUID *pairedDevicePairingID;
@property(readonly, copy, nonatomic) NSUUID *activePairedDevicePairingID;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
