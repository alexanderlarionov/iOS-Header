//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CLKDevice, CLKFont, CLKTimeFormatter, CLKUITimeLabelStyle, NSAttributedString, UIColor, UIView;

@protocol _CLKUITimeLabelManager
@property(nonatomic) _Bool showSeconds;
@property(readonly, nonatomic) struct UIEdgeInsets opticalInsets;
@property(nonatomic) _Bool animationsPaused;
@property(retain, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) struct CGSize intrinsicSize;
@property(readonly, nonatomic) UIView *view;
- (void)enumerateUnderlyingLabelsWithBlock:(void (^)(UILabel *, _Bool))arg1;
- (NSAttributedString *)effectiveAttributedText;
- (CLKFont *)effectiveFont;
- (void)sizeViewToFit;
- (struct CGSize)sizeThatFits;
- (UIView *)viewForLastBaselineLayout;
- (double)_lastLineBaseline;
- (void)setMaxWidth:(double)arg1;
- (void)setShowsDesignator:(_Bool)arg1;
- (void)setStyle:(CLKUITimeLabelStyle *)arg1;
- (void)updateTimeText;
- (id)initWithForDevice:(CLKDevice *)arg1 timeFormatter:(CLKTimeFormatter *)arg2 options:(unsigned long long)arg3 labelFactory:(UILabel * (^)(_Bool))arg4;
@end
