//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;
@protocol OS_dispatch_queue;

@interface PXRecentRecipientSuggester : NSObject
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    CNContactStore *_contactStore;
    unsigned long long _maxNumberOfPeopleSuggested;
    long long _modelType;
}

@property(nonatomic) long long modelType; // @synthesize modelType=_modelType;
@property(nonatomic) unsigned long long maxNumberOfPeopleSuggested; // @synthesize maxNumberOfPeopleSuggested=_maxNumberOfPeopleSuggested;
- (void).cxx_destruct;
- (void)requestRecipientSuggestionsWithResultHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
