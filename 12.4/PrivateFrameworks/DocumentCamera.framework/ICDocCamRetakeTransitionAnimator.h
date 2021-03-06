//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentCamera/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSIndexPath, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface ICDocCamRetakeTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    UIImage *_retakeImage;
    NSIndexPath *_indexPath;
    double _duration;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *retakeImage; // @synthesize retakeImage=_retakeImage;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)makeUIImageFromCIImage:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithImage:(id)arg1 indexPath:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

