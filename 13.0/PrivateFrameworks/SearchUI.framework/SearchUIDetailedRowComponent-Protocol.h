//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSArray, SearchUIDetailedRowModel, UIView;
@protocol SearchUIFeedbackDelegate;

@protocol SearchUIDetailedRowComponent <NSObject>
+ (_Bool)supportsRowModel:(SearchUIDetailedRowModel *)arg1;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate;
@property(retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property(retain, nonatomic) UIView *view;
- (void)updateWithContacts:(NSArray *)arg1;
- (_Bool)shouldVerticallyCenter;
- (void)updateWithRowModel:(SearchUIDetailedRowModel *)arg1;
- (UIView *)setupView;
@end
