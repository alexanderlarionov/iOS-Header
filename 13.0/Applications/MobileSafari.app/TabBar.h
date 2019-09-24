//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TabCollectionView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, ReorderingAutoscroller, TabBarStyle, UIDragInteraction, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIVisualEffectView;
@protocol TabBarDelegate;

@interface TabBar : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, TabCollectionView>
{
    NSMutableArray *_tabBarItemViewReuseStack;
    UIScrollView *_scrollView;
    UITapGestureRecognizer *_tapRecognizer;
    UIView *_leadingContainer;
    UIView *_trailingContainer;
    UIVisualEffectView *_leadingVibrancyEffectView;
    UIVisualEffectView *_trailingVibrancyEffectView;
    UIPanGestureRecognizer *_reorderRecognizer;
    UIDragInteraction *_dragInteraction;
    _Bool _hidesTitles;
    id <TabBarDelegate> _delegate;
    NSArray *_items;
    unsigned long long _tintStyle;
    TabBarStyle *_barStyle;
    double _minimumTabWidth;
}

+ (double)defaultHeight;
@property(readonly, nonatomic) double minimumTabWidth; // @synthesize minimumTabWidth=_minimumTabWidth;
@property(nonatomic) _Bool hidesTitles; // @synthesize hidesTitles=_hidesTitles;
@property(readonly, nonatomic) TabBarStyle *barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) unsigned long long tintStyle; // @synthesize tintStyle=_tintStyle;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <TabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_relinquishReusableTabBarItemView:(id)arg1;
- (id)_requestReusableTabBarItemView;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)dealloc;
- (unsigned long long)_maximumTruncationIndexForTitle:(id)arg1;
- (void)_reorder:(id)arg1;
- (void)addInteraction:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_tap:(id)arg1;
- (id)_itemForTouch:(id)arg1;
- (void)_activateItemIfNeeded:(id)arg1;
- (void)activateItem:(id)arg1;
- (id)_itemAtLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)_layoutIndexes:(id)arg1 ofItems:(id)arg2;
- (void)_layoutContainers;
- (unsigned long long)_effectiveIndexForIndex:(unsigned long long)arg1 ofItems:(id)arg2;
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1;
- (double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1;
- (double)_horizontalPositionForItemAtIndex:(unsigned long long)arg1 withSlowingFactor:(double)arg2;
- (void)_scrollTowardItem:(id)arg1 byAmount:(double)arg2;
@property(readonly, nonatomic) double itemWidth;
- (id)itemAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool supportsDropTransitionToItemView;
@property(readonly, nonatomic) _Bool supportsSystemDrag;
- (id)targetedDragPreviewForLiftingItem:(id)arg1;
- (id)targetItemForDropAtPoint:(struct CGPoint)arg1;
- (id)viewForItem:(id)arg1;
- (struct CGRect)frameForItem:(id)arg1;
- (void)scrollToItem:(id)arg1 animated:(_Bool)arg2;
- (void)_scrollToItemIfNeeded:(id)arg1;
- (_Bool)_isScrollable;
- (double)_scrollableWidth;
- (double)_itemWidth;
- (void)_layoutItem:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3 itemCount:(unsigned long long)arg4 beforeActiveItem:(_Bool)arg5;
- (void)_toggleMediaCaptureMutedForItem:(id)arg1;
- (void)_itemDidPressCloseButton:(id)arg1;
- (void)_updateBackground;
- (void)_updateReorderRecognizer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
@property(readonly) Class superclass;

@end
