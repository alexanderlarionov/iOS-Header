//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideoPlaybackProgressObserving <NSObject>
@property(copy, nonatomic, setter=onReset:) CDUnknownBlockType resetBlock;
@property(copy, nonatomic, setter=onProgressChanged:) CDUnknownBlockType progressChangedBlock;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double time;
@end
