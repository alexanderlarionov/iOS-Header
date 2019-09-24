//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHaptics/CHHapticPlayable-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface CHHapticPattern : NSObject <CHHapticPlayable>
{
    NSNumber *_version;
    NSMutableArray *_embeddedURLs;
    NSMutableArray *_events;
    NSMutableArray *_parameters;
    NSMutableArray *_parameterCurves;
}

+ (id)eventListFromEvents:(id)arg1 parameters:(id)arg2 parameterCurves:(id)arg3 engine:(id)arg4 privileged:(_Bool)arg5;
- (void).cxx_destruct;
- (_Bool)resolveExternalResources:(id)arg1 error:(id *)arg2;
- (id)eventListFromDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) double duration;
- (id)exportDictionaryAndReturnError:(id *)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithEvents:(id)arg1 parameterCurves:(id)arg2 error:(id *)arg3;
- (id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)init;
@property(readonly) NSArray *parameterCurves;
@property(readonly) NSArray *parameters;
@property(readonly) NSArray *events;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
