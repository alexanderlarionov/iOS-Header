//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFPhotoPickerController, NSDictionary, NSString;

@protocol MFPhotoPickerControllerDelegate <NSObject>

@optional
- (void)photoPicker:(MFPhotoPickerController *)arg1 didDeselectAssetWithIdentifier:(NSString *)arg2;
- (void)photoPicker:(MFPhotoPickerController *)arg1 didSelectAssetWithIdentifier:(NSString *)arg2 mediaInfo:(NSDictionary *)arg3;
- (void)photoPickerDidCancel:(MFPhotoPickerController *)arg1;
@end
