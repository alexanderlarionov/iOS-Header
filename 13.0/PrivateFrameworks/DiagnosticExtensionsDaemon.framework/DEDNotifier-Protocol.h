//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class DEDBugSession, DEDBugSessionConfiguration;

@protocol DEDNotifier <NSObject>
- (void)cancelNotification;
- (void)scheduleNotification;
- (id)initWithConfiguration:(DEDBugSessionConfiguration *)arg1 session:(DEDBugSession *)arg2;
@end
