//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, PKAccount, PKAccountBillPaymentController;

@protocol PKAccountBillPaymentControllerDelegate <NSObject>
- (void)accountBillPaymentController:(PKAccountBillPaymentController *)arg1 hasChangedState:(unsigned long long)arg2 error:(NSError *)arg3 updatedAccount:(PKAccount *)arg4;
@end

