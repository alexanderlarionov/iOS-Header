//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKCoreChatControllerDelegate-Protocol.h>
#import <ChatKit/NSObject-Protocol.h>

@class CKChatController, CKComposition;

@protocol CKChatControllerDelegate <NSObject, CKCoreChatControllerDelegate>
- (void)prewarmCameraIfNecessaryForChatController:(CKChatController *)arg1;
- (void)chatController:(CKChatController *)arg1 forwardComposition:(CKComposition *)arg2;
@end

