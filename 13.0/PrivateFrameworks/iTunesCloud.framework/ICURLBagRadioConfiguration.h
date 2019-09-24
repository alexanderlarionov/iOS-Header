//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ICURLBagRadioConfiguration : NSObject
{
    NSDictionary *_bagRadioDictionary;
}

- (void).cxx_destruct;
- (id)urlForBagRadioKey:(id)arg1;
- (_Bool)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2;
@property(readonly, nonatomic) long long maxSupportedProtocolVersion;
@property(readonly, nonatomic) long long getTracksDPInfoKBSyncCount;
@property(readonly, copy, nonatomic) NSURL *baseURL;
- (id)initWithBagRadioDictionary:(id)arg1;

@end
