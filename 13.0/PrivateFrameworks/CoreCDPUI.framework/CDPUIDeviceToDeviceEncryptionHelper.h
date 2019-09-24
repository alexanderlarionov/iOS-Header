//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationController, UIViewController;
@protocol CDPUIDeviceToDeviceEncryptionHelperDelegate;

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject
{
    UIViewController *_presentingViewController;
    id <CDPUIDeviceToDeviceEncryptionHelperDelegate> _delegate;
    AKAppleIDAuthenticationController *_authController;
}

@property(retain, nonatomic) AKAppleIDAuthenticationController *authController; // @synthesize authController=_authController;
@property(nonatomic) __weak id <CDPUIDeviceToDeviceEncryptionHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_executeSyncOnMainThreadIfNeeded:(CDUnknownBlockType)arg1;
- (id)_cdpStateControllerWithContext:(id)arg1;
- (id)_cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1;
- (id)_cdpStateControllerWithAuthResults:(id)arg1;
- (void)_configurePresentingViewControllerForModalPresentation;
- (id)_encryptionErrorFromError:(id)arg1;
- (_Bool)_hasPasscode;
- (void)_validatePasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_validateCDPStateForAuthResults:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_isHSA2AvailableForAuthenticationContext:(id)arg1;
- (void)_presentCDPUpgradeSpinnerViewControllerForAuthContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_authenticateContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithPresentingViewController:(id)arg1;

@end
