//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUImageStorage-Protocol.h>

@class NSString, NUMutableRegion, NUPixelFormat, NURegion;

@interface _NUAbstractStorage : NSObject <NUImageStorage>
{
    NUMutableRegion *_validRegion;
    long long _sizeInBytes;
    NUPixelFormat *_format;
    CDStruct_d58201db _size;
}

@property(retain) NUPixelFormat *format; // @synthesize format=_format;
@property long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property CDStruct_912cb5d2 size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)provideMutableBuffer:(CDUnknownBlockType)arg1;
- (void)provideBuffer:(CDUnknownBlockType)arg1;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(CDUnknownBlockType)arg3;
- (long long)fillBufferWithPattern4:(unsigned int)arg1;
- (long long)writeBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)readBufferInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (void)assertIsValidInRegion:(id)arg1;
- (void)assertIsValidInRect:(CDStruct_996ac03c)arg1;
- (_Bool)isValidInRegion:(id)arg1;
- (_Bool)isValidInRect:(CDStruct_996ac03c)arg1;
- (void)invalidate;
@property(readonly) NURegion *validRegion;
- (void)validateRegion:(id)arg1;
- (void)validateRect:(CDStruct_996ac03c)arg1;
- (void)_resetSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
