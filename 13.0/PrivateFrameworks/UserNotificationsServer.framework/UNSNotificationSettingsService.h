//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSNotificationRepositorySettingsProvider-Protocol.h>
#import <UserNotificationsServer/UNSSettingsGatewayObserver-Protocol.h>

@class NSMutableArray, NSString, UNSCriticalAlertAuthorizationAlertController, UNSNotificationAuthorizationAlertController, UNSSettingsGateway;
@protocol OS_dispatch_queue;

@interface UNSNotificationSettingsService : NSObject <UNSSettingsGatewayObserver, UNSNotificationRepositorySettingsProvider>
{
    NSMutableArray *_observers;
    UNSSettingsGateway *_settingsGateway;
    UNSCriticalAlertAuthorizationAlertController *_criticalAlertAuthorizationAlertController;
    UNSNotificationAuthorizationAlertController *_notificationAuthorizationAlertController;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)settingsGateway:(id)arg1 didUpdateGlobalSettings:(id)arg2;
- (void)settingsGateway:(id)arg1 didUpdateSectionInfoForSectionIDs:(id)arg2;
- (void)_queue_removeObserver:(id)arg1;
- (void)_queue_addObserver:(id)arg1;
- (void)setNotificationSystemSettings:(id)arg1;
- (id)notificationSystemSettings;
- (void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3;
- (void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2;
- (id)allNotificationSources;
- (id)notificationSourcesForBundleIdentifiers:(id)arg1;
- (id)notificationSourceForBundleIdentifier:(id)arg1;
- (id)notificationSettingsForTopicsWithBundleIdentifier:(id)arg1;
- (id)notificationSettingsForBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsGateway:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

