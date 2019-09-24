//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactHeaderView.h>

@class NSLayoutConstraint, UIButton;

@interface CNContactHeaderEditView : CNContactHeaderView
{
    _Bool _allowsEditPhoto;
    UIButton *_editButton;
    NSLayoutConstraint *_editButtonHeightConstraint;
    struct CGSize _maxButtonSize;
}

+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 shouldAllowImageDrops:(_Bool)arg3 monogramOnly:(_Bool)arg4;
+ (id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 showingNavBar:(_Bool)arg3 monogramOnly:(_Bool)arg4 delegate:(id)arg5;
+ (id)contactHeaderViewWithContact:(id)arg1 shouldAllowTakePhotoAction:(_Bool)arg2 monogramOnly:(_Bool)arg3 delegate:(id)arg4;
@property(retain, nonatomic) NSLayoutConstraint *editButtonHeightConstraint; // @synthesize editButtonHeightConstraint=_editButtonHeightConstraint;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) struct CGSize maxButtonSize; // @synthesize maxButtonSize=_maxButtonSize;
@property(nonatomic) _Bool allowsEditPhoto; // @synthesize allowsEditPhoto=_allowsEditPhoto;
- (void).cxx_destruct;
- (void)updateContactWithEditedPropertyItem:(id)arg1;
- (void)editButtonPressed;
- (void)saveContactPhoto;
- (_Bool)photoIsModified;
- (_Bool)hasPhoto;
- (void)updateEditButtonTitle;
- (void)updateWithContacts:(id)arg1;
- (void)updateSizeDependentAttributes;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)calculateLabelSizesIfNeeded;
- (double)maxHeight;
- (void)setAllowsEditPhoto:(_Bool)arg1 preservingChanges:(_Bool)arg2;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 shouldAllowTakePhotoAction:(_Bool)arg3 delegate:(id)arg4 showingNavBar:(_Bool)arg5 monogramOnly:(_Bool)arg6;
- (id)initWithContact:(id)arg1 frame:(struct CGRect)arg2 shouldAllowTakePhotoAction:(_Bool)arg3 monogramOnly:(_Bool)arg4 delegate:(id)arg5;

@end
