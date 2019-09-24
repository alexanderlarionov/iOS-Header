//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDragInteractionDriver.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver
{
    NSSet *_touches;
    CDUnknownBlockType _itemIterator;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _liftCompletion;
}

- (void).cxx_destruct;
- (void)didTransitionToInflightState;
- (void)didTransitionToInactiveState;
- (void)didTransitionToBeginState;
- (void)beginDragWithTouches:(id)arg1 itemIterator:(CDUnknownBlockType)arg2 beginningSessionHandler:(CDUnknownBlockType)arg3;
- (void)beginLiftAtLocation:(struct CGPoint)arg1 useDefaultLiftAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isLifted;
- (_Bool)canBeginLiftAtLocation:(struct CGPoint)arg1;

@end
