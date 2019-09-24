//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class AXMImageCaptionModel;

@interface AXMCaptionDetectorNode : AXMEvaluationNode
{
    AXMImageCaptionModel *_captionImpl;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;

@end
