//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFocusRegion.h>

@protocol UIFocusItem;

@interface _UIFocusItemRegion : _UIFocusRegion
{
    _Bool _itemIsEligibleForFocusInteraction;
    _Bool _itemIsFocusable;
    id <UIFocusItem> _item;
}

@property(readonly, nonatomic) __weak id <UIFocusItem> item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (long long)_visualRepresentationPatternType;
- (id)_visualRepresentationColor;
- (id)_debugAssociatedObject;
- (long long)_preferredDistanceComparisonType;
- (unsigned long long)_focusableBoundaries;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (id)_defaultFocusItem;
- (_Bool)_shouldCropRegionToSearchArea;
- (_Bool)_canBeOccludedByRegionsAbove;
- (_Bool)_canOccludeRegionsBelow;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
