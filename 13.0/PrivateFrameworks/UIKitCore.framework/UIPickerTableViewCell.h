//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIPickerTableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewCell : UITableViewCell
{
    UITapGestureRecognizer *_tap;
    UIPickerTableView *pickerTable;
}

+ (id)_nonCenterCellFont;
+ (id)_centerCellFont;
@property(nonatomic) UIPickerTableView *pickerTable; // @synthesize pickerTable;
- (void).cxx_destruct;
- (void)_tapAction:(id)arg1;
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
