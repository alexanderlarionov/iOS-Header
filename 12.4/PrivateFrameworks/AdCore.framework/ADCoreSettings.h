//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class ACAccount, NSString, NSURL, NSUUID;

@interface ADCoreSettings : ADSingleton
{
    _Bool _educationModeEnabled;
    _Bool _internationalRoaming;
    _Bool _hasDeterminedRoamingStatus;
    int _connectionType;
    float _timezone;
    int _runState;
    NSURL *_defaultServerURL;
    NSURL *_defaultConfigurationServerURL;
    double _jingleTimeoutInterval;
    double _adServerTimeoutInterval;
    double _NSURLConnectionTimeout;
    double _NSURLTransactionTimeout;
    NSString *_osVersionAndBuild;
    NSString *_deviceModel;
    NSString *_bundleIdentifier;
    NSString *_storefrontLocalizationLanguage;
    NSString *_homeCarrierMCC;
    NSString *_homeCarrierMNC;
    NSString *_currentCarrierMCC;
    NSString *_currentCarrierMNC;
    NSString *_iTunesStorefront;
}

+ (_Bool)educationModeEnabled;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *iTunesStorefront; // @synthesize iTunesStorefront=_iTunesStorefront;
@property(nonatomic) int runState; // @synthesize runState=_runState;
@property(nonatomic) _Bool hasDeterminedRoamingStatus; // @synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus;
@property(nonatomic) _Bool internationalRoaming; // @synthesize internationalRoaming=_internationalRoaming;
@property(copy, nonatomic) NSString *currentCarrierMNC; // @synthesize currentCarrierMNC=_currentCarrierMNC;
@property(copy, nonatomic) NSString *currentCarrierMCC; // @synthesize currentCarrierMCC=_currentCarrierMCC;
@property(copy, nonatomic) NSString *homeCarrierMNC; // @synthesize homeCarrierMNC=_homeCarrierMNC;
@property(copy, nonatomic) NSString *homeCarrierMCC; // @synthesize homeCarrierMCC=_homeCarrierMCC;
@property(readonly, nonatomic) _Bool educationModeEnabled; // @synthesize educationModeEnabled=_educationModeEnabled;
@property(retain, nonatomic) NSString *storefrontLocalizationLanguage; // @synthesize storefrontLocalizationLanguage=_storefrontLocalizationLanguage;
@property(nonatomic) float timezone; // @synthesize timezone=_timezone;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *osVersionAndBuild; // @synthesize osVersionAndBuild=_osVersionAndBuild;
@property(nonatomic) double NSURLTransactionTimeout; // @synthesize NSURLTransactionTimeout=_NSURLTransactionTimeout;
@property(nonatomic) double NSURLConnectionTimeout; // @synthesize NSURLConnectionTimeout=_NSURLConnectionTimeout;
@property(nonatomic) double adServerTimeoutInterval; // @synthesize adServerTimeoutInterval=_adServerTimeoutInterval;
@property(nonatomic) double jingleTimeoutInterval; // @synthesize jingleTimeoutInterval=_jingleTimeoutInterval;
@property(retain, nonatomic) NSURL *defaultConfigurationServerURL; // @synthesize defaultConfigurationServerURL=_defaultConfigurationServerURL;
@property(retain, nonatomic) NSURL *defaultServerURL; // @synthesize defaultServerURL=_defaultServerURL;
- (void).cxx_destruct;
@property(nonatomic) int maxSegmentSendInterval;
@property(nonatomic) int segmentRetrievalInterval;
@property(readonly, nonatomic) NSString *localeIdentifier;
- (void)gatherTelephonyData;
@property(readonly, nonatomic) _Bool deviceLimitsAdTracking;
- (_Bool)isLATRestrictedByProfile;
@property(nonatomic) _Bool isLATEnabled;
@property(readonly, nonatomic) _Bool limitAdTrackingRestrictionEnabledBySpringboard;
- (void)reloadStorefront:(CDUnknownBlockType)arg1;
- (_Bool)deviceUnlockedOnce;
- (_Bool)purpleBuddyWillRun;
- (int)deviceRunStateForBundleIdentifier:(id)arg1;
- (id)deviceDescription;
@property(readonly, nonatomic) _Bool isManagediCloudAccount;
@property(readonly, nonatomic) _Bool isManagediTunesAccount;
@property(readonly, nonatomic) _Bool isManagedAppleID;
@property(readonly, nonatomic) NSString *customJinglePayload;
@property(readonly, nonatomic) NSString *iTunesAccountDSID;
@property(readonly, nonatomic) ACAccount *iTunesStoreAccount;
@property(readonly, nonatomic) NSString *iCloudDSID;
@property(readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property(readonly, nonatomic) ACAccount *iCloudAccount;
- (void)clearAdvertisingIdentifier;
@property(readonly, nonatomic) NSUUID *IDFA;
- (void)expire;
- (id)init;

@end
