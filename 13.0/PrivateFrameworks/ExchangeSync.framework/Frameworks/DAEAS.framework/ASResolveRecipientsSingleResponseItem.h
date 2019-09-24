//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface ASResolveRecipientsSingleResponseItem : ASItem
{
    NSString *_emailAddress;
    NSNumber *_easStatus;
    NSMutableArray *_mRecipients;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mRecipients; // @synthesize mRecipients=_mRecipients;
@property(retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus; // @synthesize easStatus=_easStatus;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)description;
- (void)addRecipient:(id)arg1;
@property(readonly, nonatomic) NSArray *recipients;

@end
