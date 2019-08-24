//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPLocalDeviceSecretHandlerProtocol-Protocol.h>

@class CDPContext;

@interface CDPDLocalDeviceSecretHandler : NSObject <CDPLocalDeviceSecretHandlerProtocol>
{
    CDUnknownBlockType _validationHandler;
    CDPContext *_context;
}

@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 validSecretHandler:(CDUnknownBlockType)arg2;

@end
