//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@class NSString;

@interface DESPFLNoisable : PBCodable <NSCopying>
{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _datas;
    double _weight;
    unsigned int _iteration;
    NSString *_recipeId;
    int _version;
    struct {
        unsigned int weight:1;
        unsigned int iteration:1;
        unsigned int version:1;
    } _has;
}

@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) unsigned int iteration; // @synthesize iteration=_iteration;
@property(retain, nonatomic) NSString *recipeId; // @synthesize recipeId=_recipeId;
@property(nonatomic) int version; // @synthesize version=_version;
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
- (void)setDatas:(double *)arg1 count:(unsigned long long)arg2;
- (double)dataAtIndex:(unsigned long long)arg1;
- (void)addData:(double)arg1;
- (void)clearDatas;
@property(readonly, nonatomic) double *datas;
@property(readonly, nonatomic) unsigned long long datasCount;
@property(nonatomic) _Bool hasWeight;
@property(nonatomic) _Bool hasIteration;
@property(readonly, nonatomic) _Bool hasRecipeId;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;

@end
