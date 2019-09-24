//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReplayKit/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol ReplayKitMacHelper;

@protocol ReplayKitMacHelperDelegate <NSObject>

@optional
- (void)extensionDidFinishWithLaunchURL:(NSURL *)arg1 broadcastURL:(NSURL *)arg2 extensionBundleID:(NSString *)arg3 cancelled:(_Bool)arg4;
- (void)macApplicationDidBecomeActive;
- (void)macApplicationDidResignActive;
- (void)userDidStopRecordingFromStatusBar;
- (void)replayKitMacHelper:(id <ReplayKitMacHelper>)arg1 didDismissVideoEditorSheetWithActivityTypes:(NSArray *)arg2;
@end
