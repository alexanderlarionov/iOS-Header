//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext : PBCodable <NSCopying>
{
    NSMutableArray *_heroImages;
}

+ (Class)heroImagesType;
@property(retain, nonatomic) NSMutableArray *heroImages; // @synthesize heroImages=_heroImages;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)heroImagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)heroImagesCount;
- (void)addHeroImages:(id)arg1;
- (void)clearHeroImages;

@end

