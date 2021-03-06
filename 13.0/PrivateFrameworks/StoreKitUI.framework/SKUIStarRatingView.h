//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIStarRatingView : UIView
{
    double _elementSpacing;
    UIImageView *_ratingStarsImageView;
    UILabel *_textLabel;
}

@property(nonatomic) double elementSpacing; // @synthesize elementSpacing=_elementSpacing;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *textLabel;
@property(retain, nonatomic) UIImage *ratingStarsImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

