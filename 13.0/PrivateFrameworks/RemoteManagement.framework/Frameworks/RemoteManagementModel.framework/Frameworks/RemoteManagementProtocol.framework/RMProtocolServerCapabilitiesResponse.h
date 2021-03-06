//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolSupportedFeatures;

@interface RMProtocolServerCapabilitiesResponse : RMModelPayloadBase
{
    NSString *_responseCapabilitiesToken;
    NSString *_responseVersion;
    RMProtocolSupportedFeatures *_responseSupportedFeatures;
}

+ (id)requestWithCapabilitiesToken:(id)arg1 version:(id)arg2 supportedFeatures:(id)arg3;
@property(copy, nonatomic) RMProtocolSupportedFeatures *responseSupportedFeatures; // @synthesize responseSupportedFeatures=_responseSupportedFeatures;
@property(copy, nonatomic) NSString *responseVersion; // @synthesize responseVersion=_responseVersion;
@property(copy, nonatomic) NSString *responseCapabilitiesToken; // @synthesize responseCapabilitiesToken=_responseCapabilitiesToken;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithType:(short)arg1;
- (_Bool)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

