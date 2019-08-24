//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/UIImagePickerControllerDelegate-Protocol.h>
#import <MediaSocial/UINavigationControllerDelegate-Protocol.h>
#import <MediaSocial/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UIImagePickerController, UIPopoverPresentationController, UIView;
@protocol MSCLComposeImagePickerDelegate;

@interface MSCLComposeImagePickerController : NSObject <UIPopoverPresentationControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    id <MSCLComposeImagePickerDelegate> _delegate;
    UIImagePickerController *_imagePickerController;
    UIPopoverPresentationController *_popoverPresentationController;
    struct CGRect _popoverSourceRect;
    UIView *_popoverSourceView;
    long long _sourceType;
}

@property(retain, nonatomic) UIView *popoverSourceView; // @synthesize popoverSourceView=_popoverSourceView;
@property(nonatomic) struct CGRect popoverSourceRect; // @synthesize popoverSourceRect=_popoverSourceRect;
@property(nonatomic) __weak id <MSCLComposeImagePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sendImagePickerDidCancel;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)presentImagePickerAnimated:(_Bool)arg1;
- (id)popoverPresentationController;
- (void)dealloc;
- (id)initWithImagePickerSourceType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
