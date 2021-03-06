//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPButton.h>

@class MTVisualStylingProvider, UILabel;

__attribute__((visibility("hidden")))
@interface MRMediaControlsVideoPickerFooterView : MPButton
{
    MTVisualStylingProvider *_visualStylingProvider;
    UILabel *_customTitleLabel;
}

@property(retain, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateStyle;
- (void)setHighlighted:(_Bool)arg1;
- (id)titleLabelText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

