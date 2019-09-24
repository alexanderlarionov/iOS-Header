//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriClientFlow/NSObject-Protocol.h>

@class SABaseCommand;

@protocol CFCommandProcessing <NSObject>
- (void)isDeviceLockedWithPasscodeWithCompletion:(void (^)(_Bool))arg1;
- (void)handleCommand:(SABaseCommand *)arg1 reply:(void (^)(SABaseCommand *))arg2;
- (void)handleOneWayCommand:(SABaseCommand *)arg1;
@end
