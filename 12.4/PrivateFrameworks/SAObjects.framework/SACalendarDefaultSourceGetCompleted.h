//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString, SACalendarSource;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1;
+ (id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)defaultSourceGetCompleted;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SACalendarSource *aceCalendarSource;
- (id)initWithAceCalendarSource:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

