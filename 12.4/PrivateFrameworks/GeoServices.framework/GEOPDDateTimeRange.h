//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDateTimeRange : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _endDate;
    unsigned long long _startDate;
    struct GEOPDLocalTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property(nonatomic) unsigned long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) unsigned long long startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1;
- (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (void)clearTimeRanges;
@property(readonly, nonatomic) struct GEOPDLocalTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
- (void)dealloc;
@property(readonly, nonatomic) _Bool hasValidStartAndEndDates;

@end
