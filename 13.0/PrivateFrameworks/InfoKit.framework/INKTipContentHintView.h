//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InfoKit/INKContentView.h>

#import <InfoKit/UIGestureRecognizerDelegate-Protocol.h>

@class INKMultilineButton, NSMutableArray, NSString, UIButton, UIImageView, UILabel;
@protocol INKTipContentHintViewDelegate;

@interface INKTipContentHintView : INKContentView <UIGestureRecognizerDelegate>
{
    _Bool __isAccessbilitySizeCategory;
    _Bool __isSmallScreen;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_textLabel;
    UIImageView *_iconImageView;
    INKMultilineButton *_actionButton;
    NSMutableArray *_axRequiredLayoutConstraints;
    NSMutableArray *_defaultRequiredLayoutConstraints;
    id <INKTipContentHintViewDelegate> __tipContentDelegate;
}

+ (id)secondaryLabelFont;
+ (id)primaryLabelFont;
+ (id)secondaryLabelColor;
+ (id)primaryLabelColor;
@property(nonatomic) __weak id <INKTipContentHintViewDelegate> _tipContentDelegate; // @synthesize _tipContentDelegate=__tipContentDelegate;
- (void).cxx_destruct;
- (_Bool)view:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_setPreferredTraitCollection:(id)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)updateAccessibilityContentCategory;
- (void)_accessibilitySizeCategoryDidChange;
- (void)updateFonts;
- (void)_hintTapped;
- (void)_actionTapped;
- (void)_closeTapped;
- (id)_initWithContent:(id)arg1 tipContentDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

