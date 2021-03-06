//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthUI/HKCalendarMonthTitleFormatting-Protocol.h>

@class UILabel;

@interface _HKMonthTitleView : UIView <HKCalendarMonthTitleFormatting>
{
    UIView *_dividerLine;
    _Bool _highlighted;
    UILabel *_monthTitle;
    double _topPadding;
    double _bottomPadding;
    double _dividerOriginX;
    double _dividerWidth;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) double dividerWidth; // @synthesize dividerWidth=_dividerWidth;
@property(nonatomic) double dividerOriginX; // @synthesize dividerOriginX=_dividerOriginX;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) UILabel *monthTitle; // @synthesize monthTitle=_monthTitle;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setDate:(id)arg1;
- (id)_monthStringFromDate:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end

