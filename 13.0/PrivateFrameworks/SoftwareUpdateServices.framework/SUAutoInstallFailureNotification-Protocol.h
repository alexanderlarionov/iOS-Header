//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class NSError, NSString;

@protocol SUAutoInstallFailureNotification <NSObject>

@optional
- (void)postNotificationForError:(NSError *)arg1 withUpdateBuildNumber:(NSString *)arg2;
- (void)postNotificationForError:(NSError *)arg1;
- (void)dismissNotification;
@end
