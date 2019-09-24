//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class MPPropertySet, NSString;

@protocol MCDNowPlayingDataSource <NSObject>
- (NSString *)requestLabel;
- (MPPropertySet *)queueItemProperties;
- (MPPropertySet *)playingItemProperties;

@optional
- (MPPropertySet *)queueSectionProperties;
@end
