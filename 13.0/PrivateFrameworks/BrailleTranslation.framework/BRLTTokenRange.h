//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BRLTTokenRange : NSObject
{
    long long _token;
    struct _NSRange _range;
}

@property(nonatomic) long long token; // @synthesize token=_token;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id)initWithRange:(struct _NSRange)arg1 token:(long long)arg2;

@end
