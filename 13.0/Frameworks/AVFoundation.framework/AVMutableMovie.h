//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMovie.h>

@class AVMediaDataStorage, AVMutableMovieInternal, NSArray;

@interface AVMutableMovie : AVMovie
{
    AVMutableMovieInternal *_mutableMovieInternal;
}

+ (_Bool)expectsPropertyRevisedNotifications;
+ (id)movieWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)movieWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) AVMediaDataStorage *defaultMediaDataStorage;
@property(nonatomic) CDStruct_1b6d18a9 interleavingPeriod;
@property(nonatomic) int timescale;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(nonatomic) float preferredVolume;
@property(nonatomic) float preferredRate;
- (CDStruct_1b6d18a9)duration;
- (void)_signalMetadataUpdated;
- (void)_signalTracksUpdated;
- (struct OpaqueFigFormatReader *)_formatReader;
- (struct OpaqueFigMutableMovie *)_figMutableMovie;
@property(nonatomic, getter=isModified) _Bool modified;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *tracks;
- (id)_mutableTracks;
- (id)_initializationOptions;
- (id)data;
- (id)URL;
- (id)fileType;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (Class)_classForTrackInspectors;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithFigError:(int)arg1 userInfo:(id)arg2;
- (id)_initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader *)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4;
- (id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithFileType:(id)arg1 copySettingsFromMovie:(id)arg2 options:(id)arg3;
- (id)init;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithSettingsFromMovie:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (void)scaleTimeRange:(CDStruct_e83c9415)arg1 toDuration:(CDStruct_1b6d18a9)arg2;
- (void)removeTimeRange:(CDStruct_e83c9415)arg1;
- (void)insertEmptyTimeRange:(CDStruct_e83c9415)arg1;
- (_Bool)insertTimeRange:(CDStruct_e83c9415)arg1 ofAsset:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 copySampleData:(_Bool)arg4 error:(id *)arg5;
- (void)removeTrack:(id)arg1;
- (id)addMutableTracksCopyingSettingsFromTracks:(id)arg1 options:(id)arg2;
- (id)addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3;
- (id)_addMutableTrackWithMediaType:(id)arg1 copySettingsFromTrack:(id)arg2 options:(id)arg3;
- (id)mutableTrackCompatibleWithTrack:(id)arg1;
@property(copy, nonatomic) NSArray *metadata;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;

@end
