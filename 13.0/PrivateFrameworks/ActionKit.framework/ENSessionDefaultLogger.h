//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/ENSDKLogging-Protocol.h>

@class NSString;

@interface ENSessionDefaultLogger : NSObject <ENSDKLogging>
{
}

- (void)evernoteLogErrorString:(id)arg1;
- (void)evernoteLogInfoString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
