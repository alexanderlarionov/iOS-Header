//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGridInlinePlaybackRecord.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetPixelBufferSource-Protocol.h>

@class NSString, PXGSpriteReference, PXVideoSession;

@interface _PXCuratedLibraryVideoAssetRecord : PXGridInlinePlaybackRecord <PXChangeObserver, PXGDisplayAssetPixelBufferSource>
{
    double _videoTranformScale;
    PXVideoSession *_videoSession;
    NSString *_bufferRequestIdentifier;
    long long _desiredPlayState;
    CDUnknownBlockType _pixelBufferDidChangeHandler;
}

+ (id)_videoSessionQueue;
@property(copy, nonatomic) CDUnknownBlockType pixelBufferDidChangeHandler; // @synthesize pixelBufferDidChangeHandler=_pixelBufferDidChangeHandler;
- (long long)desiredPlayState;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGAffineTransform videoRotationTransform;
@property(readonly, nonatomic) struct __CVBuffer *currentPixelBuffer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_configureVideoSession:(id)arg1;
- (void)_relinquishVideoSession;
- (void)_createVideoSessionIfNeeded;
- (void)_ensureVideoSession;
- (void)prepareForInvisible;
- (void)prepareForVisible;
- (void)setDesiredPlayState:(long long)arg1;
- (void)dealloc;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PXGSpriteReference *geometryReference; // @dynamic geometryReference;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
