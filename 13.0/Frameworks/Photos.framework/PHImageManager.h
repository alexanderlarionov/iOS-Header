//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHMediaRequestContextDelegate-Protocol.h>

@class NSMapTable, NSString, PHPhotoLibrary;

@interface PHImageManager : NSObject <PHMediaRequestContextDelegate>
{
    NSMapTable *_requestContextsByID;
    _Atomic int _nextRequestID;
    struct os_unfair_lock_s _lock;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _managerID;
}

+ (_Bool)_allowVideoAccessForAsset:(id)arg1 options:(id)arg2;
+ (unsigned long long)_nextManagerID;
+ (id)defaultManager;
@property(readonly, nonatomic) unsigned long long managerID; // @synthesize managerID=_managerID;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void).cxx_destruct;
- (void)mediaRequestContextDidFinish:(id)arg1;
- (void)mediaRequestContext:(id)arg1 isQueryingCacheForRequest:(id)arg2 didWait:(_Bool *)arg3 didFindImage:(_Bool *)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestContentEditingInputForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_shouldUseRAWResourceAsUnadjustedBaseForAsset:(id)arg1 options:(id)arg2;
- (int)requestAVAssetForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestNewCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)synchronousImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_prepareLivePhotoResultWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 shouldIncludeVideo:(_Bool)arg3 videoURL:(id)arg4 info:(id)arg5 photoTime:(CDStruct_1b6d18a9)arg6 asset:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (int)requestImageDataAndOrientationForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)cancelImageRequest:(int)arg1;
- (void)additionalWorkForImageRequestCompletedWithResult:(id)arg1 request:(id)arg2 context:(id)arg3;
- (int)runRequestWithContext:(id)arg1;
- (int)nextID;
@property(readonly) unsigned long long hash;
- (_Bool)_canStreamVideoForAsset:(id)arg1;
- (void)_runBlockOnAppropriateResultQueueOrSynchronouslyWithRequest:(id)arg1 options:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_handleActivityForMediaContext:(id)arg1;
- (id)init;
- (int)requestImagePropertiesForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)_requestImagePropertiesFromFileForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)buildExportSessionFromVideoURL:(id)arg1 infoDictionary:(id)arg2 exportPreset:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)buildAVAssetFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildAVPlayerItemFromVideoURL:(id)arg1 infoDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 playbackOnly:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
