//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/NSObject-Protocol.h>

@class EKRecurrenceChooserController;

@protocol EKRecurrenceChooserControllerDelegate <NSObject>
- (void)recurrenceChooser:(EKRecurrenceChooserController *)arg1 wantsRowReload:(long long)arg2;
- (void)recurrenceChooserUpdated:(EKRecurrenceChooserController *)arg1;
- (void)recurrenceChooserWantsReload:(EKRecurrenceChooserController *)arg1;
@end
