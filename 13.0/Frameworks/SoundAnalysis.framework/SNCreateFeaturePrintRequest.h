//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzerProviding-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class NSString, SNFeaturePrintExtractor;
@protocol SNAnalyzing;

@interface SNCreateFeaturePrintRequest : NSObject <SNAnalyzerProviding, SNRequest>
{
    SNFeaturePrintExtractor *_featureExtractor;
}

- (void).cxx_destruct;
@property(nonatomic) float overlapFactor;
@property(nonatomic) long long featurePrintType;
@property(readonly, nonatomic) __weak id <SNAnalyzing> analyzer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
