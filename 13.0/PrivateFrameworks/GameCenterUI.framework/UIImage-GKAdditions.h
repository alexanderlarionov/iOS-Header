//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (GKAdditions)
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)_gkImageWithRawData:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 rowBytes:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5;
+ (id)_gkImageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)_gkHostImageWithBundleIdentifier:(id)arg1 imageName:(id)arg2;
- (id)_gkImageByTintingWithColor:(id)arg1;
- (id)_gkImageByAddingAlpha;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize)arg1 scale:(double)arg2 padColor:(id)arg3;
- (id)_gkImageByScalingAndCroppingToSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)_gkReadAtSize:(struct CGSize)arg1 ARGBHostEndianBytes:(CDUnknownBlockType)arg2;
@property(readonly) long long _gkImageOrientation;
@property(readonly) struct CGImage *_gkCGImage;
@property(readonly) double _gkScale;
- (id)_gkImageWithProgress:(double)arg1 achievement:(id)arg2 isDetail:(_Bool)arg3;
- (id)_gkMaskImageWithProgress:(double)arg1 isDetail:(_Bool)arg2;
- (id)_gkQuestionMarkImage;
@end

