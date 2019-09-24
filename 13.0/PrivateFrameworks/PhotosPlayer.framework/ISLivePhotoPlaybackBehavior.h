//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoPlaybackBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoPlaybackBehavior : ISBehavior
{
    struct {
        _Bool respondsToDidFinish;
        _Bool respondsToDidBeginPlaying;
    } _delegateFlags;
    _Bool _immediatelyShowsPhotoWhenPlaybackEnds;
    _Bool _hasBlurryTransition;
    _Bool _isTransitioningToPhoto;
    _Bool __videoReadyToPlay;
    _Bool __preparing;
    double _photoTransitionDuration;
    long long __currentPlaybackID;
    long long __readyToPlayPlaybackID;
    CDStruct_1b6d18a9 _keyTime;
    CDStruct_e83c9415 _playbackTimeRange;
}

@property(nonatomic, getter=_isPreparing, setter=_setPreparing:) _Bool _preparing; // @synthesize _preparing=__preparing;
@property(nonatomic, getter=_isVideoReadyToPlay, setter=_setVideoReadyToPlay:) _Bool _videoReadyToPlay; // @synthesize _videoReadyToPlay=__videoReadyToPlay;
@property(nonatomic, setter=_setReadyToPlayPlaybackID:) long long _readyToPlayPlaybackID; // @synthesize _readyToPlayPlaybackID=__readyToPlayPlaybackID;
@property(nonatomic, setter=_setCurrentPlaybackID:) long long _currentPlaybackID; // @synthesize _currentPlaybackID=__currentPlaybackID;
@property(readonly, nonatomic) _Bool isTransitioningToPhoto; // @synthesize isTransitioningToPhoto=_isTransitioningToPhoto;
@property(readonly, nonatomic) _Bool hasBlurryTransition; // @synthesize hasBlurryTransition=_hasBlurryTransition;
@property(readonly, nonatomic) _Bool immediatelyShowsPhotoWhenPlaybackEnds; // @synthesize immediatelyShowsPhotoWhenPlaybackEnds=_immediatelyShowsPhotoWhenPlaybackEnds;
@property(readonly, nonatomic) double photoTransitionDuration; // @synthesize photoTransitionDuration=_photoTransitionDuration;
@property(readonly, nonatomic) CDStruct_e83c9415 playbackTimeRange; // @synthesize playbackTimeRange=_playbackTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
- (void)_showVideoWithPlaybackID:(long long)arg1;
- (void)_transitionToVideoWithPlaybackID:(long long)arg1;
- (void)_startPlaybackWithPlaybackID:(long long)arg1;
- (void)_didFinishPreparing;
- (void)_handleDidFinishPreroll;
- (void)_prerollWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleDidSeekToBeginning;
- (void)_prepareVideoForPlaybackIfNeeded;
- (void)startPlayback;
- (void)activeDidChange;
- (void)videoDidPlayToEnd;
- (void)_handleDidFinish;
- (void)videoWillPlayToEnd;
- (long long)behaviorType;
@property(nonatomic) __weak id <ISLivePhotoPlaybackBehaviorDelegate> delegate; // @dynamic delegate;
- (id)initWithInitialLayoutInfo:(id)arg1 keyTime:(CDStruct_1b6d18a9)arg2 playbackTimeRange:(CDStruct_e83c9415)arg3 photoTransitionDuration:(double)arg4 immediatelyShowsPhotoWhenPlaybackEnds:(_Bool)arg5 hasBlurryTransition:(_Bool)arg6;

@end
