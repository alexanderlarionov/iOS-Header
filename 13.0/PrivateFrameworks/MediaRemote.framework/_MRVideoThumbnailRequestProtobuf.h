//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _timeIntervals;
    float _thumbnailsHeight;
    float _thumbnailsWidth;
    struct {
        unsigned int thumbnailsHeight:1;
        unsigned int thumbnailsWidth:1;
    } _has;
}

@property(nonatomic) float thumbnailsHeight; // @synthesize thumbnailsHeight=_thumbnailsHeight;
@property(nonatomic) float thumbnailsWidth; // @synthesize thumbnailsWidth=_thumbnailsWidth;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasThumbnailsHeight;
@property(nonatomic) _Bool hasThumbnailsWidth;
- (void)setTimeIntervals:(double *)arg1 count:(unsigned long long)arg2;
- (double)timeIntervalsAtIndex:(unsigned long long)arg1;
- (void)addTimeIntervals:(double)arg1;
- (void)clearTimeIntervals;
@property(readonly, nonatomic) double *timeIntervals;
@property(readonly, nonatomic) unsigned long long timeIntervalsCount;
- (void)dealloc;

@end

