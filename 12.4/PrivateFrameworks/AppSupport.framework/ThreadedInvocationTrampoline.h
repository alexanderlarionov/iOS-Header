//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupport/InvocationTrampoline.h>

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline
{
    NSThread *_thread;
    _Bool _immediateForMatchingThread;
}

- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(_Bool)arg3;

@end

