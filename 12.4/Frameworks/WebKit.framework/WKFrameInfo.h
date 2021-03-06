//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURLRequest, WKSecurityOrigin, WKWebView, _WKFrameHandle;

@interface WKFrameInfo : NSObject <WKObject, NSCopying>
{
    struct ObjectStorage<API::FrameInfo> _frameInfo;
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) __weak WKWebView *webView;
@property(readonly, nonatomic) WKSecurityOrigin *securityOrigin;
@property(readonly, copy, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic, getter=isMainFrame) _Bool mainFrame;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic) _WKFrameHandle *_handle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

