//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray, NSString, UIBarButtonItem, _TtC5Files21DOCDisplayOptionsView, _TtC5Files33DOCBrowserContainedViewController;

@interface _TtC5Files29DOCBrowserContainerController : UIViewController
{
    MISSING_TYPE *dataSource;
    MISSING_TYPE *contentViewController;
    MISSING_TYPE *visibleViewController;
    MISSING_TYPE *state;
    MISSING_TYPE *queue;
    MISSING_TYPE *stateReporting;
    MISSING_TYPE *actionReporting;
    MISSING_TYPE *preventAppearanceForwarding;
    MISSING_TYPE *additionalLeadingNavigationBarButtonItems;
    MISSING_TYPE *additionalTrailingNavigationBarButtonItems;
    MISSING_TYPE *splitViewControllerButton;
    MISSING_TYPE *isUserInteractionEnabled;
    MISSING_TYPE *_containerNavigationItem;
    MISSING_TYPE *displayOptionsView;
}

- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(nonatomic, readonly) _Bool shouldAutomaticallyForwardAppearanceMethods;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)activateContentViewController;
@property(nonatomic, retain) _TtC5Files21DOCDisplayOptionsView *displayOptionsView; // @synthesize displayOptionsView;
@property(nonatomic, retain) UIBarButtonItem *splitViewControllerButton; // @synthesize splitViewControllerButton;
@property(nonatomic, copy) NSArray *additionalTrailingNavigationBarButtonItems;
@property(nonatomic, copy) NSArray *additionalLeadingNavigationBarButtonItems;
@property(nonatomic) _Bool preventAppearanceForwarding; // @synthesize preventAppearanceForwarding;
@property(nonatomic, retain) _TtC5Files33DOCBrowserContainedViewController *contentViewController; // @synthesize contentViewController;

@end
