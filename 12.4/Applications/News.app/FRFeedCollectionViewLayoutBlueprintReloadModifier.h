//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class NFLFeedSettings, NSArray, NSString;

@interface FRFeedCollectionViewLayoutBlueprintReloadModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    _Bool _waitable;
    NSArray *_headlineIDs;
    unsigned long long _modification;
    NSString *_identifier;
    long long _priority;
    NFLFeedSettings *_feedSettings;
}

@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
@property(nonatomic) _Bool waitable; // @synthesize waitable=_waitable;
@property(retain, nonatomic) NSArray *headlineIDs; // @synthesize headlineIDs=_headlineIDs;
- (void).cxx_destruct;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithHeadlineIDs:(id)arg1 feedSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
