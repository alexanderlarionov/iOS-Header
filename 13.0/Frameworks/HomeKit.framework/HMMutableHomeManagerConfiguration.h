//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMHomeManagerConfiguration.h>

@class HMFLocationAuthorization, NSOperationQueue;
@protocol HMFLocking;

@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration
{
    id <HMFLocking> _lock;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain) HMFLocationAuthorization *locationAuthorization;
@property(retain) NSOperationQueue *delegateQueue;
@property(getter=isDiscretionary) _Bool discretionary;
@property unsigned long long options;
@property unsigned long long cachePolicy;
- (_Bool)shouldConnect;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;

@end
