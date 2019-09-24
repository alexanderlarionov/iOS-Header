//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class FontInstallMissingNavigationController, NSArray, NSMutableArray, NSString, NSXPCConnection, UIImage, UIStoryboard, UIViewController;

@interface FontInstallMissingController : SBUIRemoteAlertServiceViewController
{
    UIStoryboard *_storyboard;
    UIViewController *_initialViewController;
    NSXPCConnection *_connection;
    NSString *_cancelTitle;
    NSString *_noncancelTitle;
    NSString *_alertTitle;
    NSString *_messageText;
    UIImage *_mainIcon;
    UIImage *_subIcon;
    FontInstallMissingNavigationController *_detailPresentationController;
    NSArray *_input;
    NSMutableArray *_output;
}

@property(retain, nonatomic) NSMutableArray *output; // @synthesize output=_output;
@property(retain, nonatomic) NSArray *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (void)doneWithMissingFonts:(id)arg1 withDismissAnimated:(_Bool)arg2;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureControllersForInput;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectToEndpoint:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;

@end
