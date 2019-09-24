//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/AAUISignInControllerDelegate-Protocol.h>
#import <PreferencesUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>
#import <PreferencesUI/DevicePINControllerDelegate-Protocol.h>
#import <PreferencesUI/PSTopLevelController-Protocol.h>
#import <PreferencesUI/RadiosPreferencesDelegate-Protocol.h>
#import <PreferencesUI/SUIKSearchResultsCollectionViewControllerDelegate-Protocol.h>
#import <PreferencesUI/UISearchBarDelegate-Protocol.h>
#import <PreferencesUI/UISearchControllerDelegate-Protocol.h>
#import <PreferencesUI/UISearchResultsUpdating-Protocol.h>

@class AAUIProfilePictureStore, ACAccountStore, AIDAServiceOwnersManager, CNMonogrammer, CoreTelephonyClient, EAAccessory, HFHomeSettingsVisibilityArbitrator, NSArray, NSDictionary, NSObject, NSSet, NSString, PSKeyboardNavigationSearchController, PSSpecifier, PSUIClassKitVisibilityArbitrator, PSUIClassroomVisibilityArbitrator, SUIKSearchResultsCollectionViewController, UIImage, VSAccountStore;
@protocol OS_dispatch_queue;

@interface PSUIPrefsListController : PSListController <AAUISignInControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CoreTelephonyClientSubscriberDelegate, SUIKSearchResultsCollectionViewControllerDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate, PSTopLevelController>
{
    NSString *_pendingOffsetItemName;
    _Bool _launchedToTest;
    PSUIClassKitVisibilityArbitrator *_classKitVisibilityArbitrator;
    PSUIClassroomVisibilityArbitrator *_classroomVisibilityArbitrator;
    HFHomeSettingsVisibilityArbitrator *_homeKitVisibilityArbitrator;
    VSAccountStore *_videoSubscriberAccountStore;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AAUIProfilePictureStore *_profilePictureStore;
    CNMonogrammer *_monogrammer;
    _Bool _didFirstLoad;
    EAAccessory *_speakerAccessory;
    PSSpecifier *_eqSpecifier;
    PSSpecifier *_ethernetSpecifier;
    NSArray *_vpnBundleControllers;
    NSArray *_MCUIBundleControllers;
    NSArray *_thirdPartySpecifiers;
    NSDictionary *_movedThirdPartySpecifiers;
    _Bool _initiallyLoadingThirdPartySpecifiers;
    _Bool _refreshingThirdPartySpecifiers;
    PSSpecifier *_notificationsSpecifier;
    PSSpecifier *_wallpaperSpecifier;
    PSSpecifier *_passcodeSpecifier;
    UIImage *_appleAccountSpecifierCachedIcon;
    PSSpecifier *_appleAccountSpecifier;
    PSSpecifier *_videoSubscriberGroupSpecifier;
    PSSpecifier *_videoSubscriberSpecifier;
    PSSpecifier *_messagesSpecifier;
    PSSpecifier *_faceTimeSpecifier;
    PSSpecifier *_gameCenterSpecifier;
    PSSpecifier *_siriSpecifier;
    PSSpecifier *_tvSpecifier;
    PSSpecifier *_carrierSelectionSpecifier;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_classKitSpecifier;
    PSSpecifier *_classroomSpecifier;
    PSSpecifier *_homeKitSpecifier;
    PSSpecifier *_healthKitSpecifier;
    PSSpecifier *_emergencySOSSpecifier;
    _Bool _wifiValueIsClean;
    _Bool _bluetoothValueIsClean;
    NSArray *_originalSpecifiers;
    NSSet *_originalDisplayIdentifiers;
    PSSpecifier *_selectedSpecifier;
    ACAccountStore *_accountStore;
    PSSpecifier *_specifierToSelect;
    NSObject<OS_dispatch_queue> *_loadAllSpecifiersQueue;
    NSObject<OS_dispatch_queue> *_spyglassUpdateQueue;
    CoreTelephonyClient *_coreTelephonyClient;
    _Bool skipSelectingDefaultCategoryOnLaunch;
    _Bool _deferredURLLoadForThirdPartyApp;
    NSString *_bluetoothString;
    NSArray *_followupSpecifiers;
    PSKeyboardNavigationSearchController *_spotlightSearchController;
    SUIKSearchResultsCollectionViewController *_searchResultsController;
    NSString *_wifiString;
}

