//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, UIActivity, UIActivityViewController;

@protocol PUActivityDataSource <NSObject>

@optional
- (NSArray *)activityItemsForActivity:(UIActivity *)arg1;
- (UIActivityViewController *)activityViewControllerForActivity:(UIActivity *)arg1;
@end

