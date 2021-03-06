//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SafariServices/UIDragInteractionDelegate_Private-Protocol.h>
#import <SafariServices/UIDropInteractionDelegate_Private-Protocol.h>
#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>
#import <SafariServices/_SFBarCommon-Protocol.h>
#import <SafariServices/_SFFluidProgressViewDelegate-Protocol.h>
#import <SafariServices/_SFNavigationBarURLButtonDelegate-Protocol.h>
#import <SafariServices/_UIBasicAnimationFactory-Protocol.h>

@class NSArray, NSAttributedString, NSString, NSTimer, SFCrossfadingImageView, SFDismissButton, SFNavigationBarReaderButton, UIButton, UIColor, UIImageView, UILabel, UILongPressGestureRecognizer, UITextField, _SFDimmingButton, _SFFluidProgressView, _SFNavigationBarBackdrop, _SFNavigationBarItem, _SFNavigationBarLabelsContainer, _SFNavigationBarURLButton, _SFToolbar, _UIBackdropViewSettings;
@protocol _SFNavigationBarDelegate, _SFPopoverSourceInfo;

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, _SFBarCommon>
{
    UIButton *_compressedBarButton;
    UIView *_controlsContainer;
    _SFNavigationBarLabelsContainer *_labelsContainer;
    UIView *_labelScalingContainer;
    UILabel *_URLLabel;
    UILabel *_expandedURLLabel;
    UILabel *_readerAvailabilityLabel;
    UILabel *_notSecureAnnotationLabel;
    double _URLWidth;
    double _URLHeight;
    double _expandedURLWidth;
    double _expandedURLHeight;
    double _offsetOfURLInExpandedURL;
    UIView *_URLContainer;
    UIView *_URLContainerClipView;
    UIImageView *_URLFadeOut;
    UIView *_fakeTextFieldSelectionView;
    double _fakeSelectionStartOffset;
    double _fakeSelectionEndOffset;
    UIButton *_fakeClearButton;
    _Bool _usesLiftedAppearance;
    _SFToolbar *_toolbar;
    struct CGSize _cachedNotSecureAnnotationLabelFittingSize;
    UIView *_notSecureAnnotationContainer;
    _Bool _shouldAnimateURLMovement;
    SFCrossfadingImageView *_searchIndicator;
    SFCrossfadingImageView *_lockView;
    NSArray *_URLAccessoryItems;
    _SFNavigationBarURLButton *_URLOutline;
    _SFFluidProgressView *_progressView;
    _SFNavigationBarBackdrop *_backdrop;
    UIView *_separator;
    _Bool _lockViewNeedsUpdate;
    NSAttributedString *_attributedTextWhenExpanded;
    SFNavigationBarReaderButton *_readerButton;
    _SFDimmingButton *_stopButton;
    _SFDimmingButton *_reloadButton;
    UILongPressGestureRecognizer *_readerLongPressGestureRecognizer;
    _SFDimmingButton *_readerAppearanceButton;
    UIButton *_mediaCaptureMuteButton;
    long long _visibleTrailingButtonType;
    UILongPressGestureRecognizer *_reloadLongPressGestureRecognizer;
    UILongPressGestureRecognizer *_stopLongPressGestureRecognizer;
    UIButton *_cancelButton;
    double _cancelButtonIntrinsicWidth;
    _Bool _readerButtonWillShow;
    NSTimer *_readerAvailabilityLabelHideTimer;
    CDUnknownBlockType _readerAvailabilityAnimationBlock;
    SFDismissButton *_dismissButton;
    UIView *_dismissButtonContainer;
    unsigned long long _inputMode;
    _Bool _preferredBarTintColorIsDark;
    _Bool _preferredBarTintColorIsGreen;
    _Bool _preferredBarTintColorIsRed;
    _Bool _preferredBarTintColorIsExtreme;
    _Bool _usesNarrowLayout;
    _Bool _unifiedFieldShowsProgressView;
    _Bool _usingLightControls;
    _Bool _controlsHidden;
    _Bool _expanded;
    _Bool _backdropGroupDisabled;
    _Bool _suppressesBlur;
    _SFNavigationBarItem *_item;
    unsigned long long _tintStyle;
    _UIBackdropViewSettings *_customBackdropSettings;
    UITextField *_textField;
    NSString *_backdropGroupName;
    id <_SFNavigationBarDelegate> _delegate;
    double _contentUnderStatusBarHeight;
    double _maximumHeight;
    double _minimumBackdropHeight;
    UIView *_inputAccessoryView;
    UIColor *_preferredBarTintColor;
    UIColor *_preferredControlsTintColor;
}

