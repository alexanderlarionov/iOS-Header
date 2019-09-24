//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailboxProvider, NSMutableArray, NSMutableSet;

@interface _MFMailMessageDuplicateInfo : NSObject
{
    MFMailboxProvider *_mailboxProvider;
    NSMutableSet *_mailboxes;
    NSMutableArray *_flags;
    NSMutableArray *_dates;
}

@property(retain, nonatomic) NSMutableArray *dates; // @synthesize dates=_dates;
@property(retain, nonatomic) NSMutableArray *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSMutableSet *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(retain, nonatomic) MFMailboxProvider *mailboxProvider; // @synthesize mailboxProvider=_mailboxProvider;
- (void).cxx_destruct;
- (id)combinedDate;
- (id)combinedMessageFlags;
- (id)combinedMailboxes;
- (void)addMessage:(id)arg1;
- (id)initWithMailboxProvider:(id)arg1;

@end
