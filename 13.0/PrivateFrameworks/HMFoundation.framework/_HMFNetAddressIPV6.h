//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFNetAddressInternal.h>

__attribute__((visibility("hidden")))
@interface _HMFNetAddressIPV6 : HMFNetAddressInternal
{
    struct sockaddr_in6 *_internal;
}

@property(readonly, nonatomic) struct sockaddr_in6 *internal; // @synthesize internal=_internal;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)addressString;
- (unsigned long long)addressFamily;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;
- (id)init;

@end
