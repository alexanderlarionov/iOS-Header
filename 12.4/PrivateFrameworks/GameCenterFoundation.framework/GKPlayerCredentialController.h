//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject
{
    long long _loginCancelledCount;
    ACAccountStore *_store;
    GKThreadsafeDictionary *_primaryCredentialCache;
    GKThreadsafeDictionary *_allCredentialsCache;
}

+ (void)migrateOldAccountInformation;
+ (id)sharedController;
+ (id)accessQueue;
@property(retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache; // @synthesize allCredentialsCache=_allCredentialsCache;
@property(retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache; // @synthesize primaryCredentialCache=_primaryCredentialCache;
@property(retain, nonatomic) ACAccountStore *store; // @synthesize store=_store;
@property long long loginCancelledCount; // @synthesize loginCancelledCount=_loginCancelledCount;
@property(readonly) _Bool loginDisabled;
- (id)suggestedUsername;
- (id)primaryCredentialForEnvironment:(long long)arg1;
- (id)pushCredentialForEnvironment:(long long)arg1;
- (id)allCredentialsForEnvironment:(long long)arg1;
- (id)credentialForUsername:(id)arg1 environment:(long long)arg2;
- (id)credentialForPlayer:(id)arg1 environment:(long long)arg2;
- (unsigned long long)loginStatusForCredential:(id)arg1;
- (void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPrimaryCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accountStoreEmailDidChange:(id)arg1;
- (void)accountStoreDidChange:(id)arg1;
- (void)invalidateCredentialCaches;
- (void)_transact:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (id)_transactAndWait:(CDUnknownBlockType)arg1;
- (id)accessQueue;
- (void)dealloc;
- (id)init;

@end
