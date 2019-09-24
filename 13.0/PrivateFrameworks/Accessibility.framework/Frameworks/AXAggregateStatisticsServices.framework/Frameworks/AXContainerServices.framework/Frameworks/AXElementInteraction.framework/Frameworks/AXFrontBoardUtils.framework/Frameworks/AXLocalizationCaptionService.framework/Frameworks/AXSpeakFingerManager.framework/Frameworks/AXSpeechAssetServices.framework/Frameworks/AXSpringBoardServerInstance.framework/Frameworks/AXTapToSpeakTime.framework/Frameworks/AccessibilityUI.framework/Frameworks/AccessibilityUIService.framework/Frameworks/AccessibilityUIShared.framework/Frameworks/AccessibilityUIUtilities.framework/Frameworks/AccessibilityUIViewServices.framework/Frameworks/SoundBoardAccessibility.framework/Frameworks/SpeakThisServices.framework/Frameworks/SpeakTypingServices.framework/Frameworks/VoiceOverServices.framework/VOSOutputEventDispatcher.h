//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/VOSOutputEventDispatching-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, VOSHapticPack, VOSSoundPack;

@interface VOSOutputEventDispatcher : NSObject <VOSOutputEventDispatching>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_eventHandlers;
    id <VOSSoundPack> _cachedActiveSoundPack;
    id <VOSHapticPack> _cachedActiveHapticPack;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
- (_Bool)shouldPlayHapticForEvent:(id)arg1;
- (_Bool)shouldPlaySoundForEvent:(id)arg1;
- (void)removeEventHandler:(id)arg1;
- (void)addEventHandler:(id)arg1;
- (id)_activeHapticPack;
- (id)_activeSoundPack;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
