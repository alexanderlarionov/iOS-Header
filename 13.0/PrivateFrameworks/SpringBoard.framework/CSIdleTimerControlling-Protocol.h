//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;

@protocol CSIdleTimerControlling <NSObject>
- (void)resetIdleTimerIfTopMost;
- (void)removeIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (void)addIdleTimerDisabledAssertionReason:(NSString *)arg1;
@end
