//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarRegionLayout-Protocol.h>

@class NSArray, NSString, UIView, _UIStatusBarRegion;

@interface _UIStatusBarRegionLinearLayout : NSObject <_UIStatusBarRegionLayout>
{
    _UIStatusBarRegion *_region;
    NSArray *_displayItems;
    long long _verticalAlignment;
    NSArray *_horizontalConstraints;
    NSArray *_verticalConstraints;
    NSArray *_layoutGuides;
}

@property(copy, nonatomic) NSArray *layoutGuides; // @synthesize layoutGuides=_layoutGuides;
@property(copy, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(copy, nonatomic) NSArray *horizontalConstraints; // @synthesize horizontalConstraints=_horizontalConstraints;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(nonatomic) __weak _UIStatusBarRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool fitsAllItems;
- (id)_horizontalConstraintsForLayoutItems:(id)arg1 layoutGuides:(id)arg2;
- (id)_verticalConstraintsForDisplayItem:(id)arg1;
- (void)_updateConstraints;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
