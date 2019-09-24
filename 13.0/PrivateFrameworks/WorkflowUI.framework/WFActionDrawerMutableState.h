//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFActionDrawerState.h>

@class NSIndexPath, NSString, WFAction, WFActionDrawerResults;

@interface WFActionDrawerMutableState : WFActionDrawerState
{
}


// Remaining properties
@property(retain, nonatomic) WFAction *action; // @dynamic action;
@property(nonatomic) long long activePane; // @dynamic activePane;
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(copy, nonatomic) NSString *categoryName; // @dynamic categoryName;
@property(nonatomic, getter=isFocusedOnSearchBar) _Bool focusedOnSearchBar; // @dynamic focusedOnSearchBar;
@property(retain, nonatomic) NSIndexPath *listPosition; // @dynamic listPosition;
@property(retain, nonatomic) WFActionDrawerResults *listResults; // @dynamic listResults;
@property(retain, nonatomic) WFActionDrawerState *precedingState; // @dynamic precedingState;
@property(copy, nonatomic) NSString *searchQuery; // @dynamic searchQuery;
@end
