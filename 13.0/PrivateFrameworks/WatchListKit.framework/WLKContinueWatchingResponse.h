//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WLKContinueWatchingCollection;

@interface WLKContinueWatchingResponse : NSObject
{
    NSArray *_items;
    WLKContinueWatchingCollection *_featured;
}

@property(readonly, copy, nonatomic) WLKContinueWatchingCollection *featured; // @synthesize featured=_featured;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

