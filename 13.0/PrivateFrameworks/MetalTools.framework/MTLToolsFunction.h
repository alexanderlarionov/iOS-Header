//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLFunctionSPI-Protocol.h>

@class MTLToolsPointerArray, MTLType, NSArray, NSDictionary, NSString;
@protocol MTLDevice;

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI>
{
    MTLToolsPointerArray *_functions;
    MTLToolsPointerArray *_indirectArgumentEncoders;
    MTLToolsPointerArray *_argumentEncoders;
}

@property(readonly, nonatomic) MTLToolsPointerArray *argumentEncoders; // @synthesize argumentEncoders=_argumentEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *indirectArgumentEncoders; // @synthesize indirectArgumentEncoders=_indirectArgumentEncoders;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (const CDStruct_5af0f983 *)bitCodeHash;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (id)bitcodeData;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
@property(readonly) long long patchControlPointCount;
@property(readonly) unsigned long long patchType;
@property(readonly) NSDictionary *functionConstantsDictionary;
@property(readonly) unsigned long long renderTargetArrayIndexType;
@property(copy) NSString *label;
@property(readonly, copy) NSString *unpackedFilePath;
@property(readonly) long long lineNumber;
@property(readonly, copy) NSString *filePath;
@property(readonly) NSString *name;
@property(readonly) NSArray *stageInputAttributes;
@property(readonly) NSArray *arguments;
@property(readonly) MTLType *returnType;
@property(readonly) NSArray *vertexAttributes;
@property(readonly) unsigned long long functionType;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

