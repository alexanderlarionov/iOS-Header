//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXCMMSession, PXCMMViewController;

@protocol PXCMMViewControllerDelegate <NSObject>

@optional
- (void)completeMyMomentViewController:(PXCMMViewController *)arg1 showPhotoPickerForSession:(PXCMMSession *)arg2;
- (void)didCancelCompleteMyMomentViewController:(PXCMMViewController *)arg1;
- (void)startPreloadingTasksForCompleteMyMomentViewController:(PXCMMViewController *)arg1;
@end
