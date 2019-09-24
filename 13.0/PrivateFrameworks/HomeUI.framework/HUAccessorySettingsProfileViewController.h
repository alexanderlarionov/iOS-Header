//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>
#import <HomeUI/HUAccessorySettingsProfileModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUAccessorySettingsProfileModuleDelegate-Protocol.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsProfileModule, HUAccessorySettingsProfileModuleController, NSString;

@interface HUAccessorySettingsProfileViewController : HUItemTableViewController <HUAccessorySettingsProfileModuleControllerDelegate, HUAccessorySettingsProfileModuleDelegate, HUAccessorySettingsDetailsViewControllerProtocol>
{
    HFAccessorySettingGroupItem *_item;
    HUAccessorySettingsProfileModule *_profileModule;
    HUAccessorySettingsProfileModuleController *_profileModuleController;
}

@property(retain, nonatomic) HUAccessorySettingsProfileModuleController *profileModuleController; // @synthesize profileModuleController=_profileModuleController;
@property(retain, nonatomic) HUAccessorySettingsProfileModule *profileModule; // @synthesize profileModule=_profileModule;
@property(readonly, copy, nonatomic) HFAccessorySettingGroupItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)settingsProfileModule:(id)arg1 wantsProfileItemDeleted:(id)arg2;
- (void)accessorySettingsProfileModuleController:(id)arg1 needsNavigationToController:(id)arg2;
- (id)hu_preloadContent;
- (id)itemModuleControllers;
- (id)initWithAccessoryGroupItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
