//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SRPagerViewDataSource-Protocol.h"
#import "SRPagerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SRPagerView;
@protocol SRPagerViewControllerDelegate;

@interface SRPagerViewController : UIViewController <SRPagerViewDataSource, SRPagerViewDelegate>
{
    NSMutableArray *_viewControllers;
    _Bool _textInputEnabled;
    UIViewController *_activePageViewController;
    id <SRPagerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SRPagerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController *activePageViewController; // @synthesize activePageViewController=_activePageViewController;
- (void).cxx_destruct;
- (_Bool)_canShowWhileLocked;
- (id)_viewControllerForPageView:(id)arg1;
- (void)pagerViewDidChangeTransitionState:(id)arg1;
- (void)pagerView:(id)arg1 didActivatePageView:(id)arg2 oldActivePageView:(id)arg3;
- (id)pagerView:(id)arg1 pageViewAtIndex:(long long)arg2;
- (long long)numberOfPageViewsInPagerView:(id)arg1;
@property(readonly, nonatomic) unsigned long long transitionState;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (_Bool)containsPageViewController:(id)arg1;
- (void)setActivePageViewController:(id)arg1 animated:(_Bool)arg2;
- (void)removePageViewController:(id)arg1;
- (void)addPageViewController:(id)arg1;
- (void)insertPageViewController:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) NSArray *pageViewControllers;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTextInputEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRPagerView *view; // @dynamic view;

@end
