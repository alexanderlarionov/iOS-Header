//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineFMCReturnToCarInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _horizontalAccuracy;
    int _horizontalDistance;
    NSString *_parkingId;
    struct {
        unsigned int timestamp:1;
        unsigned int horizontalAccuracy:1;
        unsigned int horizontalDistance:1;
    } _has;
}

@property(nonatomic) int horizontalDistance; // @synthesize horizontalDistance=_horizontalDistance;
@property(nonatomic) int horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(retain, nonatomic) NSString *parkingId; // @synthesize parkingId=_parkingId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasHorizontalDistance;
@property(nonatomic) _Bool hasHorizontalAccuracy;
@property(readonly, nonatomic) _Bool hasParkingId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
