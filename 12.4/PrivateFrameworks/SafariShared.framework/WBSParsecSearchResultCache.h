//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface WBSParsecSearchResultCache : NSObject
{
    NSMutableDictionary *_resultSetCache;
    NSMutableDictionary *_resultSetsByPrefix;
    unsigned long long _cachedQueriesLimit;
}

- (void).cxx_destruct;
- (_Bool)_resultSet:(id)arg1 isMatchForQuery:(id)arg2;
- (_Bool)_shouldCacheResultSetForQueryMatching:(id)arg1;
@property(readonly, nonatomic) NSArray *allCachedQueries;
- (id)resultSetWithQuery:(id)arg1;
- (id)bestResultSetForQuery:(id)arg1;
- (void)cacheResultSet:(id)arg1;
- (void)cacheResultSetsFromSearchResponse:(id)arg1;
- (id)initWithCachedQueriesLimit:(unsigned long long)arg1;

@end
