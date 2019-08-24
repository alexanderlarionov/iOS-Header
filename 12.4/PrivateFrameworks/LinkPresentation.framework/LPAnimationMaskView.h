//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface LPAnimationMaskView : UIView
{
    UIImage *_image;
    long long _animationOrigin;
    UIView *_imageView;
}

@property(nonatomic) long long animationOrigin; // @synthesize animationOrigin=_animationOrigin;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, retain, nonatomic) UIView *imageView;
- (id)init;

@end
