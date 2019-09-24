//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFEventBuilder.h>

#import <Home/HFTimeEventBuilder-Protocol.h>

@class NSDate, NSDateComponents, NSString;

@interface HFCalendarEventBuilder : HFEventBuilder <HFTimeEventBuilder>
{
    NSDate *_fireDate;
    NSDateComponents *_fireTimeComponents;
}

@property(copy, nonatomic) NSDateComponents *fireTimeComponents; // @synthesize fireTimeComponents=_fireTimeComponents;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)_fireDateForTimeComponents:(id)arg1;
@property(readonly, nonatomic) NSDate *effectiveFireDate;
- (id)effectiveFireTimeComponents;
- (void)updateBaseFireDateForTrigger;
- (id)performValidation;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)buildNewEventFromCurrentState;
- (id)initWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
