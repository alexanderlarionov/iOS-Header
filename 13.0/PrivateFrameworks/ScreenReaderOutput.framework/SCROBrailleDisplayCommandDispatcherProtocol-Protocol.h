//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderOutput/NSObject-Protocol.h>

@class SCROBrailleKey;
@protocol SCROBrailleDisplayCommandDispatcherDelegate;

@protocol SCROBrailleDisplayCommandDispatcherProtocol <NSObject>
@property(nonatomic) __weak id <SCROBrailleDisplayCommandDispatcherDelegate> delegate;
- (_Bool)handleBrailleKeyEvent:(SCROBrailleKey *)arg1;
@end

