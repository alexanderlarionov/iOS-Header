//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LockoutUI/NSObject-Protocol.h>

@class NSString;
@protocol LOViewControllerDelegate;

@protocol LOViewController <NSObject>
@property(nonatomic) __weak id <LOViewControllerDelegate> viewControllerDelegate;
@property(readonly, nonatomic) _Bool didFinishDismissing;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(nonatomic, getter=isForSnapshot) _Bool forSnapshot;
@end
