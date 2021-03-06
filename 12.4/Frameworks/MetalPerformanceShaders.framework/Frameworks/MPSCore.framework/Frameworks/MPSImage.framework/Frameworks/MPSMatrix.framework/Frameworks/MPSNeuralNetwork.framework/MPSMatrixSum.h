//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@interface MPSMatrixSum : MPSKernel
{
    _Bool _transpose;
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _count;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) float neuronC; // @synthesize neuronC=_neuronC;
@property(nonatomic) float neuronB; // @synthesize neuronB=_neuronB;
@property(nonatomic) float neuronA; // @synthesize neuronA=_neuronA;
@property(nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
@property(readonly, nonatomic) _Bool transpose; // @synthesize transpose=_transpose;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;
@property(readonly, nonatomic) float neuronParameterC;
@property(readonly, nonatomic) float neuronParameterB;
@property(readonly, nonatomic) float neuronParameterA;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 resultMatrix:(id)arg3 scaleVector:(id)arg4 offsetVector:(id)arg5 biasVector:(id)arg6 startIndex:(unsigned long long)arg7;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 count:(unsigned long long)arg2 rows:(unsigned long long)arg3 columns:(unsigned long long)arg4 transpose:(_Bool)arg5;

@end

