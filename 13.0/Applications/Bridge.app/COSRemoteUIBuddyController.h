//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "COSBuddyController-Protocol.h"

@class NSString, UIViewController;
@protocol COSBuddyControllerDelegate;

@interface COSRemoteUIBuddyController : NSObject <COSBuddyController>
{
    id <COSBuddyControllerDelegate> _delegate;
    UIViewController *_ruiViewController;
}

@property(retain, nonatomic) UIViewController *ruiViewController; // @synthesize ruiViewController=_ruiViewController;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)viewController;
- (id)initWithRUIViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
