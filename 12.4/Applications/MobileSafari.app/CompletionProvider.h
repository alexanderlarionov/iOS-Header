//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol CompletionProviderDelegate;

@interface CompletionProvider : NSObject
{
    NSMutableDictionary *_completionsByString;
    NSMutableArray *_completedStringsInPruneOrder;
    _Bool _failing;
    _Bool _inCompletionsForString;
    id <CompletionProviderDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isFailing) _Bool failing; // @synthesize failing=_failing;
@property(nonatomic) __weak id <CompletionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)maximumCachedCompletionCount;
- (void)fail;
- (void)setCompletions:(id)arg1 forString:(id)arg2;
- (void)clearCachedCompletions;
- (void)_pruneCachedCompletions;
- (void)setQueryToComplete:(id)arg1;
- (id)completionsForQuery:(id)arg1;
- (id)init;

@end

