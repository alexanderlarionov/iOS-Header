//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardContent-Protocol.h"

@class CarFocusableButton, NSDictionary, NSLayoutConstraint, NSString, UIColor, UILabel;
@protocol CarCardContentDelegate;

__attribute__((visibility("hidden")))
@interface CarTestCardViewController : UIViewController <CarCardContent>
{
    _Bool _useNightMode;
    _Bool _grows;
    _Bool _compresses;
    id <CarCardContentDelegate> _cardContentDelegate;
    NSDictionary *_dynamicDimensionGuides;
    NSString *_text;
    UIColor *_color;
    CDUnknownBlockType _dismissHandler;
    UILabel *_textLabel;
    UILabel *_heightLabel;
    UILabel *_widthLabel;
    CarFocusableButton *_reloadButton;
    CarFocusableButton *_heightPlusButton;
    CarFocusableButton *_heightMinusButton;
    CarFocusableButton *_widthPlusButton;
    CarFocusableButton *_widthMinusButton;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_widthConstraint;
    struct CGSize _size;
    CDStruct_c638d987 _layout;
}

@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) CarFocusableButton *widthMinusButton; // @synthesize widthMinusButton=_widthMinusButton;
@property(retain, nonatomic) CarFocusableButton *widthPlusButton; // @synthesize widthPlusButton=_widthPlusButton;
@property(retain, nonatomic) CarFocusableButton *heightMinusButton; // @synthesize heightMinusButton=_heightMinusButton;
@property(retain, nonatomic) CarFocusableButton *heightPlusButton; // @synthesize heightPlusButton=_heightPlusButton;
@property(retain, nonatomic) CarFocusableButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UILabel *widthLabel; // @synthesize widthLabel=_widthLabel;
@property(retain, nonatomic) UILabel *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(nonatomic) _Bool compresses; // @synthesize compresses=_compresses;
@property(nonatomic) _Bool grows; // @synthesize grows=_grows;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) CDStruct_c638d987 layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSDictionary *dynamicDimensionGuides; // @synthesize dynamicDimensionGuides=_dynamicDimensionGuides;
@property(nonatomic) __weak id <CarCardContentDelegate> cardContentDelegate; // @synthesize cardContentDelegate=_cardContentDelegate;
@property(nonatomic, getter=shouldUseNightMode) _Bool useNightMode; // @synthesize useNightMode=_useNightMode;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)updateLayout;
@property(readonly, nonatomic) _Bool hasContent;
- (void)setUseNightMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateContents;
- (void)_updateSize;
- (void)_buttonTapped:(id)arg1;
- (id)_labelWithText:(id)arg1 size:(double)arg2;
- (id)_buttonWithTitle:(id)arg1;
- (void)_tapped;
- (id)initWithText:(id)arg1 color:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

