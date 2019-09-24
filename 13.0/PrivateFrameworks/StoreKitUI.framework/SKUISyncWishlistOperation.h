//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, SKUIClientContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUISyncWishlistOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _resultBlock;
}

- (void).cxx_destruct;
- (void)_sendLocalChangesForWishlist:(id)arg1;
- (_Bool)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)_loadRemoteItemsForWishlist:(id)arg1 didChange:(_Bool *)arg2 error:(id *)arg3;
- (void)main;
@property(copy) CDUnknownBlockType resultBlock;
- (id)initWithClientContext:(id)arg1;
- (id)init;

@end
