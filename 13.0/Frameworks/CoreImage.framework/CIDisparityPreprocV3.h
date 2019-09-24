//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIDisparityPreprocV3 : CIFilter
{
    CIImage *inputImage;
    CIImage *inputAlphaImage;
}

@property(retain) CIImage *inputAlphaImage; // @synthesize inputAlphaImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)preprocKernelNoAlpha;
- (id)preprocKernel;

@end
