//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSString;

@protocol CDPRecoveryKeyValidatorInternal <NSObject>
- (void)generateRecoveryKey:(void (^)(NSString *, NSError *))arg1;
- (void)confirmRecoveryKey:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