+ (double)separatorHeight;
+ (double)minimumHeight;
+ (double)defaultHeight;
+ (long long)_metricsCategory;
+ (void)initialize;
@property(retain, nonatomic) UIColor *preferredControlsTintColor; // @synthesize preferredControlsTintColor=_preferredControlsTintColor;
@property(retain, nonatomic) UIColor *preferredBarTintColor; // @synthesize preferredBarTintColor=_preferredBarTintColor;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(nonatomic) double minimumBackdropHeight; // @synthesize minimumBackdropHeight=_minimumBackdropHeight;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) _Bool suppressesBlur; // @synthesize suppressesBlur=_suppressesBlur;
@property(nonatomic) double contentUnderStatusBarHeight; // @synthesize contentUnderStatusBarHeight=_contentUnderStatusBarHeight;
@property(nonatomic) __weak id <_SFNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic, getter=isBackdropGroupDisabled) _Bool backdropGroupDisabled; // @synthesize backdropGroupDisabled=_backdropGroupDisabled;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) _UIBackdropViewSettings *customBackdropSettings; // @synthesize customBackdropSettings=_customBackdropSettings;
@property(nonatomic, getter=areControlsHidden) _Bool controlsHidden; // @synthesize controlsHidden=_controlsHidden;
@property(nonatomic, getter=isUsingLightControls) _Bool usingLightControls; // @synthesize usingLightControls=_usingLightControls;
@property(nonatomic) unsigned long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(nonatomic) _Bool unifiedFieldShowsProgressView; // @synthesize unifiedFieldShowsProgressView=_unifiedFieldShowsProgressView;
@property(nonatomic) _Bool usesNarrowLayout; // @synthesize usesNarrowLayout=_usesNarrowLayout;
@property(retain, nonatomic) _SFNavigationBarItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)_toolbarForBarItem:(long long)arg1;
- (id)popoverSourceInfoForBarItem:(long long)arg1;
- (void)animateLinkImage:(struct CGImage *)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(CDUnknownBlockType)arg5 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg6;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint)arg1 inView:(id)arg2;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> URLOutlinePopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> reloadButtonPopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> readerButtonPopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> readerAppearanceButtonPopoverSourceInfo;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)setTextFieldPlaceHolderColor:(id)arg1;
- (double)placeholderHorizontalInset;
- (id)newTextField;
- (id)toolbarPlacedOnTop;
- (void)updateToolbarTintColor:(id)arg1;
- (void)_updateToolbarTintColor;
- (_Bool)canBecomeFirstResponder;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (_Bool)navigationBarURLButtonShouldPaste:(id)arg1;
- (_Bool)navigationBarURLButtonShouldCopy:(id)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1;
- (void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1;
- (_Bool)navigationBarURLButton:(id)arg1 shouldShowMenuForGestureWithRecognizer:(id)arg2;
- (id)textForNavigationBarURLButton:(id)arg1;
@property(readonly, nonatomic) double URLFieldHorizontalMargin;
- (void)_updatePlaceholderText;
- (id)_placeholderText;
- (void)_configureNavigationBarTrailingButtonTintedImages;
- (void)_updateControlTints;
- (id)_controlsTintColor;
- (void)_updateTintColorForControls;
- (_Bool)_shouldUseLightControls;
- (void)backdropDidApplySettings:(id)arg1;
@property(nonatomic) _Bool updatesBackdrop;
- (id)_tintForWarningImage;
- (id)_lockImageUsingMiniatureVersion:(_Bool)arg1;
- (id)_tintForLockImage:(_Bool)arg1;
- (id)_EVCertLockAndTextColor;
- (id)_notSecureWarningColor;
- (id)_notSecureGrayColor;
- (id)_notSecureAnnotationColor;
- (long long)_URLButtonBackgroundStyle;
- (void)_updateURLOutlineColor;
- (void)_updateSeparatorAlpha;
- (void)_updateBackdropGroupName;
- (void)_updateNotSecureWarningsVisibility;
- (void)_updateShowsSearchIndicator;
- (void)_updateSearchIndicator;
- (void)_updateTextMetrics;
- (void)_updateTextColor;
- (id)_URLTextColor;
- (id)_URLControlsColor;
- (id)_placeholderColor;
- (void)_adjustLabelRectForLeadingButtonWithDelay:(double)arg1;
- (void)_updateMediaCaptureMuteButton;
- (id)_mediaCaptureMuteButtonColor;
- (void)_updateReaderButtonSelected;
- (void)_updateReaderButtonTint;
- (void)_updateReaderButtonAndAvailabilityTextVisibility;
- (void)_updateReaderButtonVisibilityAnimated:(_Bool)arg1 showAvailabilityText:(_Bool)arg2 adjustURLLabels:(_Bool)arg3;
- (void)_hideReaderAvailabilityLabelAnimated:(_Bool)arg1;
- (void)_hideReaderAvailabilityLabelNow;
- (void)_hideReaderAvailabilityLabelSoon;
- (void)_cancelDelayedReaderAvailabilityAnimation;
- (void)_updateLockIconHasEVCertificateTint;
- (void)_updateShowsLockIcon;
- (void)_updateLockViewIfNeeded;
- (void)_updateActiveURLLabelAccessory;
@property(readonly, nonatomic) struct CGRect URLOutlineFrameInNavigationBarSpace;
- (void)setExpanded:(_Bool)arg1 textFieldSelectionRange:(struct _NSRange)arg2;
- (void)_updateToolbarAndCancelButtonAlpha;
- (void)_updateFakeViews;
- (id)_attributedStringNotSecureAnnotation;
- (void)_updateText;
- (id)_expandedURLLabelParagraphStyle;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_hitTestCandidateViews;
- (void)clearEphemeralUI;
- (void)layoutSubviews;
- (double)_textFieldTopMargin;
- (void)_updateTextFieldFrame;
- (double)_minimumXForLabelOfWidth:(double)arg1 centeredInOutlineOfWidth:(double)arg2 leftAlignedToMinimumX:(double)arg3 maximumX:(double)arg4;
- (void)_updateBackdropFrame;
- (id)_viewToInsertProgressBarIn;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (void)tintColorDidChange;
- (void)_updateProgressView;
- (id)_navigationBarTrailingButtonWithType:(long long)arg1;
- (void)_updateNavigationBarTrailingButtonType;
- (long long)_inferredNavigationBarTrailingButtonType;
- (void)_updateNavigationBarTrailingButtonsAlpha;
- (void)_updateNavigationBarTrailingButtonsVisibility;
- (long long)_preferredLeadingButtonType;
- (void)_updateNavigationBarLeadingButtonsAlpha;
- (void)_updateNavigationBarLeadingButtonsVisibility;
- (void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic, getter=_controlsAlpha) double controlsAlpha;
- (double)_squishTransformFactor;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_mediaCaptureMuteButtonTapped:(id)arg1;
- (void)_readerButtonTapped:(id)arg1;
- (void)_URLTapped:(id)arg1;
- (void)_compressedBarTapped;
- (void)_readerAppearanceButtonPressed;
- (void)_stopButtonPressed;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_readerButtonLongPressed:(id)arg1;
- (void)_stopButtonLongPressed:(id)arg1;
- (void)_reloadButtonLongPressed:(id)arg1;
- (void)_reloadButtonPressed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputMode:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_barMetricsDidChange;
- (void)_updateURLOutlineCornerRadius;
- (void)_updateProgressViewCornerRadius;
- (id)_URLLabelFont;
- (void)_updateFonts;
- (id)readerAppearanceButton;
@property(nonatomic) _Bool hasToolbar;
- (double)_editingScaleFactor;
- (id)_editingLabelFont;
- (id)_fadeOutImageWithSize:(struct CGSize)arg1 opaquePoint:(struct CGPoint)arg2 transparentPoint:(struct CGPoint)arg3 leftCapWidth:(double)arg4 topCapWidth:(double)arg5;
- (id)_dimmingButtonWithAction:(SEL)arg1;
- (id)_newNavigationButtonWithImage:(id)arg1 insets:(struct UIEdgeInsets)arg2 action:(SEL)arg3;
- (double)_customButtonHorizontalPadding;
- (double)_URLFieldHorizontalMargin;
@property(readonly, nonatomic) double visualHeight;
- (void)_updateBarTintColorMetrics;
- (id)_notSecureWarningRed;
- (void)_updateBackdropStyle;
- (_Bool)_shouldUpdateBackdropStyleForTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (id)_backdropInputSettings;
@property(readonly, nonatomic) double dismissButtonPadding;
@property(readonly, nonatomic) struct CGSize dismissButtonSize;
- (void)setDismissButtonHidden:(_Bool)arg1;
- (void)setDismissButtonStyle:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isShowingPreferredControlsTintColor;
- (_Bool)_shouldShowPreferredBarTintColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

