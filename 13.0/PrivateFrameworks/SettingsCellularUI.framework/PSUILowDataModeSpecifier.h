//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class CTServiceDescriptor, CoreTelephonyClient, PSListController;

__attribute__((visibility("hidden")))
@interface PSUILowDataModeSpecifier : PSSpecifier
{
    CTServiceDescriptor *_serviceDescriptor;
    CoreTelephonyClient *_ctClient;
    PSListController *_hostController;
}

@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) CoreTelephonyClient *ctClient; // @synthesize ctClient=_ctClient;
@property(retain, nonatomic) CTServiceDescriptor *serviceDescriptor; // @synthesize serviceDescriptor=_serviceDescriptor;
- (void).cxx_destruct;
- (void)setLowDataMode:(id)arg1 specifier:(id)arg2;
- (id)isLowDataModeEnabled:(id)arg1;
- (id)initWithFactory:(id)arg1 hostController:(id)arg2 parentSpecifier:(id)arg3;

@end

