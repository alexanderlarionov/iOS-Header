//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, HUGridLayoutOptions, NSArray, NSString, UILabel;
@protocol HUResizableCellDelegate;

@interface HUInstructionsCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    HUGridLayoutOptions *_layoutOptions;
    double _contentBottomMargin;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    NSArray *_constraints;
}

@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double contentBottomMargin; // @synthesize contentBottomMargin=_contentBottomMargin;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

