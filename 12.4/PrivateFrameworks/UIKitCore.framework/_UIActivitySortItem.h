//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIActivity;

__attribute__((visibility("hidden")))
@interface _UIActivitySortItem : NSObject
{
    UIActivity *_activity;
    long long _group;
    id _secondarySortValue;
    id _tertiarySortValue;
}

+ (id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3 tertiarySortValue:(id)arg4;
+ (id)sortDescriptorForActivity:(id)arg1 withGroup:(long long)arg2 secondarySortValue:(id)arg3;
@property(readonly, nonatomic) id tertiarySortValue; // @synthesize tertiarySortValue=_tertiarySortValue;
@property(readonly, nonatomic) id secondarySortValue; // @synthesize secondarySortValue=_secondarySortValue;
@property(readonly, nonatomic) long long group; // @synthesize group=_group;
@property(readonly, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)debugDescription;

@end

