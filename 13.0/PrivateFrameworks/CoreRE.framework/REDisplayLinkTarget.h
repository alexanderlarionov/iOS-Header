//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface REDisplayLinkTarget : NSObject
{
    struct DisplayLinkClock *_clock;
}

- (void)updateOnQueue;
- (void)update;
- (id)initWithClock:(struct DisplayLinkClock *)arg1;

@end

