//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Proximity/NSObject-Protocol.h>

@class NSArray, NSError, PRRemoteDevice;

@protocol PRRangingClientProtocol <NSObject>
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;
- (void)didFailWithError:(NSError *)arg1;

@optional
- (void)remoteDevice:(PRRemoteDevice *)arg1 didChangeState:(long long)arg2;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
- (void)didReceiveNewSolutions:(NSArray *)arg1;
@end

