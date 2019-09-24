//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WBSOrderedTab <NSObject>
@property(readonly, nonatomic) double lastActivationTime;
@property(readonly, nonatomic, getter=isClosing) _Bool closing;
@property(readonly, nonatomic) _Bool shouldSelectOriginatingTabWhenClosed;
@property(readonly, nonatomic) _Bool isPinnedTab;
@property(readonly, nonatomic) NSString *windowIdentifier;
@property(readonly, nonatomic) NSArray *ancestorTabIdentifiers;
@property(readonly, nonatomic) NSString *identifier;
@end
