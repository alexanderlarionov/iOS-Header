//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNObservable, NSString;

@protocol CNMCProfileConnection <NSObject>
- (_Bool)communicationServiceRulesExistForBundleID:(NSString *)arg1 forCommunicationServiceType:(NSString *)arg2;
- (NSString *)defaultAppBundleIDForCommunicationServiceType:(NSString *)arg1 forAccountWithIdentifier:(NSString *)arg2;
- (CNObservable *)observableForManagedConfigChanged;
@end

