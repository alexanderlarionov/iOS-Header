//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchQuery, NSArray, NSString;
@protocol CKSearchControllerDelegate;

@interface CKSearchController : NSObject
{
    _Bool _suppressAvatars;
    _Bool _queryRunning;
    id <CKSearchControllerDelegate> _delegate;
    NSString *_currentSearchText;
    unsigned long long _mode;
    CSSearchQuery *_query;
    CDUnknownBlockType _queryFoundItemHandler;
    CDUnknownBlockType _queryCompletionHandler;
    unsigned long long _sectionIndex;
    NSArray *_results;
}

+ (long long)orthogonalScrollingBehavior;
+ (Class)cellClass;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (_Bool)previewControllerPresentsModally;
+ (_Bool)supportsMenuInteraction;
+ (_Bool)supportsQuicklook;
+ (_Bool)useRecencyRankedSearchForMode:(unsigned long long)arg1;
@property(nonatomic) _Bool queryRunning; // @synthesize queryRunning=_queryRunning;
@property(nonatomic) _Bool suppressAvatars; // @synthesize suppressAvatars=_suppressAvatars;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType queryFoundItemHandler; // @synthesize queryFoundItemHandler=_queryFoundItemHandler;
@property(retain, nonatomic) CSSearchQuery *query; // @synthesize query=_query;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(nonatomic) __weak id <CKSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)handleSelectionForResult:(id)arg1;
- (id)_activityItemProviderForResult:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (id)_additionalMenuActionsForResult:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)menuActionsForResult:(id)arg1 atRect:(struct CGRect)arg2;
- (id)queryResultsForItems:(id)arg1;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (void)searchEnded;
- (void)cancelCurrentSearch;
- (_Bool)_currentModeIsDetails;
- (id)_queryContextWithText:(id)arg1;
- (id)_queryStringWithText:(id)arg1;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (unsigned long long)layoutWidth;
- (unsigned long long)queryTypeForSearchText:(id)arg1;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (Class)footerClass;
- (Class)headerOverrideClass;
- (_Bool)wantsFooterSection;
- (_Bool)wantsHeaderSection;
- (struct NSDirectionalEdgeInsets)additionalGroupInsets;
- (double)interGroupSpacing;
- (id)initWithSectionIndex:(unsigned long long)arg1;
- (_Bool)shouldStartMenuInteractionForResult:(id)arg1;
- (id)rankingQueriesWithText:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)zkwFilterQueries;
- (id)filterQueries;
@property(readonly, nonatomic) _Bool hasMoreResults;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)fetchAttributes;
- (id)queryAttributesForText:(id)arg1;

@end
