//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString, SPProtoCacheSyncData;

@interface SPProtoCacheMessage : PBCodable <NSCopying>
{
    NSData *_assetData;
    NSString *_assetKey;
    int _cacheType;
    NSString *_gizmoCacheIdentifier;
    int _messageType;
    SPProtoCacheSyncData *_syncData;
}

@property(retain, nonatomic) SPProtoCacheSyncData *syncData; // @synthesize syncData=_syncData;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSString *gizmoCacheIdentifier; // @synthesize gizmoCacheIdentifier=_gizmoCacheIdentifier;
@property(retain, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(nonatomic) int cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
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
@property(readonly, nonatomic) _Bool hasSyncData;
@property(readonly, nonatomic) _Bool hasAssetData;
@property(readonly, nonatomic) _Bool hasGizmoCacheIdentifier;
@property(readonly, nonatomic) _Bool hasAssetKey;

@end
