//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SYDDaemonToClientConnectionDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface SYDDaemon : NSObject <NSXPCListenerDelegate, SYDDaemonToClientConnectionDelegate>
{
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_clientConnections;
    NSMutableDictionary *_syncManagers;
    NSString *_primaryAppleAccountIdentifierOverride;
}

+ (_Bool)platformSupportsStoreType:(long long)arg1;
+ (id)databaseURLForContainerID:(id)arg1 libraryDirectoryURL:(id)arg2;
+ (id)databaseURLForContainerID:(id)arg1;
+ (id)containerIDForStoreType:(long long)arg1 environment:(long long)arg2;
@property(copy, nonatomic) NSString *primaryAppleAccountIdentifierOverride; // @synthesize primaryAppleAccountIdentifierOverride=_primaryAppleAccountIdentifierOverride;
@property(retain, nonatomic) NSMutableDictionary *syncManagers; // @synthesize syncManagers=_syncManagers;
@property(retain, nonatomic) NSMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void).cxx_destruct;
- (void)sendAnalyticsEventForCurrentState;
- (void)registerForPeriodAnalyticsXPCActivity;
- (id)identifierForEnabledAccount;
- (id)syncManagerForStoreType:(long long)arg1 containerID:(id)arg2;
- (id)syncManagerForStoreType:(long long)arg1 environment:(long long)arg2;
- (void)_processAccountChanges;
- (void)processAccountChanges;
- (void)connectionDidInvalidate:(id)arg1;
- (id)connection:(id)arg1 syncManagerForStoreIdentifier:(id)arg2 type:(long long)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (id)initWithInitialStoreCreation:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

