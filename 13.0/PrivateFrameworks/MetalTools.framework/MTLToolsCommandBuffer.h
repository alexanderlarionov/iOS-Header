//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLCommandBufferSPI-Protocol.h>

@class MTLToolsPointerArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSString;
@protocol MTLCommandQueue, MTLDevice;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI>
{
    struct {
        unsigned int hasCommit:1;
        unsigned int addedCompletedHandler:1;
        unsigned int addedScheduledHandler:1;
        unsigned int padding:29;
    } _flags;
    NSMutableSet *_retainedObjects;
    MTLToolsPointerArray *_renderCommandEncoders;
    MTLToolsPointerArray *_computeCommandEncoders;
    MTLToolsPointerArray *_blitCommandEncoders;
    MTLToolsPointerArray *_parallelRenderCommandEncoders;
    MTLToolsPointerArray *_fragmentRenderCommandEncoders;
    MTLToolsPointerArray *_resourceStateCommandEncoders;
    struct ILayerLockingPolicy *_retainedObjectsLock;
}

@property(nonatomic) struct ILayerLockingPolicy *retainedObjectsLock; // @synthesize retainedObjectsLock=_retainedObjectsLock;
@property(readonly, nonatomic) MTLToolsPointerArray *resourceStateCommandEncoders; // @synthesize resourceStateCommandEncoders=_resourceStateCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *fragmentRenderCommandEncoders; // @synthesize fragmentRenderCommandEncoders=_fragmentRenderCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *parallelRenderCommandEncoders; // @synthesize parallelRenderCommandEncoders=_parallelRenderCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *blitCommandEncoders; // @synthesize blitCommandEncoders=_blitCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *computeCommandEncoders; // @synthesize computeCommandEncoders=_computeCommandEncoders;
@property(readonly, nonatomic) MTLToolsPointerArray *renderCommandEncoders; // @synthesize renderCommandEncoders=_renderCommandEncoders;
@property(readonly, nonatomic) NSMutableSet *retainedObjects; // @synthesize retainedObjects=_retainedObjects;
- (unsigned long long)protectionOptions;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)dropResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (void)setResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id *)arg3 count:(unsigned long long)arg4;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)addSynchronizationNotification:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=getListIndex) unsigned long long listIndex;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)willEncodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 writeableResources:(id)arg3;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (id)unwrapMTLRenderPassDescriptor:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
- (id)resourceStateCommandEncoder;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
@property(readonly) NSError *error;
@property(readonly) unsigned long long status;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)enqueue;
@property(copy) NSString *label;
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) _Bool retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
- (id)debugCommandEncoder;
- (_Bool)commitAndWaitUntilSubmitted;
- (void)commit;
- (void)clearRetainedObjects;
- (void)addRetainedObject:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
