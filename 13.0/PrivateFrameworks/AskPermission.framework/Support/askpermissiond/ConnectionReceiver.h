//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ConnectionProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface ConnectionReceiver : NSObject <ConnectionProtocol, NSXPCListenerDelegate>
{
    NSXPCListener *_connectionListener;
}

+ (id)sharedReceiver;
@property(retain, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
- (void).cxx_destruct;
- (void)didReceiveStorePushNotificationWithPayload:(id)arg1;
- (void)presentProductPageWithTitle:(id)arg1 body:(id)arg2 itemIdentifier:(id)arg3 previewURL:(id)arg4;
- (void)updateRequestWithIdentifier:(id)arg1 action:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)localApproveRequestWithItemIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAccountWithType:(long long)arg1;
- (void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

