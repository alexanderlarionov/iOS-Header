//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface LUIWiFiController : NSObject
{
}

+ (id)sharedController;
- (void)_wifiNetworkJoinFinished:(id)arg1;
- (void)_wifiNetworkJoinStarted:(id)arg1;
- (void)done:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewController;

@end
