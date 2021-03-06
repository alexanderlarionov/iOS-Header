//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMSetupAccessoryBrowsingRequest : NSObject <NSSecureCoding>
{
    NSArray *_filterCategories;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *filterCategories; // @synthesize filterCategories=_filterCategories;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFilterCategories:(id)arg1;
- (id)init;

@end

