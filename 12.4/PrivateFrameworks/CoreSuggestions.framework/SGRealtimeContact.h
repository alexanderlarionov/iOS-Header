//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>
#import <CoreSuggestions/SGRealtimeSuggestion-Protocol.h>

@class NSString, SGContact;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>
{
    _Bool _isHarvested;
    int _state;
    SGContact *_contact;
    NSString *_cnContactIdentifier;
    unsigned long long _extractionType;
}

+ (id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(id)arg2;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isHarvested; // @synthesize isHarvested=_isHarvested;
@property(readonly, nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
@property(readonly, nonatomic) NSString *cnContactIdentifier; // @synthesize cnContactIdentifier=_cnContactIdentifier;
@property(readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setExtractionType;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToRealtimeContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)markedAsHarvested;
- (id)initWithState:(int)arg1 contact:(id)arg2 identifier:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

