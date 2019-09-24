//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface NTKZeusColorPalette : NSObject
{
    unsigned long long _color;
    UIColor *_dialColor;
    UIColor *_complicationColor;
    UIColor *_secondHandColor;
    UIColor *_minuteHandColor;
    UIColor *_hourHandColor;
    UIColor *_handInlayColor;
    UIColor *_minuteHandDotColor;
    UIColor *_backgroundColor;
    double _secondHandAlpha;
    unsigned long long _bleed;
    UIColor *_splitColor;
}

+ (id)swatchImageForColor:(unsigned long long)arg1;
+ (id)swatchColorForColor:(unsigned long long)arg1;
+ (id)paletteForColor:(unsigned long long)arg1;
+ (id)noirSecondHandColor;
+ (id)noirHandStrokeColor;
+ (id)noirColor;
+ (id)briqueColor;
+ (id)etainColor;
+ (id)encreColor;
+ (id)roseExtremeColor;
+ (id)roseAzaleeColor;
+ (id)offWhiteColor;
+ (id)indigoColor;
+ (id)feuColor;
+ (id)craieColor;
+ (id)charcoalColor;
+ (id)capucineColor;
+ (id)bordeauxColor;
+ (id)bleuDarkColor;
+ (id)bleuMediumColor;
+ (id)bleuLightColor;
+ (id)sakuraDarkColor;
+ (id)sakuraMediumColor;
+ (id)sakuraLightColor;
+ (id)ambreColor;
+ (id)zeusSilverColor;
+ (id)zeusOrangeColor;
@property(readonly, nonatomic) UIColor *splitColor; // @synthesize splitColor=_splitColor;
@property(readonly, nonatomic) unsigned long long bleed; // @synthesize bleed=_bleed;
@property(readonly, nonatomic) double secondHandAlpha; // @synthesize secondHandAlpha=_secondHandAlpha;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *minuteHandDotColor; // @synthesize minuteHandDotColor=_minuteHandDotColor;
@property(readonly, nonatomic) UIColor *handInlayColor; // @synthesize handInlayColor=_handInlayColor;
@property(readonly, nonatomic) UIColor *hourHandColor; // @synthesize hourHandColor=_hourHandColor;
@property(readonly, nonatomic) UIColor *minuteHandColor; // @synthesize minuteHandColor=_minuteHandColor;
@property(readonly, nonatomic) UIColor *secondHandColor; // @synthesize secondHandColor=_secondHandColor;
@property(readonly, nonatomic) UIColor *complicationColor; // @synthesize complicationColor=_complicationColor;
@property(readonly, nonatomic) UIColor *dialColor; // @synthesize dialColor=_dialColor;
- (void).cxx_destruct;
- (id)initWithColor:(unsigned long long)arg1;

@end
