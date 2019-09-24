//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPArtist, MIPSeries, NSString;

@interface MIPTVShow : PBCodable <NSCopying>
{
    MIPArtist *_artist;
    NSString *_episodeId;
    NSString *_episodeSortId;
    NSString *_networkName;
    int _seasonNumber;
    MIPSeries *_series;
    int _videoQuality;
    struct {
        unsigned int seasonNumber:1;
        unsigned int videoQuality:1;
    } _has;
}

@property(retain, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(nonatomic) int videoQuality; // @synthesize videoQuality=_videoQuality;
@property(retain, nonatomic) NSString *episodeSortId; // @synthesize episodeSortId=_episodeSortId;
@property(retain, nonatomic) NSString *episodeId; // @synthesize episodeId=_episodeId;
@property(nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
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
@property(readonly, nonatomic) _Bool hasNetworkName;
@property(nonatomic) _Bool hasVideoQuality;
@property(readonly, nonatomic) _Bool hasEpisodeSortId;
@property(readonly, nonatomic) _Bool hasEpisodeId;
@property(nonatomic) _Bool hasSeasonNumber;
@property(readonly, nonatomic) _Bool hasSeries;
@property(readonly, nonatomic) _Bool hasArtist;

@end
