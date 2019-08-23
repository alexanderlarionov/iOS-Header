//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBViewMorphAnimatorDataSource-Protocol.h"

@class NSString;

@interface SBPIPMorphAnimatorDataSource : NSObject <SBViewMorphAnimatorDataSource>
{
    int _targetProcessIdentifier;
}

@property(readonly, nonatomic) int targetProcessIdentifier; // @synthesize targetProcessIdentifier=_targetProcessIdentifier;
- (double)targetFinalCornerRadiusForAnimator:(id)arg1;
- (struct CGRect)targetFinalFrameForAnimator:(id)arg1;
- (struct CGRect)sourceContentFrameForAnimator:(id)arg1;
- (id)init;
- (id)initWithTargetProcessIdentifier:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
