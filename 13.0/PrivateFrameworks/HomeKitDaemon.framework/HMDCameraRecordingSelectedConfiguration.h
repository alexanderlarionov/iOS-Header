//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCameraRecordingAudioCodecConfiguration, HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingVideoCodecConfiguration;

@interface HMDCameraRecordingSelectedConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDCameraRecordingGeneralConfiguration *_generalConfiguration;
    HMDCameraRecordingVideoCodecConfiguration *_videoConfiguration;
    HMDCameraRecordingAudioCodecConfiguration *_audioConfiguration;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(readonly, copy, nonatomic) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, copy, nonatomic) HMDCameraRecordingGeneralConfiguration *generalConfiguration; // @synthesize generalConfiguration=_generalConfiguration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithGeneralConfiguration:(id)arg1 videoCodecConfiguration:(id)arg2 audioCodecConfiguration:(id)arg3;

@end
