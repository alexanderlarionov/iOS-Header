//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VCImageAttributeRules;

__attribute__((visibility("hidden")))
@interface SDPMediaLine : NSObject
{
    NSMutableArray *_attributes;
    VCImageAttributeRules *_imageAttributeRules;
    NSMutableArray *_payloads;
    unsigned int _rtpId;
    int _rtcpPort;
    int _rtpPort;
    _Bool _allowRTCPFB;
}

+ (void)fillImageArray:(id)arg1 imageArray:(struct imageTag *)arg2;
+ (void)fillImageStruct:(id)arg1 imageStruct:(struct imageTag *)arg2;
+ (void)fillImageStructWithDictionary:(id)arg1 forInterface:(int)arg2 imageStruct:(struct imageTag *)arg3;
@property(readonly, nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules=_imageAttributeRules;
@property(readonly, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) int rtcpPort; // @synthesize rtcpPort=_rtcpPort;
@property(readonly, nonatomic) int rtpPort; // @synthesize rtpPort=_rtpPort;
@property(nonatomic) unsigned int rtpId; // @synthesize rtpId=_rtpId;
@property(readonly, nonatomic) NSString *string;
- (void)parseMediaLine:(id)arg1;
- (void)parseAttribute:(id)arg1;
- (void)parseImageAttributeRules:(id)arg1;
- (_Bool)videoDisplayAttribute:(int *)arg1 withHeight:(int *)arg2;
- (_Bool)supportImage:(id)arg1 width:(int)arg2 height:(int)arg3 rate:(int)arg4;
- (id)getVideoRecvImages:(id)arg1;
- (id)getVideoSendImages:(id)arg1;
- (id)videoImageAttributes:(int)arg1;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag *)arg3 count:(int)arg4;
- (void)addWifiRules:(id)arg1 cellularRules:(id)arg2 payload:(int)arg3 direction:(int)arg4;
- (void)addImageAttributeRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 direction:(int)arg4 attributeString:(id)arg5;
- (void)appendPayload:(int)arg1 dimensions:(struct imageTag *)arg2 direction:(int)arg3 attributeString:(id)arg4;
- (void)addVideoImageAttr:(id)arg1 ForPayload:(int)arg2;
- (void)addPayload:(int)arg1 rtpMap:(id)arg2 formatParameters:(id)arg3;
- (void)addAttribute:(id)arg1;
- (void)dealloc;
- (id)initWithParser:(id)arg1 rtpPort:(int)arg2 payloads:(id)arg3;
- (id)init;

@end
