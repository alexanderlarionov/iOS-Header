//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class CLKProgressProvider, NTKColoringImageView, NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularSmallRingTemplateView : NTKModularTemplateView
{
    UIView<NTKComplicationImageView> *_imageView;
    float _level;
    CLKProgressProvider *_progressProvider;
    struct NSNumber *_progressUpdateToken;
    NTKColoringImageView *_stateRing;
    NTKColoringLabel *_label;
}

+ (void)load;
+ (id)supportedTemplateClasses;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
@property(retain, nonatomic) NTKColoringLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NTKColoringImageView *stateRing; // @synthesize stateRing=_stateRing;
- (void).cxx_destruct;
- (void)_refreshRingImageWithRing:(id)arg1;
- (void)_refreshRingImage;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_layoutContentView;
- (void)_updateRingWithRingDescription:(id)arg1;
- (void)updateRingWithProgressProvider:(id)arg1;
- (void)_update;
- (void)setIsXL:(_Bool)arg1;
- (void)_configureContentSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
