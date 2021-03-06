//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPlayButton.h>

@class LPMusicPlayButtonStyle;

__attribute__((visibility("hidden")))
@interface LPPlayButton : SKUIPlayButton
{
    LPMusicPlayButtonStyle *_style;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (float)playButtonDefaultAlpha;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (id)outerBorderColor;
- (id)cancelImage;
- (id)playImage;
- (void)updateControlStyle:(long long)arg1;
- (id)initWithStyle:(id)arg1;
- (id)mainColor;

@end

