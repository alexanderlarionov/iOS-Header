//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface MCDShadowImageView : UIView
{
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (void)setupConstraints;
- (void)setupEffects;
- (void)setContentMode:(long long)arg1;
- (long long)contentMode;
- (id)initWithFrame:(struct CGRect)arg1;

@end
