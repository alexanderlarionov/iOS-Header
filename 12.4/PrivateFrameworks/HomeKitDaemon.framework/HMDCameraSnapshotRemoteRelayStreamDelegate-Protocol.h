//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID, HMDCameraSnapshotRemoteRelayStream, NSError;

@protocol HMDCameraSnapshotRemoteRelayStreamDelegate <NSObject>
- (void)snapshotRelayStream:(HMDCameraSnapshotRemoteRelayStream *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
- (void)snapshotRelayStream:(HMDCameraSnapshotRemoteRelayStream *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
@end

