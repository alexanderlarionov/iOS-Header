//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PPXPCClientHelper;

@interface PPConfigClient : NSObject
{
    PPXPCClientHelper *_clientHelper;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)variantNameWithError:(id *)arg1;
- (unsigned long long)assetVersionWithError:(id *)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
