//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPeopleCollectionViewCell.h>

@class CAShapeLayer;

@interface PXPeopleCollectionViewPlusCell : PXPeopleCollectionViewCell
{
    CAShapeLayer *_plusShapeLayer;
}

@property(retain, nonatomic) CAShapeLayer *plusShapeLayer; // @synthesize plusShapeLayer=_plusShapeLayer;
- (void).cxx_destruct;
- (struct CGPath *)_createShapePathForBoundsRect:(struct CGRect)arg1;
- (void)_updatePlusShapeLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
