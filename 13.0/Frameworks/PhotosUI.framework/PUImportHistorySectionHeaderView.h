//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIButton, UILabel, UITraitCollection, UIVisualEffectView;
@protocol PUImportHistorySectionHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface PUImportHistorySectionHeaderView : UICollectionReusableView
{
    struct {
        unsigned int headerViewDidPressActionButton:1;
    } _delegateFlags;
    _Bool _showsActionButton;
    _Bool _actionButtonEnabled;
    _Bool _shouldBlurBackground;
    _Bool _supportsMultipleLinesInCompactLayout;
    _Bool _inLayoutTransition;
    id <PUImportHistorySectionHeaderViewDelegate> _delegate;
    NSString *_actionText;
    NSString *_backdropViewGroupName;
    UILabel *_primaryLabel;
    UILabel *_spacerLabel;
    UILabel *_secondaryLabel;
    UIButton *_actionButton;
    UIVisualEffectView *_visualEffectView;
    UITraitCollection *_selfSizingTraits;
    struct PXSimpleIndexPath _sectionIndexPath;
    struct UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic) UITraitCollection *selfSizingTraits; // @synthesize selfSizingTraits=_selfSizingTraits;
@property(nonatomic) _Bool inLayoutTransition; // @synthesize inLayoutTransition=_inLayoutTransition;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *spacerLabel; // @synthesize spacerLabel=_spacerLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) _Bool supportsMultipleLinesInCompactLayout; // @synthesize supportsMultipleLinesInCompactLayout=_supportsMultipleLinesInCompactLayout;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(copy, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
@property(nonatomic) _Bool shouldBlurBackground; // @synthesize shouldBlurBackground=_shouldBlurBackground;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(nonatomic) _Bool actionButtonEnabled; // @synthesize actionButtonEnabled=_actionButtonEnabled;
@property(nonatomic) _Bool showsActionButton; // @synthesize showsActionButton=_showsActionButton;
@property(nonatomic) struct PXSimpleIndexPath sectionIndexPath; // @synthesize sectionIndexPath=_sectionIndexPath;
@property(nonatomic) __weak id <PUImportHistorySectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long layoutMode;
- (void)_updateBackdropViewGroupName;
- (void)_updateBackground;
- (void)_updateSpacerLabelHiddenState;
- (void)_updateLabelLineNumbers;
- (void)_updateLabelFonts;
- (void)_updateWithCurrentTraits;
- (void)_actionButtonPressed:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (_Bool)_disableRasterizeInAnimations;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)layoutSubviews;
- (double)heightForSizeClass:(long long)arg1 width:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (void)_updateActionButtonText;
- (void)_updateActionButtonEnabledAnimated:(_Bool)arg1;
- (void)setActionButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateActionButtonVisibility;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primaryText;
- (void)applyLayoutAttributes:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollection;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
