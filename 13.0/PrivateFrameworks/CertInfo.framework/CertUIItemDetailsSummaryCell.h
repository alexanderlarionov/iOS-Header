//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface CertUIItemDetailsSummaryCell : UITableViewCell
{
    NSArray *_detailViews;
    double _detailLabelOriginX;
}

@property(nonatomic) double detailLabelOriginX; // @synthesize detailLabelOriginX=_detailLabelOriginX;
@property(retain, nonatomic) NSArray *detailViews; // @synthesize detailViews=_detailViews;
- (void).cxx_destruct;
- (void)createViewWithItemDetailArray:(id)arg1;
- (void)createViewWithDescriptors:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
