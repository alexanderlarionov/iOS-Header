//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RAPInstrumentableTarget-Protocol.h"
#import "_MKPlaceViewControllerDelegate-Protocol.h"

@class MKMapItem, NSString, _MKPlaceViewController;
@protocol PersonalizedMapsPlaceViewControllerDelegate, RAPAppStateProtocol;

__attribute__((visibility("hidden")))
@interface PersonalizedMapsPlaceViewController : UIViewController <_MKPlaceViewControllerDelegate, RAPInstrumentableTarget>
{
    MKMapItem *_mapItem;
    _MKPlaceViewController *_placeViewController;
    id <PersonalizedMapsPlaceViewControllerDelegate> _delegate;
    id <RAPAppStateProtocol> _rapContext;
}

@property(retain, nonatomic) id <RAPAppStateProtocol> rapContext; // @synthesize rapContext=_rapContext;
@property(readonly, nonatomic) __weak id <PersonalizedMapsPlaceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _MKPlaceViewController *placeViewController; // @synthesize placeViewController=_placeViewController;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) int backAction;
- (void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
- (void)placeViewControllerDidSelectInlineMap:(id)arg1;
- (void)placeViewControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2;
- (void)_actionButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (id)backgroundColor;
- (id)initWithMapItem:(id)arg1 delegate:(id)arg2;
- (id)initWithMapItem:(id)arg1 rapContext:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
