//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class NSArray, NSUUID;

@protocol HKDeviceQueryClientInterface <HKQueryClientInterface>
- (void)clientRemote_deliverDevices:(NSArray *)arg1 done:(_Bool)arg2 reset:(_Bool)arg3 query:(NSUUID *)arg4;
@end
