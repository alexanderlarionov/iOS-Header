//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushMessageConsumer-Protocol.h"

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface SubscriptionEntitlementsCoordinator : NSObject <PushMessageConsumer>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSNumber *_lastAccountID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_verifyAccountForCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1;
- (id)_segementLogName:(unsigned long long)arg1;
- (void)_setCachedSubscriptionEntitlementsDictionary:(id)arg1 segment:(unsigned long long)arg2 shouldNotify:(_Bool)arg3;
- (void)_removeCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1;
- (void)_notifyChangeToSegment:(unsigned long long)arg1;
- (void)_markCachedSubscriptionEntitlementsAsExpiredForSegment:(unsigned long long)arg1;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_getSubscriptionEntitlementsResponseWithToken:(id)arg1 forSegment:(unsigned long long)arg2 ignoreCaches:(_Bool)arg3 withResultHandler:(CDUnknownBlockType)arg4;
- (id)_cachedSubscriptionEntitlementsResponseForSegment:(unsigned long long)arg1 expired:(_Bool *)arg2;
- (id)_cachedSubscriptionEntitlementsPathForSegment:(unsigned long long)arg1;
- (id)_cachedSubscriptionEntitlementsDictionaryForSegment:(unsigned long long)arg1;
- (id)_cachedAccountIdForSegment:(unsigned long long)arg1;
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;
- (void)setCachedSubscriptionEntitlements:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3 notify:(_Bool)arg4;
- (void)markCachedSubscriptionEntitlementsAsExpiredForSegment:(unsigned long long)arg1;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withToken:(id)arg2 ignoreCaches:(_Bool)arg3 withResultHandler:(CDUnknownBlockType)arg4;
- (void)appStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

