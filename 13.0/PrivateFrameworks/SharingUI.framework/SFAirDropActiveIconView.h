//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SFAirDropActiveIconView : UIImageView
{
    UIView *_circleMaskView;
    _Bool _masked;
}

+ (id)baseImage;
@property(nonatomic, getter=isMasked) _Bool masked; // @synthesize masked=_masked;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 grayscale:(_Bool)arg2;

@end
