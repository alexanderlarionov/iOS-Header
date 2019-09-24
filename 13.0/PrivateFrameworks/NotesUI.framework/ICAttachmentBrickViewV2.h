//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NotesUI/ICAttachmentBrickAudioPlayerViewV2Delegate-Protocol.h>

@class ICAttachment, ICAttachmentBrickFrostedView, ICAttachmentBrickTextViewV2, ICSearchResult, NSLayoutConstraint, NSRegularExpression, NSString, UIImage;

@interface ICAttachmentBrickViewV2 : UIView <ICAttachmentBrickAudioPlayerViewV2Delegate>
{
    _Bool _forceDefaultBrickSize;
    _Bool _forManualRendering;
    _Bool _fullHeightText;
    _Bool _showAsFileIcon;
    _Bool _frostedViewActive;
    _Bool _highlightUpdateScheduled;
    _Bool _usingConstraintsForAXLargerTextSizes;
    _Bool _layerIsInvertedForAXInvertColors;
    _Bool _vibrant;
    _Bool _disableImageUpdates;
    _Bool _disableTextUpdates;
    _Bool _disableVibrancy;
    ICAttachment *_attachment;
    ICSearchResult *_searchResult;
    struct UIView *_accessoryView;
    NSRegularExpression *_highlightPatternRegex;
    unsigned long long _defaultBrickSize;
    unsigned long long _brickSize;
    struct UIView *_backgroundView;
    ICAttachmentBrickFrostedView *_frostedView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_textViewTopConstraint;
    NSLayoutConstraint *_textViewTrailingConstraint;
    NSLayoutConstraint *_accessoryViewWidthConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewVerticalConstraint;
    NSLayoutConstraint *_accessoryViewTrailingConstraint;
    long long _fileSizeCache;
    NSString *_fileSizeStringCache;
    ICAttachmentBrickTextViewV2 *_textView;
    unsigned long long _brickType;
    unsigned long long _accessoryType;
    unsigned long long _imageScaling;
    struct UIImage *_image;
    struct CGSize _imageSize;
}

+ (struct CGSize)imageSizeForBrickSize:(unsigned long long)arg1;
+ (id)audioAttachmentDetail1StringWithDuration:(double)arg1 attachment:(id)arg2 brick:(id)arg3;
+ (id)brickInfoForAttachment:(id)arg1 brickSize:(unsigned long long)arg2 brick:(id)arg3;
+ (double)clampAccessoryViewScale:(double)arg1 forHorizontalSizeClass:(long long)arg2;
+ (struct CGSize)brickSizeWithSize:(unsigned long long)arg1;
+ (unsigned long long)maximumBrickSizeForAttachment:(id)arg1 defaultSize:(unsigned long long)arg2;
+ (unsigned long long)brickTypeForAttachment:(id)arg1;
@property(nonatomic) _Bool disableVibrancy; // @synthesize disableVibrancy=_disableVibrancy;
@property(nonatomic) _Bool disableTextUpdates; // @synthesize disableTextUpdates=_disableTextUpdates;
@property(nonatomic) _Bool disableImageUpdates; // @synthesize disableImageUpdates=_disableImageUpdates;
@property(nonatomic, getter=isVibrant) _Bool vibrant; // @synthesize vibrant=_vibrant;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) unsigned long long brickType; // @synthesize brickType=_brickType;
@property(retain, nonatomic) ICAttachmentBrickTextViewV2 *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool layerIsInvertedForAXInvertColors; // @synthesize layerIsInvertedForAXInvertColors=_layerIsInvertedForAXInvertColors;
@property(nonatomic) _Bool usingConstraintsForAXLargerTextSizes; // @synthesize usingConstraintsForAXLargerTextSizes=_usingConstraintsForAXLargerTextSizes;
@property(nonatomic) _Bool highlightUpdateScheduled; // @synthesize highlightUpdateScheduled=_highlightUpdateScheduled;
@property(copy, nonatomic) NSString *fileSizeStringCache; // @synthesize fileSizeStringCache=_fileSizeStringCache;
@property(nonatomic) long long fileSizeCache; // @synthesize fileSizeCache=_fileSizeCache;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewTrailingConstraint; // @synthesize accessoryViewTrailingConstraint=_accessoryViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewVerticalConstraint; // @synthesize accessoryViewVerticalConstraint=_accessoryViewVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // @synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint; // @synthesize textViewTrailingConstraint=_textViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewTopConstraint; // @synthesize textViewTopConstraint=_textViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic, getter=isFrostedViewActive) _Bool frostedViewActive; // @synthesize frostedViewActive=_frostedViewActive;
@property(retain, nonatomic) ICAttachmentBrickFrostedView *frostedView; // @synthesize frostedView=_frostedView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(nonatomic, getter=isFullHeightText) _Bool fullHeightText; // @synthesize fullHeightText=_fullHeightText;
@property(nonatomic) unsigned long long brickSize; // @synthesize brickSize=_brickSize;
@property(nonatomic) _Bool forManualRendering; // @synthesize forManualRendering=_forManualRendering;
@property(nonatomic) unsigned long long defaultBrickSize; // @synthesize defaultBrickSize=_defaultBrickSize;
@property(nonatomic) _Bool forceDefaultBrickSize; // @synthesize forceDefaultBrickSize=_forceDefaultBrickSize;
@property(retain, nonatomic) NSRegularExpression *highlightPatternRegex; // @synthesize highlightPatternRegex=_highlightPatternRegex;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (_Bool)accessibilityIgnoresInvertColors;
- (void)updateAccessoryViewForAccessibilityInvertColors;
@property(readonly, nonatomic) NSString *typeDescriptionForAccessibility;
- (void)setContentsScale:(double)arg1;
- (void)updateSearchHighlightingForAttachmentBrickLabel:(id)arg1;
- (void)updateSearchHighlighting;
- (void)updateSearchHighlightingIfNecessary;
- (void)updateAccessoryViewShadow;
- (id)createTextViewTrailingConstraint;
- (double)accessoryViewTopMarginWithAccessorySize:(struct CGSize)arg1;
- (struct CGSize)computedAccessorySize;
- (struct CGSize)computedSize;
- (double)layoutScaling;
- (void)scaleDidChange;
- (double)clampAccessoryViewScale:(double)arg1;
- (void)updateFileSizeCacheStringIfNeeded;
- (void)updateImage;
- (void)clearAccessoryView;
- (void)updateAccessoryView;
- (void)updateText;
- (void)updateForAppearanceChange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (void)layoutAccessoryTypeMapMarker;
- (void)layoutBackgroundView;
- (void)updateBackgroundImage;
- (void)updateStyle;
- (void)updateBrickType;
- (void)updateContentFromAttachment;
- (void)initializeBasicViews;
- (id)thumbnailCache;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (struct UIColor *)backgroundColorForCurrentVibrancy;
- (void)updateVibrancyIfNecessary;
- (void)audioPlayerViewStopped:(id)arg1;
- (void)audioPlayerView:(id)arg1 updateTime:(double)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)accentColorDidChange:(id)arg1;
- (void)locationContextAuthorizationStatusDidChangeNotification:(id)arg1;
- (void)mediaDidLoadNotification:(id)arg1;
- (void)attachmentPreviewImagesDidUpdateNotification:(id)arg1;
- (void)attachmentDidLoadNotification:(id)arg1;
- (id)quickLookTransitionView;
- (void)contentSizeCategoryDidChange;
- (void)prepareForReuse;
- (void)prepareForPrinting;
- (void)setAttachment:(id)arg1 forSearchResult:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 defaultBrickSize:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityValue;
- (id)accessibilityLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
