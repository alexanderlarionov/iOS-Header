//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface RemindersRefreshController : NSObject
{
    NSMutableArray *_calendarsPendingRefresh;
    _Bool _isPendingRefreshForCalendarList;
    NSMutableDictionary *_lastCalendarRefreshDates;
    NSDate *_lastCalendarListRefreshDate;
    ACAccountStore *_accountStore;
    NSMutableSet *_allRemindersSyncingAccountIDs;
    _Bool _paused;
}

+ (id)sharedRefreshController;
@property(retain, nonatomic) NSDate *lastCalendarListRefreshDate; // @synthesize lastCalendarListRefreshDate=_lastCalendarListRefreshDate;
- (void).cxx_destruct;
- (void)resumeScheduledRefreshes;
- (void)pauseScheduledRefreshes;
- (void)scheduleRefreshForCalendarList;
- (void)scheduleRefreshForAllCalendars;
- (void)scheduleRefreshForCalendarWithIdentifier:(id)arg1;
- (void)dealloc;
- (_Bool)_needsRefreshForCalendarList;
- (_Bool)_needsRefreshForCalendarWithIdentifier:(id)arg1;
- (void)_refreshCalendarList;
- (void)_refreshCalendarWithIdentifier:(id)arg1;
- (id)_allRemindersSyncingAccountIDs;
- (id)_accountStore;
- (void)_accountStoreDidChange:(id)arg1;

@end
