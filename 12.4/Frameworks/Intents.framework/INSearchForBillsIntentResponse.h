//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import <Intents/INSearchForBillsIntentResponseExport-Protocol.h>

@class NSArray, NSString, _INPBSearchForBillsIntentResponse;

@interface INSearchForBillsIntentResponse : INIntentResponse <INSearchForBillsIntentResponseExport>
{
    _INPBSearchForBillsIntentResponse *_responseMessagePBRepresentation;
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)setPropertiesByName:(id)arg1;
- (id)propertiesByName;
- (id)_dictionaryRepresentation;
@property(copy, nonatomic) NSArray *bills;
- (id)_responseMessagePBRepresentation;
- (long long)_intentResponseCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

