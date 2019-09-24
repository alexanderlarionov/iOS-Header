//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSuggestAutomationEvent : WFEvent
{
    _Bool _interacted;
    _Bool _completed;
    NSString *_key;
    NSString *_suggestedAutomationIdentifier;
}

+ (Class)codableEventClass;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) _Bool interacted; // @synthesize interacted=_interacted;
@property(copy, nonatomic) NSString *suggestedAutomationIdentifier; // @synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end
