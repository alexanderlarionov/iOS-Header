//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSDictionary;

@interface AMSAuthKitUpdateResult : NSObject
{
    ACAccount *_account;
    NSDictionary *_authenticationResults;
    unsigned long long _credentialSource;
}

+ (id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 option:(id)arg3;
@property(readonly, nonatomic) unsigned long long credentialSource; // @synthesize credentialSource=_credentialSource;
@property(readonly, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4;

@end
