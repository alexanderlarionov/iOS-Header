//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSObject;
@protocol STContentPrivacyViewModelCoordinator;

@interface STContentPrivacyListController : PSListController
{
    NSObject<STContentPrivacyViewModelCoordinator> *_coordinator;
}

@property(retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3;
- (id)tccSpecifierWithCapabilityKey:(id)arg1 id:(id)arg2;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)defaultLinkListSpecifierWithItem:(id)arg1;
- (id)defaultRadioItemSpecifierWithGroup:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)getItemSpecifierValue:(id)arg1;
- (void)setRestrictionsEnabled:(id)arg1 specifier:(id)arg2;
- (id)getRestrictionsEnabled:(id)arg1;
- (id)_topLevelExternalSpecifierWithClass:(Class)arg1 name:(id)arg2 idTitle:(id)arg3;
- (id)_topLevelSpecifierWithAction:(SEL)arg1 name:(id)arg2;
- (void)showMediaRestrictions:(id)arg1;
- (void)showAllowedAppsRestrictions:(id)arg1;
- (void)showiTunesPurchasesRestrictions:(id)arg1;
- (id)_allowChangesSpecifiers;
- (id)_privacySpecifiers;
- (id)storeDetailSpecifiers;
- (id)_topLevelSpecifiers;
- (id)_featureSwitchSpecifier;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (id)init;

@end
