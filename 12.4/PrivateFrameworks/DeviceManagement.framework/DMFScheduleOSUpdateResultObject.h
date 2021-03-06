//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSError, NSString;

@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject
{
    unsigned long long _action;
    NSString *_productKey;
    NSError *_error;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *productKey; // @synthesize productKey=_productKey;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(unsigned long long)arg1 productKey:(id)arg2 error:(id)arg3;

@end

