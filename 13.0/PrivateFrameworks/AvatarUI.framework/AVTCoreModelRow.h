//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTCoreModelRowOptions, NSOrderedSet, NSString;

@interface AVTCoreModelRow : NSObject
{
    NSString *_identifier;
    NSString *_title;
    AVTCoreModelRowOptions *_options;
    NSOrderedSet *_representedTags;
}

@property(readonly, copy, nonatomic) NSOrderedSet *representedTags; // @synthesize representedTags=_representedTags;
@property(readonly, nonatomic) AVTCoreModelRowOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 options:(id)arg3 identifier:(id)arg4;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 options:(id)arg3;

@end

