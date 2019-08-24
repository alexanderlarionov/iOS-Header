//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLSuggestionAssetList : PBCodable <NSCopying>
{
    NSMutableArray *_assets;
    unsigned int _version;
    CDStruct_f20694ce _has;
}

+ (Class)assetType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
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
@property(nonatomic) _Bool hasVersion;
- (id)assetAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)addAsset:(id)arg1;
- (void)clearAssets;

@end
