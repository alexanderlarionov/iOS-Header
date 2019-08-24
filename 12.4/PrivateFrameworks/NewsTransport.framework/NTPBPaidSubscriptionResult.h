//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString, NTPBIssueData;

@interface NTPBPaidSubscriptionResult : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    NSString *_groupFeedId;
    int _groupType;
    NSString *_iadQtoken;
    NTPBIssueData *_issueData;
    int _paidSubscriptionConversionPointType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_purchaseId;
    int _resultType;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    NSData *_subscriptionPurchaseSessionId;
    _Bool _arrivedFromAd;
    _Bool _sawSubscriptionSheet;
    _Bool _subscriptionOnlyArticlePreview;
    struct {
        unsigned int groupType:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int resultType:1;
        unsigned int arrivedFromAd:1;
        unsigned int sawSubscriptionSheet:1;
        unsigned int subscriptionOnlyArticlePreview:1;
    } _has;
}

@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(retain, nonatomic) NSString *purchaseId; // @synthesize purchaseId=_purchaseId;
@property(nonatomic) _Bool sawSubscriptionSheet; // @synthesize sawSubscriptionSheet=_sawSubscriptionSheet;
@property(retain, nonatomic) NSData *subscriptionPurchaseSessionId; // @synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *iadQtoken; // @synthesize iadQtoken=_iadQtoken;
@property(nonatomic) _Bool arrivedFromAd; // @synthesize arrivedFromAd=_arrivedFromAd;
@property(nonatomic) _Bool subscriptionOnlyArticlePreview; // @synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasIssueData;
@property(readonly, nonatomic) _Bool hasParentFeedId;
@property(readonly, nonatomic) _Bool hasGroupFeedId;
@property(readonly, nonatomic) _Bool hasPurchaseId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(nonatomic) _Bool hasSawSubscriptionSheet;
@property(readonly, nonatomic) _Bool hasSubscriptionPurchaseSessionId;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(readonly, nonatomic) _Bool hasIadQtoken;
@property(nonatomic) _Bool hasArrivedFromAd;
@property(nonatomic) _Bool hasSubscriptionOnlyArticlePreview;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaidSubscriptionConversionPointType;
@property(nonatomic) int paidSubscriptionConversionPointType; // @synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasSectionId;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;

@end
