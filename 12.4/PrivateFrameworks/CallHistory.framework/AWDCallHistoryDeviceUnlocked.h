//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@interface AWDCallHistoryDeviceUnlocked : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _callCount;
    struct {
        unsigned int timestamp:1;
        unsigned int callCount:1;
    } _has;
}

@property(nonatomic) unsigned int callCount; // @synthesize callCount=_callCount;
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
@property(nonatomic) _Bool hasCallCount;
@property(nonatomic) _Bool hasTimestamp;

@end
