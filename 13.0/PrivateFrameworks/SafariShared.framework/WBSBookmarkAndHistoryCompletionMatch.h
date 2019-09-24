//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSURLCompletionMatch.h>

@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch
{
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> _match;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float weight;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
@property(readonly, nonatomic) id <WBSURLCompletionMatchData> data;
- (id)initWithBookmarkAndHistoryCompletionMatch:(Ref_a2762e75 *)arg1 userInput:(id)arg2 forQueryID:(long long)arg3;

@end
