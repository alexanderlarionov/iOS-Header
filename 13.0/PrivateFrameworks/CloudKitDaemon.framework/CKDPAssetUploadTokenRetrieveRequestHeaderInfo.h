//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequestHeaderInfo : PBCodable <NSCopying>
{
    NSString *_headerKey;
    NSString *_headerValue;
}

@property(retain, nonatomic) NSString *headerValue; // @synthesize headerValue=_headerValue;
@property(retain, nonatomic) NSString *headerKey; // @synthesize headerKey=_headerKey;
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

@end
