//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MKPlaceCardActionItem, NSArray, _MKUILabel;
@protocol MKActionRowItemViewDelegate;

__attribute__((visibility("hidden")))
@interface MKActionRowItemView : UIView
{
    _MKUILabel *_label;
    _MKUILabel *_glyphLabel;
    unsigned long long _style;
    NSArray *_constraints;
    _Bool _enabled;
    _Bool _touched;
    _Bool _fullWidthMode;
    _Bool _highlighted;
    id <MKActionRowItemViewDelegate> _delegate;
    MKPlaceCardActionItem *_actionRowItem;
}

+ (double)minWidthForString:(id)arg1 forSize:(id)arg2;
+ (id)widthDictionary;
+ (id)glyphFont;
+ (id)labelFont;
+ (double)widthBrandItem;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool fullWidthMode; // @synthesize fullWidthMode=_fullWidthMode;
@property(nonatomic) _Bool touched; // @synthesize touched=_touched;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) MKPlaceCardActionItem *actionRowItem; // @synthesize actionRowItem=_actionRowItem;
@property(nonatomic) __weak id <MKActionRowItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_touchEnded;
- (void)_touchCancelled;
- (void)_touchBegan;
- (void)updateColor;
- (void)infoCardThemeChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)layoutSubviews;
- (void)createConstraints;
- (void)_contentSizeDidChange;
- (id)initWithActionRowItem:(id)arg1 style:(unsigned long long)arg2;

@end
