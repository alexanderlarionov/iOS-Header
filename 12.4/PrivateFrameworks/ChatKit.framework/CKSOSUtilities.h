//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKSOSUtilities : NSObject
{
}

+ (id)sharedUtilities;
+ (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(CDUnknownBlockType)arg4;
+ (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3;
+ (_Bool)isMMSEnabled;
- (id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(_Bool)arg3;
- (id)_sendMessageAndReturnGUIDs:(id)arg1;
- (void)_sendMessageAndObserveNotification:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3;
- (_Bool)isMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2;
@property(readonly, nonatomic, getter=isMMSEnabled) _Bool MMSEnabled;
- (_Bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;

@end

