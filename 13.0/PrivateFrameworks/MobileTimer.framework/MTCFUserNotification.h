//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTOSTransaction, NSString;

@interface MTCFUserNotification : NSObject
{
    NSString *_identifier;
    CDUnknownBlockType _handler;
    MTOSTransaction *_transaction;
    struct __CFUserNotification *_notification;
}

@property(nonatomic) struct __CFUserNotification *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) MTOSTransaction *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end
