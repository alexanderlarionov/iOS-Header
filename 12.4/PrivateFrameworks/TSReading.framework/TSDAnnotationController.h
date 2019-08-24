//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSDAnnotationController : NSObject
{
}

- (void)commitCommentText:(id)arg1 forAnnotation:(id)arg2;
- (void)didShowAnnotation:(id)arg1;
- (void)willShowAnnotation:(id)arg1;
- (void)previousAnnotation:(id)arg1;
- (void)nextAnnotation:(id)arg1;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
@property(nonatomic) _Bool textSelectionChangeShouldDismissAnnotations;
@property(readonly, nonatomic) NSString *annotationNavigationString;
- (id)annotationNavigationTypeStringUsedForNavigating:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasAnnotations;

@end
