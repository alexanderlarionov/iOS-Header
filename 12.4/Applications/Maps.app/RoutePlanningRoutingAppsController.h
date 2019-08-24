//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RoutePlanningWrapperViewController.h"

#import "RoutePlanningDataObservation-Protocol.h"
#import "TransitAppSelectionControllerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RoutePlanningRoutingAppsController : RoutePlanningWrapperViewController <TransitAppSelectionControllerDelegate, RoutePlanningDataObservation>
{
}

- (void)transitAppSelectionControllerDidSelectApp:(id)arg1;
- (void)transitAppSelectionControllerDidCancel:(id)arg1;
- (void)headerViewButtonTapped:(id)arg1;
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateWaypointsWithOrigin:(id)arg2 destination:(id)arg3;
@property(readonly, nonatomic) long long observedRoutePlanningData;
- (void)_updateOrigin:(id)arg1 destination:(id)arg2;
- (id)initWithDataCoordination:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
