//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIMultiSelectInteractionDelegate-Protocol.h>

@class NSString, UICollectionView, UIMultiSelectInteraction, UIMultiSelectInteractionState;

__attribute__((visibility("hidden")))
@interface _UICollectionViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate>
{
    unsigned long long _computedAxisConstraint;
    UICollectionView *_collectionView;
    UIMultiSelectInteraction *_multiSelectInteraction;
    UIMultiSelectInteractionState *_selectionState;
}

@property(retain, nonatomic) UIMultiSelectInteractionState *selectionState; // @synthesize selectionState=_selectionState;
@property(retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // @synthesize multiSelectInteraction=_multiSelectInteraction;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;
- (_Bool)isInMultiSelectMode;
- (_Bool)supportsMultiSelectInteraction:(id)arg1;
- (_Bool)_isPointInsideEditControl:(struct CGPoint)arg1;
- (_Bool)_isUsingTableViewLayout;
- (id)_collectionViewDelegate;
- (void)selectedIndexPathsChanged:(id)arg1;
- (void)_updateSelectedIndexPaths:(id)arg1;
- (void)_deselectIndexPaths:(id)arg1;
- (void)_selectIndexPaths:(id)arg1;
- (void)_extendSelectionToPoint:(struct CGPoint)arg1;
- (_Bool)_point:(struct CGPoint)arg1 liesBeyondFrame:(struct CGRect)arg2 inDirection:(double)arg3;
- (id)_antecedentIndexPathsForLayoutAttributes:(id)arg1 inDirection:(double)arg2;
- (unsigned long long)axisConstraint;
- (void)uninstallFromCollectionView;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
