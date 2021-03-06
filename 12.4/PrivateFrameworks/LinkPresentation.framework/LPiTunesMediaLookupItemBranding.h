//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPiTunesMediaAssetCustomResolver-Protocol.h>

@class LPOneShotFetcher, LPiTunesMediaAsset, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupItemBranding : NSObject <LPiTunesMediaAssetCustomResolver>
{
    LPOneShotFetcher *_EVODMetadataFetcher;
    NSURL *_URL;
    _Bool _cancelled;
    LPiTunesMediaAsset *_originatingAsset;
}

@property(retain, nonatomic) LPiTunesMediaAsset *originatingAsset; // @synthesize originatingAsset=_originatingAsset;
- (void).cxx_destruct;
- (void)cancel;
- (id)accessibilityText;
- (long long)maximumBytes;
- (_Bool)isValidMIMEType:(id)arg1;
- (id)URL;
- (void)continueFetchingWithEVODMetadataURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

