//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEONameInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    NSString *_shield;
    int _phoneticType;
    int _shieldType;
    int _signType;
    struct {
        unsigned int has_phoneticType:1;
        unsigned int has_shieldType:1;
        unsigned int has_signType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_locale:1;
        unsigned int read_name:1;
        unsigned int read_phoneticName:1;
        unsigned int read_shield:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_locale:1;
        unsigned int wrote_name:1;
        unsigned int wrote_phoneticName:1;
        unsigned int wrote_shield:1;
        unsigned int wrote_phoneticType:1;
        unsigned int wrote_shieldType:1;
        unsigned int wrote_signType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *locale;
@property(readonly, nonatomic) _Bool hasLocale;
- (void)_readLocale;
- (int)StringAsSignType:(id)arg1;
- (id)signTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSignType;
@property(nonatomic) int signType;
- (int)StringAsPhoneticType:(id)arg1;
- (id)phoneticTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPhoneticType;
@property(nonatomic) int phoneticType;
@property(nonatomic) _Bool hasShieldType;
@property(nonatomic) int shieldType;
@property(retain, nonatomic) NSString *shield;
@property(readonly, nonatomic) _Bool hasShield;
- (void)_readShield;
@property(retain, nonatomic) NSString *phoneticName;
@property(readonly, nonatomic) _Bool hasPhoneticName;
- (void)_readPhoneticName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasName;
- (void)_readName;

@end
