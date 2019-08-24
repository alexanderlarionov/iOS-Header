//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIAppDocumentUpdateContext-Protocol.h>

@class IKUpdateServiceRequest, NSArray, NSMutableOrderedSet, NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentAutomaticUpdateContext : NSObject <VUIAppDocumentUpdateContext>
{
    IKUpdateServiceRequest *_currentUpdateRequest;
    NSArray *_receivedEvents;
    NSMutableOrderedSet *_remainingViewElements;
}

@property(retain, nonatomic) NSMutableOrderedSet *remainingViewElements; // @synthesize remainingViewElements=_remainingViewElements;
@property(copy, nonatomic) NSArray *receivedEvents; // @synthesize receivedEvents=_receivedEvents;
@property(retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest; // @synthesize currentUpdateRequest=_currentUpdateRequest;
- (void).cxx_destruct;
- (id)_documentUpdateRequestForViewElement:(id)arg1 appContext:(id)arg2 documentRef:(id)arg3;
- (void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2;
- (void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2;
- (id)initWithEvents:(id)arg1 viewElements:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
