//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSDictionary, NSUserActivity;

@protocol CALNApplicationWorkspaceProvider <NSObject>
- (void)openUserActivity:(NSUserActivity *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
@end
