//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class NAFuture, NSError;
@protocol HFMediaProfileContainer;

@protocol HFMediaValueSource <NSObject>
@property(readonly, nonatomic) NSError *cachedPlaybackStateWriteError;
@property(readonly, nonatomic) _Bool hasPendingWrites;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer;
- (NAFuture *)writePlaybackState:(long long)arg1;
- (long long)lastPlaybackStateForProfile;
@end

