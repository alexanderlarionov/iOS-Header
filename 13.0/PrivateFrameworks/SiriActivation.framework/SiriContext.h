//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@class SiriContextOverride;

@interface SiriContext : NSObject <NSCopying, NSSecureCoding>
{
    SiriContextOverride *_contextOverride;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SiriContextOverride *contextOverride; // @synthesize contextOverride=_contextOverride;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithContextOverride:(id)arg1;

@end
