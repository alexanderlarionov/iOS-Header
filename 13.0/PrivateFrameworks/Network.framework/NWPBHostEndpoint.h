//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSString;

@interface NWPBHostEndpoint : PBCodable <NSCopying>
{
    NSString *_hostname;
    NSString *_port;
}

@property(retain, nonatomic) NSString *port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPort;
@property(readonly, nonatomic) BOOL hasHostname;

@end

