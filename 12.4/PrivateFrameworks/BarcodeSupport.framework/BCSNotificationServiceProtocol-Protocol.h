//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol BCSCodePayload, BCSParsedData;

@protocol BCSNotificationServiceProtocol
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)notifyParsedCodeWithData:(id <BCSParsedData>)arg1 codePayload:(id <BCSCodePayload>)arg2 shouldReplacePreviousNotifications:(_Bool)arg3 reply:(void (^)(NSError *, AWDBarcodeSupportCodeDetectedEvent *))arg4;
@end

