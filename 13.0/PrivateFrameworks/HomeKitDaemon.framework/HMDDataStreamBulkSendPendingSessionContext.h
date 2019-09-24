//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFTimer;

@interface HMDDataStreamBulkSendPendingSessionContext : NSObject
{
    CDUnknownBlockType _sessionStartCallback;
    HMFTimer *_handleOpenRequestResponseTimer;
    HMFTimer *_sendCloseEventTimer;
}

@property(retain) HMFTimer *sendCloseEventTimer; // @synthesize sendCloseEventTimer=_sendCloseEventTimer;
@property(retain) HMFTimer *handleOpenRequestResponseTimer; // @synthesize handleOpenRequestResponseTimer=_handleOpenRequestResponseTimer;
@property(readonly) CDUnknownBlockType sessionStartCallback; // @synthesize sessionStartCallback=_sessionStartCallback;
- (void).cxx_destruct;
@property(readonly) _Bool shouldCloseSessionWithTimeoutReason;
- (id)initWithSessionStartCallback:(CDUnknownBlockType)arg1 handleOpenRequestResponseTimer:(id)arg2 sendCloseEventTimer:(id)arg3;

@end
