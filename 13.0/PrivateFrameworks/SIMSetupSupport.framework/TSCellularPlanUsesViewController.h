//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UITableViewDataSource-Protocol.h>
#import <SIMSetupSupport/UITableViewDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSLayoutConstraint, NSMutableArray, NSString, OBBoldTrayButton, UITableViewCell;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanUsesViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>
{
    OBBoldTrayButton *_doneButton;
    _Bool _dataSwitchEnabled;
    _Bool _hasDoneButton;
    id <TSSIMSetupFlowDelegate> _delegate;
    unsigned long long _usesType;
    NSLayoutConstraint *_heightAnchor;
    UITableViewCell *_sectionFooter;
    NSIndexPath *_chosenUseIndexPath;
    NSMutableArray *_chosenUseIndexPaths;
    NSArray *_planItemBadges;
    NSArray *_selectedPlanItems;
}

@property(retain) NSArray *selectedPlanItems; // @synthesize selectedPlanItems=_selectedPlanItems;
@property(retain) NSArray *planItemBadges; // @synthesize planItemBadges=_planItemBadges;
@property(retain) NSMutableArray *chosenUseIndexPaths; // @synthesize chosenUseIndexPaths=_chosenUseIndexPaths;
@property(retain) NSIndexPath *chosenUseIndexPath; // @synthesize chosenUseIndexPath=_chosenUseIndexPath;
@property(retain) UITableViewCell *sectionFooter; // @synthesize sectionFooter=_sectionFooter;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property _Bool hasDoneButton; // @synthesize hasDoneButton=_hasDoneButton;
@property(readonly, nonatomic) unsigned long long usesType; // @synthesize usesType=_usesType;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveDefaultUse:(CDUnknownBlockType)arg1;
- (void)dataSwitchChanged:(id)arg1;
- (void)_doneButtonTapped;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)prepare:(CDUnknownBlockType)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1 withDoneButton:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
