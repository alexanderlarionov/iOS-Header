//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TabThumbnailCollectionViewDelegate-Protocol.h"

@class NSArray, TabOverview, TabOverviewItem;

@protocol TabOverviewDelegate <TabThumbnailCollectionViewDelegate>
- (void)tabOverview:(TabOverview *)arg1 didEndDragInteractionAtPoint:(struct CGPoint)arg2;
- (void)tabOverview:(TabOverview *)arg1 didUpdateDragInteractionPoint:(struct CGPoint)arg2;
- (void)tabOverview:(TabOverview *)arg1 didBeginDragInteractionForItem:(TabOverviewItem *)arg2 point:(struct CGPoint)arg3 anchorPoint:(struct CGPoint)arg4 zPosition:(double)arg5;
- (_Bool)tabOverview:(TabOverview *)arg1 canBeginDragInteractionForItem:(TabOverviewItem *)arg2;
- (void)tabOverviewDidChangeAllowsInteractivePresentation:(TabOverview *)arg1;
- (NSArray *)itemsToKeepVisibleForTabOverview:(TabOverview *)arg1;
- (TabOverviewItem *)currentItemForTabOverview:(TabOverview *)arg1;
- (void)tabOverviewDidCancelDismissal:(TabOverview *)arg1;
@end
