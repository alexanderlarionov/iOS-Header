//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/SFTrustPolicy.h>

#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@interface SFX509TrustPolicy : SFTrustPolicy <NSSecureCoding>
{
    id _x509TrustPolicyInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
