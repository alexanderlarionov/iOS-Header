//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSString;

@interface SAPhoneCallState : AceObject <SABackgroundContextObject>
{
}

+ (id)callStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callState;
@property(nonatomic) _Bool incoming;
@property(nonatomic) _Bool active;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
