//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNMeCardSharingSectionDataSource-Protocol.h>

@class NSArray, NSString, UISwitch;
@protocol CNMeCardSharingEnabledDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingEnabledDataSource : NSObject <CNMeCardSharingSectionDataSource>
{
    _Bool _sharingEnabled;
    id <CNMeCardSharingEnabledDelegate> _delegate;
    UISwitch *_enabledSwitch;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UISwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(nonatomic) __weak id <CNMeCardSharingEnabledDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didToggleEnabledSwitch:(id)arg1;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (id)itemForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (id)sectionFooterLabel;
- (id)sectionHeaderLabel;
- (void)buildItems;
- (_Bool)supportsSelection;
- (id)initWithSharingEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long selectedIndex;
@property(readonly) Class superclass;

@end
