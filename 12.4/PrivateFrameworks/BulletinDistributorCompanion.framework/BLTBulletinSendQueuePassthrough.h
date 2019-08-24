//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BLTBulletinSendQueueDelegate;

@interface BLTBulletinSendQueuePassthrough : NSObject
{
    id <BLTBulletinSendQueueDelegate> _delegate;
}

@property(nonatomic) __weak id <BLTBulletinSendQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendNow;
- (void)queuePending;
- (void)handleFileURL:(id)arg1;
- (void)sendRequest:(id)arg1 withTimeout:(id)arg2 isTrafficRestricted:(_Bool)arg3 didSend:(CDUnknownBlockType)arg4;
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3 didQueue:(CDUnknownBlockType)arg4;

@end
