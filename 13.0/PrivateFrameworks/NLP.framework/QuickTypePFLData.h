//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface QuickTypePFLData : NSObject
{
    unsigned long long _maxSequenceLength;
}

@property(readonly, nonatomic) unsigned long long maxSequenceLength; // @synthesize maxSequenceLength=_maxSequenceLength;
- (void)enumerateDataInBatches:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long numTrainingTokens;
@property(readonly, nonatomic) unsigned long long numTrainingSamples;
- (void)shuffle;
- (_Bool)loadFromFile:(id)arg1 error:(id *)arg2;
- (id)initWithMaxSequenceLength:(unsigned long long)arg1;

@end
