//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNMeContactComparisonStrategy-Protocol.h>

@class NSSet, NSString;

@interface CNUIMeContactComparisonStrategyUnified : NSObject <CNMeContactComparisonStrategy>
{
    NSSet *_meContactIdentifiersFound;
}

@property(retain, nonatomic) NSSet *meContactIdentifiersFound; // @synthesize meContactIdentifiersFound=_meContactIdentifiersFound;
- (void).cxx_destruct;
- (id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)arg1;
- (_Bool)isMeContact:(id)arg1;
- (id)meContactIdentifiers;
- (void)meContactChangedInStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

