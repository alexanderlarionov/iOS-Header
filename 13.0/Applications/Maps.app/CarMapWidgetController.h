//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarWidgetController.h"

@class CarChromeViewController;

__attribute__((visibility("hidden")))
@interface CarMapWidgetController : CarWidgetController
{
}

+ (Class)fallbackModeControllerClass;
+ (Class)chromeViewControllerClass;
- (id)modesForCurrentAppState;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;

// Remaining properties
@property(retain, nonatomic) CarChromeViewController *chromeViewController; // @dynamic chromeViewController;

@end