+ (void)setAirplaneMode:(_Bool)arg1;
+ (_Bool)airplaneMode;
+ (id)radiosPreferences;
@property(nonatomic) _Bool deferredURLLoadForThirdPartyApp; // @synthesize deferredURLLoadForThirdPartyApp=_deferredURLLoadForThirdPartyApp;
@property(copy, nonatomic) NSString *wifiString; // @synthesize wifiString=_wifiString;
@property(retain, nonatomic) SUIKSearchResultsCollectionViewController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(retain, nonatomic) PSKeyboardNavigationSearchController *spotlightSearchController; // @synthesize spotlightSearchController=_spotlightSearchController;
@property(retain, nonatomic) NSArray *followupSpecifiers; // @synthesize followupSpecifiers=_followupSpecifiers;
@property(copy, nonatomic) NSString *bluetoothString; // @synthesize bluetoothString=_bluetoothString;
@property(nonatomic) _Bool skipSelectingDefaultCategoryOnLaunch; // @synthesize skipSelectingDefaultCategoryOnLaunch;
- (void).cxx_destruct;
- (void)_configureImageViewForRow:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)dismissPopover;
- (_Bool)_canSelectSpecifierAtIndexPath:(id)arg1;
- (void)_tabKeyPressed;
- (void)_downArrowKeyPressed;
- (void)_upArrowKeyPressed;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (id)searchResultsCollectionViewController:(id)arg1 iconForCategory:(id)arg2;
- (_Bool)searchResultsCollectionViewController:(id)arg1 shouldShowCategory:(id)arg2;
- (long long)searchResultsCollectionViewController:(id)arg1 sortCategory1:(id)arg2 sortCategory2:(id)arg3;
- (void)searchResultsCollectionViewController:(id)arg1 didSelectURL:(id)arg2;
- (void)_handleOnsiteProfileInstallation;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)indexManifests;
- (void)indexThirdPartyAppsAndManifests;
- (void)updateVideoSubscriberAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_videoSubscriberAccountAvailabilityDidChange:(id)arg1;
- (void)_videoSubscriberAccountStoreDidChange:(id)arg1;
- (id)videoSubscriberAccountValue:(id)arg1;
- (_Bool)shouldDeferPushForSpecifierID:(id)arg1 urlDictionary:(id)arg2;
- (void)suspend;
- (id)configurePasscodeSpecifierFromSpecifiers:(id)arg1;
- (_Bool)shouldShowFaceID;
- (_Bool)shouldShowTouchID;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)bluetoothPowerChanged:(id)arg1;
- (id)bluetoothValue:(id)arg1;
- (void)bluetoothValueFetch:(id)arg1;
- (void)iMessageSupportMayHaveChanged;
- (void)lazyLoadSpecialBundleForSpecifier:(id)arg1;
- (id)cellularDataStatusForSpecifier:(id)arg1;
- (void)airplaneModeChanged;
- (id)phoneStatusForSpecifier:(id)arg1;
- (void)reloadCellularRelatedSpecifiers;
- (id)getAirplaneMode:(id)arg1;
- (void)confirmationSpecifierCancelled:(id)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)_setAirplaneMode:(_Bool)arg1;
- (void)setAirplaneMode:(id)arg1 specifier:(id)arg2;
- (void)_beginObservingProfilePictureStoreDidChangeNotification;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)_profilePictureStore;
- (id)_accountStore;
- (id)_serviceOwnersManager;
- (void)profilePictureDidChange;
- (void)updateSpyglassWithCompletion:(CDUnknownBlockType)arg1;
- (void)appleAccountsDidChange;
- (void)signInControllerDidCancel:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_presentAppleAccountSignInController:(id)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupCachedAppleAccountSpecifier:(id)arg1;
- (void)appleAccountSpecifierWasTappedWhileInCachedState:(id)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1 title:(id)arg2;
- (void)_setupAppleAccountSpecifierForLogin:(id)arg1;
- (id)_silhouetteMonogramIcon;
- (void)_setupAppleAccountSpecifier:(id)arg1;
- (void)setupPrimaryAppleAccountGroup:(id)arg1;
- (_Bool)_removeCachedAppleAccountIcon;
- (void)_saveIconToCacheForAppleAccountSpecifier:(id)arg1;
- (id)_cachedIconForAppleAccountSpecifier;
- (id)appleAccountIconLocalCacheURL;
- (void)NETRBStateChangedNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)NETRBStateChangedNotification:(id)arg1;
- (void)updatePersonalHotspot;
- (id)getTetheringStatus:(id)arg1;
- (void)updateEthernetWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateEthernet;
- (_Bool)shouldShowEthernetSpecifier;
- (id)wifiNetwork:(id)arg1;
- (void)wifiGetCurrentWiFiNetwork;
- (void)updateWifi;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)willBecomeActive;
- (void)asyncSpecifiersFirstLoad;
- (void)willEnterForeground;
- (id)getAllSpecifiers;
- (void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(CDUnknownBlockType)arg1;
- (_Bool)deviceSupportsApplePay;
- (void)_localeChanged;
- (void)_newCarrierNotification;
- (id)categoryController;
- (id)specifierForBundle:(id)arg1;
- (void)loadPPTTestSpecifiers:(int)arg1;
- (void)_reallyLoadThirdPartySpecifiersForApps:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg1;
- (void)_loadThirdPartySpecifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (_Bool)handlePendingURL;
- (id)specifiers;
- (_Bool)shouldShowSimulatorSettings;
- (id)bundle;
- (id)passbookSpecifier;
- (void)showDeviceSupervisionInfo;
- (void)updateAccountSpecifiers;
- (void)updateHomeKitSpecifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateClassroomSpecifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateClassKitSpecifierWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowClassKitSpecifier;
- (_Bool)shouldShowClassroomSpecifier;
- (void)updateRestrictedSettings;
- (void)displayIdentifiersChanged;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)refresh3rdPartyBundles;
- (void)iconChangedForBundleID:(id)arg1;
- (void)popToRoot;
- (void)insertMovedThirdPartySpecifiersAnimated:(_Bool)arg1;
- (id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2;
- (id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(_Bool)arg3 searchPlist:(id)arg4;
- (_Bool)_showSOS;
- (id)selectSpecifier:(id)arg1;
- (void)_showControllerFromSpecifier:(id)arg1;
- (id)_sidebarSpecifierForCategoryController;
- (void)showPINSheet:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)configureTopLevelSpecifier:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)testSpecifierCountAfterBlock:(CDUnknownBlockType)arg1;
- (void)reloadAsyncSpecifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSupervisedTextWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateApplePayWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateSOSWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateVPNWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateFollowupSpecifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupDaemonsIfNeeded;
- (id)identifierForSelectedIndex;
- (id)generalViewController;
- (void)selectDefaultCategoryForced:(_Bool)arg1 showController:(_Bool)arg2;
- (void)selectDefaultCategoryForced:(_Bool)arg1;
- (void)selectDefaultCategory;
- (void)checkDeveloperSettingsState;
- (long long)navigationItemLargeTitleDisplayMode;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)_showDetailTargetDidChange:(id)arg1;
- (void)insertOrderedSpecifier:(id)arg1 animated:(_Bool)arg2;
- (long long)insertionIndexForSpecifier:(id)arg1 inSpecifiers:(id)arg2;
- (id)_primarySpecifierOrdering;
- (void)rerootNavigationController;
- (void)reloadSpecifiers;
- (void)clearCache;
- (void)setSpeakerAccessory:(id)arg1 eqAvailable:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
