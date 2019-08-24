//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ReplayKit/RPVideoEditorExtensionHostProtocol-Protocol.h>

@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol>
{
    RPVideoEditorHostViewController *_hostViewController;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak RPVideoEditorHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;
- (id)extensionObjectProxy;
- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;

@end
