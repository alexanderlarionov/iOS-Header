//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSURL;

@interface AXMModelDetectorNode : AXMEvaluationNode
{
    NSURL *_modelURL;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void).cxx_destruct;
- (void)evaluate:(id)arg1;
- (_Bool)preloadModelIfNeeded:(id *)arg1;
- (_Bool)requiresVisionFramework;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;

@end

