//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarBaseSearchResultsViewController.h"

#import "CarChromeModeController-Protocol.h"

@class CarChromeViewController, ChromeViewController, NSString, SearchInfo;

__attribute__((visibility("hidden")))
@interface CarDisambiguationViewController : CarBaseSearchResultsViewController <CarChromeModeController>
{
    SearchInfo *_searchInfo;
    CDUnknownBlockType _result;
    CarChromeViewController *_chromeViewController;
}

@property(nonatomic) ChromeViewController *chromeViewController;
- (void).cxx_destruct;
- (int)currentUsageTarget;
- (void)_cancel:(id)arg1;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (void)pushDetailsForItemSelectedAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)resignCurrentModeAnimated:(_Bool)arg1 toMode:(id)arg2;
- (void)becomeCurrentModeWithViews:(id)arg1 animated:(_Bool)arg2 state:(id)arg3 fromMode:(id)arg4;
- (id)viewController;
- (_Bool)showsMapView;
- (id)initWithSearchInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

