//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "VSSpeechEagerProtocol-Protocol.h"
#import "VSSpeechSpeakableProtocol-Protocol.h"
#import "VSSpeechSynthesisCoreDelegate-Protocol.h"

@class NSArray, NSError, NSString, VSAudioData, VSAudioPlaybackService, VSInstrumentMetrics, VSSpeechRequest, VSSpeechSynthesisCore;
@protocol VSSpeechServiceDelegate;

@interface VSSpeechServerTask : NSOperation <VSSpeechSynthesisCoreDelegate, VSSpeechSpeakableProtocol, VSSpeechEagerProtocol>
{
    _Bool _shouldSpeak;
    _Bool _readyForEagerTask;
    _Bool _useServerResponse;
    _Bool _useDeviceSynthesis;
    _Bool _speechStartReported;
    id <VSSpeechServiceDelegate> _delegate;
    VSSpeechRequest *_request;
    VSInstrumentMetrics *_instrumentMetrics;
    NSError *_error;
    VSAudioPlaybackService *_playbackService;
    NSArray *_wordTimingInfo;
    VSSpeechServerTask *_speakTask;
    VSSpeechSynthesisCore *_synthesisCore;
    VSAudioData *_serverAudio;
    NSArray *_deferredTTSTimingInfo;
    struct _opaque_pthread_cond_t _timeoutCondition;
    struct _opaque_pthread_mutex_t _racingMutex;
}

@property(retain, nonatomic) NSArray *deferredTTSTimingInfo; // @synthesize deferredTTSTimingInfo=_deferredTTSTimingInfo;
@property(retain, nonatomic) VSAudioData *serverAudio; // @synthesize serverAudio=_serverAudio;
@property(nonatomic) struct _opaque_pthread_mutex_t racingMutex; // @synthesize racingMutex=_racingMutex;
@property(nonatomic) _Bool speechStartReported; // @synthesize speechStartReported=_speechStartReported;
@property(nonatomic) _Bool useDeviceSynthesis; // @synthesize useDeviceSynthesis=_useDeviceSynthesis;
@property(nonatomic) _Bool useServerResponse; // @synthesize useServerResponse=_useServerResponse;
@property(retain, nonatomic) VSSpeechSynthesisCore *synthesisCore; // @synthesize synthesisCore=_synthesisCore;
@property(retain, nonatomic) VSSpeechServerTask *speakTask; // @synthesize speakTask=_speakTask;
@property(nonatomic) _Bool readyForEagerTask; // @synthesize readyForEagerTask=_readyForEagerTask;
@property(nonatomic) struct _opaque_pthread_cond_t timeoutCondition; // @synthesize timeoutCondition=_timeoutCondition;
@property(retain, nonatomic) NSArray *wordTimingInfo; // @synthesize wordTimingInfo=_wordTimingInfo;
@property(retain, nonatomic) VSAudioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // @synthesize instrumentMetrics=_instrumentMetrics;
@property(retain, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool shouldSpeak; // @synthesize shouldSpeak=_shouldSpeak;
@property(nonatomic) __weak id <VSSpeechServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)synthesisCore:(id)arg1 didReceiveWordTimingInfo:(id)arg2;
- (void)synthesisCore:(id)arg1 didReceiveAudio:(id)arg2;
- (id)audioPowerProvider;
- (void)writeAudioIfNeeded:(id)arg1;
- (void)reportFinish;
- (void)reportInstrumentMetrics;
- (void)reportSpeechStart;
- (void)reportTimingInfo;
- (_Bool)isSpeaking;
- (id)md5hash;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)proceedWithServerTTS;
- (void)proceedWithSpeechCache:(id)arg1;
- (void)main;
- (int)waitForServerResponse;
- (id)playAudioData:(id)arg1;
- (id)handleDeviceSynthesis:(id)arg1 timingInfo:(id)arg2;
- (_Bool)shouldDeferDeviceTTS;
- (void)handleServerNetworkError;
- (id)handleServerResponse:(id)arg1 timingInfo:(id)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 shouldSpeak:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

