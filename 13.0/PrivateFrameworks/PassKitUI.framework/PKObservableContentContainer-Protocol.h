//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/UIContentContainer-Protocol.h>

@protocol PKContentContainerObserver;

@protocol PKObservableContentContainer <UIContentContainer>
- (void)removeContentContainerObserver:(id <PKContentContainerObserver>)arg1;
- (void)addContentContainerObserver:(id <PKContentContainerObserver>)arg1;
@end
