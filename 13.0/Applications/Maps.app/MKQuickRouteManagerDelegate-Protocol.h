//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MKQuickRouteManagerDelegate <NSObject>
- (_Bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (_Bool)quickRouteShouldOnlyUseAutomobile;

@optional
- (unsigned long long)preferredDirectionsTypeForQuickRoute;
@end

