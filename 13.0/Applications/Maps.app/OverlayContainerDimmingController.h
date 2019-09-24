//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OverlayContainerDimmingBehaviour-Protocol.h"

@class DimmingBehaviour, NSMapTable;

__attribute__((visibility("hidden")))
@interface OverlayContainerDimmingController : NSObject <OverlayContainerDimmingBehaviour>
{
    DimmingBehaviour *_behaviour;
    NSMapTable *_customBehaviours;
}

@property(readonly, copy, nonatomic) NSMapTable *customBehaviours; // @synthesize customBehaviours=_customBehaviours;
@property(readonly, copy, nonatomic) DimmingBehaviour *behaviour; // @synthesize behaviour=_behaviour;
- (void).cxx_destruct;
- (id)_dimmingBehaviourForContainee:(id)arg1;
- (unsigned long long)overlayContainerLayoutForContaineeDimmingDismissal:(id)arg1;
- (double)overlayContainer:(id)arg1 dimmingPercentageForCurrentContaineeWithNewHeight:(double)arg2;
- (id)initWithDimmingBehaviour:(id)arg1 customBehaviours:(id)arg2;

@end
