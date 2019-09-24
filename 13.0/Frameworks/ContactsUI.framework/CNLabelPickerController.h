//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPickerController.h>

@class CNPropertyGroupItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNLabelPickerController : CNPickerController
{
    CNPropertyGroupItem *_item;
    NSMutableArray *_labelsToDeleteOnCommit;
}

@property(retain) NSMutableArray *labelsToDeleteOnCommit; // @synthesize labelsToDeleteOnCommit=_labelsToDeleteOnCommit;
@property(readonly, nonatomic) __weak CNPropertyGroupItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)pickedItem:(id)arg1;
- (void)removeCustomItem:(id)arg1;
- (id)titleForPickerItem:(id)arg1;
- (id)initForPropertyItem:(id)arg1;

@end
