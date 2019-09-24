//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellularUI/NSObject-Protocol.h>

@class CTCarrierSpaceCapabilities, CTCarrierSpacePlanGroupOptionInfo, NSDictionary;

@protocol CTCarrierSpaceClientDelegate <NSObject>

@optional
- (void)purchasedPlan:(CTCarrierSpacePlanGroupOptionInfo *)arg1 didChangeStatus:(long long)arg2 context:(NSDictionary *)arg3;
- (void)dataPlanMetricsDidChange;
- (void)appsDidChange;
- (void)plansDidChange;
- (void)usageDidChange;
- (void)userConsentFlowInfoDidChange;
- (void)capabilitiesDidChange:(CTCarrierSpaceCapabilities *)arg1;
@end
