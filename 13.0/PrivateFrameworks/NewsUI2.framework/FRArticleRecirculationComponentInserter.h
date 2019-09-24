//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI2/SXComponentInserter-Protocol.h>

@class MISSING_TYPE;
@protocol SXComponentInsertionConditionEngine;

__attribute__((visibility("hidden")))
@interface FRArticleRecirculationComponentInserter : NSObject <SXComponentInserter>
{
    MISSING_TYPE *autoPlacementProvider;
    MISSING_TYPE *cellStyleProvider;
    MISSING_TYPE *insertionConditionProvider;
    MISSING_TYPE *cellStyle;
    MISSING_TYPE *componentTraits;
    MISSING_TYPE *conditionEngine;
    MISSING_TYPE *inserted;
}

- (void).cxx_destruct;
- (id)init;
- (void)componentInsertionCompleted;
- (id)componentInsertForMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (_Bool)validateMarker:(id)arg1 DOMObjectProvider:(id)arg2 layoutProvider:(id)arg3;
- (id)conditionsForDOMObjectProvider:(id)arg1;
@property(nonatomic, retain) id <SXComponentInsertionConditionEngine> conditionEngine; // @synthesize conditionEngine;
@property(nonatomic) unsigned long long componentTraits; // @synthesize componentTraits;

@end
