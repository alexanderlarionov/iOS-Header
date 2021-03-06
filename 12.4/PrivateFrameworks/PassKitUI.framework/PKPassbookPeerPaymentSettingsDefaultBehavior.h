//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPassbookPeerPaymentSettingsDataSource-Protocol.h>
#import <PassKitUI/PKPassbookPeerPaymentSettingsDelegate-Protocol.h>

@class NSString, PKPaymentWebService, PKPeerPaymentWebService;

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate>
{
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentWebService *_peerPaymentWebService;
}

- (void).cxx_destruct;
- (void)_unregisterForPeerPaymentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerForPeerPaymentWithCompletion:(CDUnknownBlockType)arg1;
- (void)peerPaymentRegistrationStatusHasChanged:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)peerPaymentWebService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

