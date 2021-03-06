//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUPickerViewCell, NSAttributedString, NSString;

@protocol HUPickerCellDelegate <NSObject>
- (void)pickerViewCell:(HUPickerViewCell *)arg1 didSelectValueAtIndex:(long long)arg2;
- (long long)numberOfValuesForPickerViewCell:(HUPickerViewCell *)arg1;

@optional
- (NSAttributedString *)pickerViewCell:(HUPickerViewCell *)arg1 attributedTitleForValueAtIndex:(long long)arg2;
- (NSString *)pickerViewCell:(HUPickerViewCell *)arg1 titleForValueAtIndex:(long long)arg2;
- (_Bool)pickerViewCell:(HUPickerViewCell *)arg1 canSelectValueAtIndex:(long long)arg2;
@end

