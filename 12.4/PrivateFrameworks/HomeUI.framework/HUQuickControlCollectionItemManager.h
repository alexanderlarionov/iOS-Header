//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem, HFItemProvider;
@protocol NSCopying;

@interface HUQuickControlCollectionItemManager : HFItemManager
{
    HFItemProvider *_gridItemProvider;
    HFItem<NSCopying> *_supplementaryItem;
    CDUnknownBlockType _gridItemProviderCreator;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType gridItemProviderCreator; // @synthesize gridItemProviderCreator=_gridItemProviderCreator;
@property(readonly, copy, nonatomic) HFItem<NSCopying> *supplementaryItem; // @synthesize supplementaryItem=_supplementaryItem;
@property(retain, nonatomic) HFItemProvider *gridItemProvider; // @synthesize gridItemProvider=_gridItemProvider;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (_Bool)isGridItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 gridItemProviderCreator:(CDUnknownBlockType)arg2 supplementaryItem:(id)arg3;

@end

