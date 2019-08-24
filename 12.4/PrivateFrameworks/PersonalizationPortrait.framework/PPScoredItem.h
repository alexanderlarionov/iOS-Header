//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveSupport/_PASZonedObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSObject;
@protocol NSCopying><NSSecureCoding;

@interface PPScoredItem : _PASZonedObject <NSCopying, NSSecureCoding>
{
    NSObject<NSCopying><NSSecureCoding> *_item;
    double _score;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToScoredItem:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 score:(double)arg2;

@end
