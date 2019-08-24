//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol BatteryMonitorTokenDelegate;

@protocol BatteryMonitorToken <NSObject>
@property(nonatomic) __weak id <BatteryMonitorTokenDelegate> delegate;
- (_Bool)batteryIsChargingOrFull;
- (long long)currentBatteryState;
@end
