//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class TTMergeableStringUndoGroup;

@protocol TTTextUndoTarget <NSObject>
- (TTMergeableStringUndoGroup *)newCoalescingUndoGroup;
- (void)applyUndoGroup:(TTMergeableStringUndoGroup *)arg1;
@end
