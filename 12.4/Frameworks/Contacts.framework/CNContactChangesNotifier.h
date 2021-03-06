//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, CNMutableMultiDictionary;
@protocol CNScheduler;

@interface CNContactChangesNotifier : NSObject
{
    _Bool _observingNotification;
    id <CNScheduler> _resourceLock;
    id <CNScheduler> _workQueue;
    id <CNScheduler> _downstream;
    CNContactStore *_contactStore;
    CNMutableMultiDictionary *_registeredObservers;
}

+ (id)workQueue_createFetchersFromRegisteredObservers:(id)arg1;
+ (id)preparedContact:(id)arg1 withStore:(id)arg2 keysToFetch:(id)arg3;
+ (id)createProxyForObserver:(id)arg1 keysToFetch:(id)arg2;
+ (id)sharedNotifier;
@property(nonatomic, getter=isObservingNotification) _Bool observingNotification; // @synthesize observingNotification=_observingNotification;
@property(readonly, nonatomic) CNMutableMultiDictionary *registeredObservers; // @synthesize registeredObservers=_registeredObservers;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) id <CNScheduler> downstream; // @synthesize downstream=_downstream;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
- (void).cxx_destruct;
- (void)workQueue_updateObservers;
- (void)workQueue_updateObserving;
- (void)registerProxy:(id)arg1 identifier:(id)arg2;
- (void)contactStoreDidChange:(id)arg1;
- (_Bool)resourceLock_removeProxiesPassingTest:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3;
- (void)registerObserver:(id)arg1 forContact:(id)arg2;
- (id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (id)init;

@end

