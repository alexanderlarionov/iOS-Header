//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGridInlinePlaybackController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetPixelBufferSourcesProvider-Protocol.h>
#import <PhotosUICore/PXGRectDiagnosticsProvider-Protocol.h>

@class NSString, PXCuratedLibraryLayout, PXCuratedLibraryViewModel;

@interface PXCuratedLibraryVideoPlaybackController : PXGridInlinePlaybackController <PXChangeObserver, PXGDisplayAssetPixelBufferSourcesProvider, PXGRectDiagnosticsProvider>
{
    PXCuratedLibraryViewModel *_viewModel;
    long long _presentedZoomLevel;
    long long _newZoomLevel;
    PXCuratedLibraryLayout *_curatedLibraryLayout;
}

@property(retain, nonatomic) PXCuratedLibraryLayout *curatedLibraryLayout; // @synthesize curatedLibraryLayout=_curatedLibraryLayout;
- (void).cxx_destruct;
- (void)enumerateRectDiagnosticsForLayout:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_canPlayVideosInZoomLevel:(long long)arg1;
- (_Bool)canPlayAsset:(id)arg1;
- (_Bool)shouldEnablePlayback;
- (_Bool)canProvideGeometriesForRecords;
- (struct CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize *)arg2;
- (id)filterSortedRecordsToPlay:(id)arg1;
- (void)didUpdatePlayingRecords;
- (_Bool)canUpdatePlayingRecords;
- (struct CGRect)currentVisibleRect;
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)arg1;
- (id)pixelBufferSourceForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 spriteReference:(id)arg3;
- (id)init;
- (id)initViewViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

