//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class PGGraphUpdate;

@protocol PGGraphIngestProcessor <NSObject>
- (void)runWithGraphUpdate:(PGGraphUpdate *)arg1 progressBlock:(void (^)(double, _Bool *))arg2;
- (_Bool)shouldRunWithGraphUpdate:(PGGraphUpdate *)arg1;
@end
