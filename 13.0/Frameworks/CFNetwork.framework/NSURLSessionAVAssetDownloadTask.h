//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSURL;

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask
{
    unsigned long long _AVAssetDownloadToken;
}

@property(readonly) unsigned long long AVAssetDownloadToken; // @synthesize AVAssetDownloadToken=_AVAssetDownloadToken;
@property(readonly, copy) NSURL *destinationURL; // @dynamic destinationURL;
- (void)setDestinationURL:(id)arg1;
@property(readonly, copy) NSURL *URL; // @dynamic URL;
- (void)setURL:(id)arg1;

@end

