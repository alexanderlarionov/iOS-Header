//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface ICMusicSubscriptionStatus : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>
{
    NSDictionary *_responseDictionary;
    _Bool _isMinorAccountHolder;
    _Bool _hasFamily;
    _Bool _hasFamilyGreaterThanOneMember;
    _Bool _isHeadOfHousehold;
    _Bool _isMatchEnabled;
    NSDate *_expirationDate;
    _Bool _hasOfflineSlots;
    _Bool _isInFreeTrial;
    _Bool _isEligibleForFreeTrial;
    _Bool _isPurchaser;
    long long _carrierBundlingStatusType;
    long long _reasonType;
    long long _sourceType;
    long long _statusType;
    _Bool _isAdministrator;
    _Bool _isDiscoveryModeEligible;
    long long _statusCode;
    NSArray *_termsStatusList;
    NSString *_phoneNumber;
    NSString *_cellularOperatorName;
    NSString *_sessionIdentifier;
    long long _carrierBundlingErrorCode;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long carrierBundlingErrorCode; // @synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSString *cellularOperatorName; // @synthesize cellularOperatorName=_cellularOperatorName;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSArray *termsStatusList; // @synthesize termsStatusList=_termsStatusList;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic, getter=isDiscoveryModeEligible) _Bool discoveryModeEligible; // @synthesize discoveryModeEligible=_isDiscoveryModeEligible;
@property(readonly, nonatomic, getter=isAdministrator) _Bool administrator; // @synthesize administrator=_isAdministrator;
@property(readonly, nonatomic) long long statusType; // @synthesize statusType=_statusType;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long reasonType; // @synthesize reasonType=_reasonType;
@property(readonly, nonatomic) long long carrierBundlingStatusType; // @synthesize carrierBundlingStatusType=_carrierBundlingStatusType;
@property(readonly, nonatomic, getter=isPurchaser) _Bool purchaser; // @synthesize purchaser=_isPurchaser;
@property(readonly, nonatomic, getter=isEligibleForFreeTrial) _Bool eligibleForFreeTrial; // @synthesize eligibleForFreeTrial=_isEligibleForFreeTrial;
@property(readonly, nonatomic, getter=isInFreeTrial) _Bool inFreeTrial; // @synthesize inFreeTrial=_isInFreeTrial;
@property(readonly, nonatomic) _Bool hasOfflineSlots; // @synthesize hasOfflineSlots=_hasOfflineSlots;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic, getter=isMatchEnabled) _Bool matchEnabled; // @synthesize matchEnabled=_isMatchEnabled;
@property(readonly, nonatomic, getter=isHeadOfHousehold) _Bool headOfHousehold; // @synthesize headOfHousehold=_isHeadOfHousehold;
@property(readonly, nonatomic) _Bool hasFamilyGreaterThanOneMember; // @synthesize hasFamilyGreaterThanOneMember=_hasFamilyGreaterThanOneMember;
@property(readonly, nonatomic) _Bool hasFamily; // @synthesize hasFamily=_hasFamily;
@property(readonly, nonatomic, getter=isMinorAccountHolder) _Bool minorAccountHolder; // @synthesize minorAccountHolder=_isMinorAccountHolder;
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (void)_copySubscriptionStatusPropertiesToStatus:(id)arg1 withZone:(struct _NSZone *)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToStatus:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end
