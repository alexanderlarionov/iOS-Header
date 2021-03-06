//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKAction.h>

#import <OpusKit/NSSecureCoding-Protocol.h>
#import <OpusKit/OKActionMicrophoneNoiseExports-Protocol.h>

@interface OKActionMicrophoneNoise : OKAction <NSSecureCoding, OKActionMicrophoneNoiseExports>
{
    float _meanAudioLevel;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)microphoneNoiseActionWithState:(unsigned long long)arg1 location:(struct CGPoint)arg2 touchCount:(unsigned long long)arg3 meanAudioLevel:(float)arg4 context:(id)arg5;
+ (id)microphoneNoiseActionWithState:(unsigned long long)arg1 meanAudioLevel:(float)arg2 context:(id)arg3;
@property(readonly, nonatomic) float meanAudioLevel; // @synthesize meanAudioLevel=_meanAudioLevel;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

