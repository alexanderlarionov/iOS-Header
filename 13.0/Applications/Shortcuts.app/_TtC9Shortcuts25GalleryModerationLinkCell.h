//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE, UITextField;
@protocol _TtP9Shortcuts33GalleryModerationLinkCellDelegate_;

@interface _TtC9Shortcuts25GalleryModerationLinkCell : UITableViewCell
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *$__lazy_storage_$_nameTextField;
    MISSING_TYPE *$__lazy_storage_$_urlTextField;
}

- (void).cxx_destruct;
- (void)textFieldDidChange;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, retain) UITextField *urlTextField;
@property(nonatomic, retain) UITextField *nameTextField;
@property(nonatomic) __weak id <_TtP9Shortcuts33GalleryModerationLinkCellDelegate_> delegate; // @synthesize delegate;

@end
