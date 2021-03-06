//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionViewDataSource-Protocol.h>
#import <UIKitCore/_UIDiffableDataSourceIdentifying-Protocol.h>

@class NSString, __UIDiffableDataSource;

@interface UICollectionViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UICollectionViewDataSource>
{
    __UIDiffableDataSource *_impl;
}

@property(retain, nonatomic) __UIDiffableDataSource *impl; // @synthesize impl=_impl;
- (void).cxx_destruct;
- (_Bool)_isDiffableDataSource;
- (void)_applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)initWithViewUpdatesSink:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applySnapshot:(id)arg1 animatingDifferences:(_Bool)arg2;
- (id)snapshot;
@property(copy, nonatomic) CDUnknownBlockType supplementaryViewProvider;
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 cellProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

