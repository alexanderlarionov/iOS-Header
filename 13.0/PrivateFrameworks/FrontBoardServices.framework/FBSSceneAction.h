//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BSAction.h"

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction
{
    FBSScene *_scene;
    FBSSerialQueue *_callOutQueue;
}

@property(retain, nonatomic) FBSSerialQueue *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) FBSScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;

@end
