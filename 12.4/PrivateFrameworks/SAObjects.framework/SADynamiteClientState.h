//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSNumber, NSString, SACalendar;

@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>
{
}

+ (id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dynamiteClientState;
+ (id)uniqueObjectIdentifier;
+ (id)syncKey;
+ (id)persistencePolicy;
+ (id)deliveryDeadline;
@property(copy, nonatomic) NSString *xpAbCookie;
@property(copy, nonatomic) NSString *userToken;
@property(copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property(copy, nonatomic) NSString *status;
@property(retain, nonatomic) SACalendar *expirationDate;
@property(nonatomic) _Bool ageVerificationRequired;
@property(nonatomic) _Bool activeTvUser;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
