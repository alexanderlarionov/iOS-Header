//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFRangeControlItem, HUQuickControlSliderViewProfile;

@interface HUQuickControlRangeViewController : HUQuickControlSingleControlViewController
{
}

+ (Class)controlItemClass;
- (id)controlToViewValueTransformer;
- (id)createViewProfile;
- (id)createInteractionCoordinator;

// Remaining properties
@property(readonly, nonatomic) HFRangeControlItem *controlItem; // @dynamic controlItem;
@property(readonly, nonatomic) HUQuickControlSliderViewProfile *viewProfile; // @dynamic viewProfile;

@end
