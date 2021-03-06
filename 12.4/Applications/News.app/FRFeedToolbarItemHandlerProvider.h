//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCSubscriptionObserving-Protocol.h"
#import "TUWindowToolbarItemHandlerProviding-Protocol.h"

@class FCFeedDescriptor, FCSubscriptionController, NSString, UINavigationController;
@protocol FRToolbarButtonImageNameProviderType;

@interface FRFeedToolbarItemHandlerProvider : NSObject <FCSubscriptionObserving, TUWindowToolbarItemHandlerProviding>
{
    FCFeedDescriptor *_feed;
    FCSubscriptionController *_subscriptionController;
    UINavigationController *_navigationController;
    id <FRToolbarButtonImageNameProviderType> _buttonImageNameProvider;
}

@property(readonly, nonatomic) id <FRToolbarButtonImageNameProviderType> buttonImageNameProvider; // @synthesize buttonImageNameProvider=_buttonImageNameProvider;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
- (void).cxx_destruct;
- (id)shareHandler;
- (id)dislikeHandler;
- (id)likeHandler;
- (id)sideBarHandler;
- (id)backItemHandler;
- (id)toolbarItemHandlers;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7;
- (void)dealloc;
- (id)initWithFeed:(id)arg1 subscriptionController:(id)arg2 navigationController:(id)arg3 buttonImageNameProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

