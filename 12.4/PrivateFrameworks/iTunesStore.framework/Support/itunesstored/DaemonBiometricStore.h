//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface DaemonBiometricStore : NSObject
{
}

+ (id)_dispatchQueueUpdateToken;
+ (void)_resetAccount:(id)arg1 withConnection:(id)arg2;
+ (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;
+ (void)tokenUpdateStateWithMessage:(id)arg1 connection:(id)arg2;
+ (void)tokenUpdateShouldStartWithMessage:(id)arg1 connection:(id)arg2;
+ (void)tokenUpdateDidFinishWithMessage:(id)arg1 connection:(id)arg2;
+ (void)setEnabledWithMessage:(id)arg1 connection:(id)arg2;
+ (void)setAllowedWithMessage:(id)arg1 connection:(id)arg2;
+ (void)saveIdentityMapWithMessage:(id)arg1 connection:(id)arg2;
+ (void)resetWithMessage:(id)arg1 connection:(id)arg2;
+ (void)resetAccountWithMessage:(id)arg1 connection:(id)arg2;
+ (void)isIdentityMapValidWithMessage:(id)arg1 connection:(id)arg2;
+ (void)getStateWithMessage:(id)arg1 connection:(id)arg2;
+ (void)getKeyCountWithMessage:(id)arg1 connection:(id)arg2;
+ (void)getIdentityMapCountWithMessage:(id)arg1 connection:(id)arg2;
+ (void)getCachedBiometricHTTPHeadersWithMessage:(id)arg1 connection:(id)arg2;
+ (void)getCachedBiometricAuthenticationContextWithMessage:(id)arg1 connection:(id)arg2;
+ (void)getAllCachedBiometricHTTPHeadersWithMessage:(id)arg1 connection:(id)arg2;
+ (void)observeXPCServer:(id)arg1;
+ (long long)tokenUpdateState;
+ (_Bool)tokenUpdateShouldStartWithLogKey:(id)arg1;
+ (void)tokenUpdateDidFinishWithLogKey:(id)arg1;
- (id)_newUserDefaultsKeyWithAccountID:(id)arg1;
- (id)_cachedBiometricIdentitiesForAccountID:(id)arg1;
- (void)_deleteKeychainTokensForAccountIdentifier:(id)arg1;
- (id)_bootDate;
@property long long biometricState;
- (void)saveIdentityMap:(id)arg1 forAccountIdentifier:(id)arg2;
- (void)registerAccountIdentifier:(id)arg1;
- (void)obliterateBiometricsForAccountIdentifier:(id)arg1;
- (long long)tokenAvailabilityForAccountIdentifier:(id)arg1;
@property(readonly) NSNumber *lastRegisteredAccountIdentifier;
- (unsigned long long)keyCountForAccountIdentifier:(id)arg1;
- (_Bool)isIdentityMapValidForAccountIdentifier:(id)arg1;
@property(readonly) _Bool isBiometricStateEnabled;
- (id)identityMap;
- (void)clearLastRegisteredAccountIdentifier;
@property(readonly) _Bool canPerformBiometricOptIn;

@end
