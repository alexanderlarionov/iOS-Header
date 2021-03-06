//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NPKPaymentProvisioningFlowStepContext.h>

@class PKPaymentPass, PKVerificationChannel;

@interface NPKPaymentProvisioningFlowControllerIssuerVerificationCodeStepContext : NPKPaymentProvisioningFlowStepContext
{
    PKPaymentPass *_paymentPass;
    PKVerificationChannel *_verificationChannel;
}

@property(retain, nonatomic) PKVerificationChannel *verificationChannel; // @synthesize verificationChannel=_verificationChannel;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestContext:(id)arg1;

@end

