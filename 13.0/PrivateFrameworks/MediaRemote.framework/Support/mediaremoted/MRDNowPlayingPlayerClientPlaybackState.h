//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MRDNowPlayingPlayerClientPlaybackState : NSObject
{
    unsigned int _playbackState;
    NSDate *_date;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned int playbackState; // @synthesize playbackState=_playbackState;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPlaybackState:(unsigned int)arg1 date:(id)arg2;

@end
