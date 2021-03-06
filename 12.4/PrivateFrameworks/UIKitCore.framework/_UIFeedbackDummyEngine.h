//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIFeedbackEngine.h>

#import <UIKitCore/_UIFeedbackPlayer-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer>
{
    CDUnknownBlockType _invalidationBlock;
}

+ (_Bool)_supportsPlayingFeedback:(id)arg1;
+ (id)sharedEngine;
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
- (void).cxx_destruct;
- (id)_stats_key;
- (void)_stopFeedback:(id)arg1;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;

@end

