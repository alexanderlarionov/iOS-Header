//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator
{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
    _Bool _includeHidden;
}

- (id)nextObject;
- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(_Bool)arg2;
- (void)dealloc;

@end

