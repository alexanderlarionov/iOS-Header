//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSWPParagraphStyle;

@protocol TSTTableTileCreating
@property(readonly, nonatomic) struct TSUModelColumnIndex numberOfColumns;
@property(readonly, nonatomic) struct TSUModelRowIndex numberOfRows;
- (void)enumerateDataStoreCellsWithBlock:(void (^)(TSTCell *, struct TSUCellCoord, _Bool *))arg1;
- (TSWPParagraphStyle *)textStyleAtBaseCellCoord:(struct TSUModelCellCoord)arg1 isDefault:(out _Bool *)arg2;
- (struct TSUModelCellRect)range;
@end

