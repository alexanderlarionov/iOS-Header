//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallStackImageComplicationView : NTKCircularComplicationView
{
    NTKColoringLabel *_label;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
