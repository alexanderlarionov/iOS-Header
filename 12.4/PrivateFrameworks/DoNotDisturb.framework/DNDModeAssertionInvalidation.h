//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDModeAssertion;

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding>
{
    DNDModeAssertion *_assertion;
    unsigned long long _reason;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, copy, nonatomic) DNDModeAssertion *assertion; // @synthesize assertion=_assertion;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 reason:(unsigned long long)arg2;

@end

