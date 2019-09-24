//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetMessageAttributeIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSetMessageAttributeIntent : PBCodable <_INPBSetMessageAttributeIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int attribute:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _attribute;
    NSArray *_identifiers;
    _INPBIntentMetadata *_intentMetadata;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(nonatomic) int attribute; // @synthesize attribute=_attribute;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)identifierAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long identifiersCount;
- (void)addIdentifier:(id)arg1;
- (void)clearIdentifiers;
- (int)StringAsAttribute:(id)arg1;
- (id)attributeAsString:(int)arg1;
@property(nonatomic) _Bool hasAttribute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
