//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SoftwareUpdateCandidate : NSObject
{
    _Bool _allowsZeroEvid;
    NSNumber *_accountID;
    NSNumber *_evid;
    NSNumber *_itemID;
    NSNumber *_storefrontID;
}

@property(copy) NSNumber *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(copy) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy) NSNumber *evid; // @synthesize evid=_evid;
@property(copy) NSNumber *accountID; // @synthesize accountID=_accountID;
@property(nonatomic) _Bool allowsZeroEvid; // @synthesize allowsZeroEvid=_allowsZeroEvid;
- (void).cxx_destruct;
- (id)applicationDictionary;

@end
