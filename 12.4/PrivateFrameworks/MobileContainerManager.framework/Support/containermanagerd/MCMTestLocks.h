//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MCMTestLocks : NSObject
{
    long long _lockCount[6];
    NSObject<OS_dispatch_queue> *_lockQueue[6];
    NSObject<OS_dispatch_semaphore> *_lockSemaphore[6];
    _Bool _enabled;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)_stateQueue_releaseLock:(unsigned long long)arg1;
- (void)_stateQueue_acquireLock:(unsigned long long)arg1;
- (void)_stateQueue_updateCountForLock:(unsigned long long)arg1 byCount:(long long)arg2;
- (void)waitOnLock:(unsigned long long)arg1;
- (void)releaseAllLocks;
- (void)releaseLock:(unsigned long long)arg1;
- (void)acquireLock:(unsigned long long)arg1;
- (id)init;

@end
