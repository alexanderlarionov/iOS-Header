//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class BookmarkFavoritesGridLayout, NSArray, NSIndexPath, UICollectionView;

@protocol CollectionViewDelegateBookmarkFavoritesGridLayout <UICollectionViewDelegateFlowLayout>

@optional
- (NSArray *)collectionView:(UICollectionView *)arg1 deleteInsertPairsToTreatAsMovesForLayout:(BookmarkFavoritesGridLayout *)arg2;
- (struct CGRect)collectionView:(UICollectionView *)arg1 layout:(BookmarkFavoritesGridLayout *)arg2 iconRectForItemAtIndexPath:(NSIndexPath *)arg3;
@end
