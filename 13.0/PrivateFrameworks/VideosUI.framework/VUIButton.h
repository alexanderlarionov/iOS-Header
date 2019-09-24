//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <VideosUI/VUILabelTopMarginCalculationProtocol-Protocol.h>

@class IKViewElement, UILargeContentViewerInteraction, UIView, VUIButtonLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIButton : UIControl <VUILabelTopMarginCalculationProtocol>
{
    _Bool _imageTrailsTextContent;
    VUIButtonLayout *_layout;
    _TVImageView *_backgroundImageView;
    VUILabel *_textContentView;
    _TVImageView *_imageView;
    IKViewElement *_viewElement;
    CDUnknownBlockType _selectActionHandler;
    UIView *_backdropView;
    UILargeContentViewerInteraction *_largeContentViewerInteraction;
    _TVImageView *_imagesViewDefaultState;
    _TVImageView *_imagesViewHighlightedState;
    _TVImageView *_backgroundImagesViewDefaultState;
    _TVImageView *_backgroundImagesViewHighlightedState;
}

@property(retain, nonatomic) _TVImageView *backgroundImagesViewHighlightedState; // @synthesize backgroundImagesViewHighlightedState=_backgroundImagesViewHighlightedState;
@property(retain, nonatomic) _TVImageView *backgroundImagesViewDefaultState; // @synthesize backgroundImagesViewDefaultState=_backgroundImagesViewDefaultState;
@property(retain, nonatomic) _TVImageView *imagesViewHighlightedState; // @synthesize imagesViewHighlightedState=_imagesViewHighlightedState;
@property(retain, nonatomic) _TVImageView *imagesViewDefaultState; // @synthesize imagesViewDefaultState=_imagesViewDefaultState;
@property(retain, nonatomic) UILargeContentViewerInteraction *largeContentViewerInteraction; // @synthesize largeContentViewerInteraction=_largeContentViewerInteraction;
@property(retain, nonatomic) UIView *backdropView; // @synthesize backdropView=_backdropView;
@property(copy, nonatomic) CDUnknownBlockType selectActionHandler; // @synthesize selectActionHandler=_selectActionHandler;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) VUILabel *textContentView; // @synthesize textContentView=_textContentView;
@property(nonatomic) _Bool imageTrailsTextContent; // @synthesize imageTrailsTextContent=_imageTrailsTextContent;
@property(retain, nonatomic) _TVImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) VUIButtonLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (_Bool)scalesLargeContentImage;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void)_updateBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGPoint)_centerWithViewSize:(struct CGSize)arg1 withParentSize:(struct CGSize)arg2;
- (void)_updateLayout;
- (void)_buttonTapped:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_configureWithLayout:(id)arg1;
- (_Bool)_hasBackgroundImage;
- (_Bool)_hasImage;
- (_Bool)_hasTitle;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)prepareForReuse;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (void)layoutSubviews;
- (struct CGSize)_imageSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundImage:(id)arg1 state:(unsigned long long)arg2;
- (void)setImageView:(id)arg1 state:(unsigned long long)arg2;
- (void)setCornerRadius:(double)arg1;
- (void)updateWithElement:(id)arg1;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;

@end
