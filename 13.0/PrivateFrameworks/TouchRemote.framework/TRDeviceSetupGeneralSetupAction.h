//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupGeneralSetupAction : TRDeviceSetupAction
{
}

@property(readonly, nonatomic) _Bool rememberPassword;
@property(readonly, nonatomic, getter=isDiagnosticsEnabled) _Bool diagnosticsEnabled;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property(readonly, copy, nonatomic) NSString *homeSharingID;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, copy, nonatomic) NSString *countryCode;
- (id)initWithCountryCode:(id)arg1 language:(id)arg2 homeSharingID:(id)arg3 homeSharingGroupID:(id)arg4 isDiagnosticsEnabled:(_Bool)arg5 rememberPassword:(_Bool)arg6;
- (id)init;

@end

