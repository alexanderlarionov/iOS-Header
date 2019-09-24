//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUTimeBased-Protocol.h>

@class NSString, NUColorSpace, NUComposition, NUImageDataRequest;
@protocol OS_dispatch_queue;

@interface NUColorSampler : NSObject <NUTimeBased>
{
    _Bool _shouldCoalesceUpdates;
    NUComposition *_composition;
    NSObject<OS_dispatch_queue> *_responseQueue;
    long long _sampleRadius;
    NUColorSpace *_colorSpace;
    NSString *_name;
    NUImageDataRequest *_request;
}

@property(readonly, nonatomic) NUImageDataRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool shouldCoalesceUpdates; // @synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) long long sampleRadius; // @synthesize sampleRadius=_sampleRadius;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(copy, nonatomic) NUComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (void)cancel;
- (id)_pipelineFilters;
- (void)configureRequest:(id)arg1 forSamplingAtPoint:(CDStruct_912cb5d2)arg2;
- (void)sampleColorAt:(CDStruct_912cb5d2)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) CDStruct_1b6d18a9 time;
- (id)initWithComposition:(id)arg1 responseQueue:(id)arg2;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
