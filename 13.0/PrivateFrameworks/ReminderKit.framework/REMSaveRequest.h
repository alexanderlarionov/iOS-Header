//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, REMStore;
@protocol REMReplicaManagerProviding;

@interface REMSaveRequest : NSObject
{
    _Bool _saved;
    _Bool _updateLastModifiedDates;
    _Bool _cloneCompletedRecurrentRemindersAtSave;
    _Bool _applyCRDTsWithoutMerging;
    REMStore *_store;
    NSString *_author;
    NSMutableDictionary *_trackedAccountChangeItems;
    NSMutableDictionary *_trackedListChangeItems;
    NSMutableDictionary *_trackedReminderChangeItems;
    NSMutableDictionary *_trackedAccountCapabilities;
    id <REMReplicaManagerProviding> _replicaManagerProvider;
}

@property(retain, nonatomic) id <REMReplicaManagerProviding> replicaManagerProvider; // @synthesize replicaManagerProvider=_replicaManagerProvider;
@property(nonatomic) _Bool applyCRDTsWithoutMerging; // @synthesize applyCRDTsWithoutMerging=_applyCRDTsWithoutMerging;
@property(nonatomic) _Bool cloneCompletedRecurrentRemindersAtSave; // @synthesize cloneCompletedRecurrentRemindersAtSave=_cloneCompletedRecurrentRemindersAtSave;
@property(nonatomic) _Bool updateLastModifiedDates; // @synthesize updateLastModifiedDates=_updateLastModifiedDates;
@property(readonly, nonatomic) NSMutableDictionary *trackedAccountCapabilities; // @synthesize trackedAccountCapabilities=_trackedAccountCapabilities;
@property(readonly, nonatomic) NSMutableDictionary *trackedReminderChangeItems; // @synthesize trackedReminderChangeItems=_trackedReminderChangeItems;
@property(readonly, nonatomic) NSMutableDictionary *trackedListChangeItems; // @synthesize trackedListChangeItems=_trackedListChangeItems;
@property(readonly, nonatomic) NSMutableDictionary *trackedAccountChangeItems; // @synthesize trackedAccountChangeItems=_trackedAccountChangeItems;
@property(nonatomic, getter=isSaved) _Bool saved; // @synthesize saved=_saved;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)_copyReminderChangeItem:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2;
- (id)_copyReminderChangeItem:(id)arg1 toListChangeItem:(id)arg2;
- (id)_copyReminder:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2;
- (id)_copyReminder:(id)arg1 toListChangeItem:(id)arg2;
- (id)_trackedAccountCapabilitiesForObjectID:(id)arg1;
- (void)_trackAccountCapabilities:(id)arg1 forObjectID:(id)arg2;
- (void)_updateTrackedReminderChangeItem:(id)arg1 withObjectID:(id)arg2;
- (void)_trackReminderChangeItem:(id)arg1;
- (id)_trackedReminderChangeItemForObjectID:(id)arg1;
- (void)_updateTrackedListChangeItem:(id)arg1 withObjectID:(id)arg2;
- (void)_trackListChangeItem:(id)arg1;
- (id)_trackedListChangeItemForObjectID:(id)arg1;
- (void)_updateTrackedAccountChangeItem:(id)arg1 withObjectID:(id)arg2;
- (void)_trackAccountChangeItem:(id)arg1;
- (id)_trackedAccountChangeItemForObjectID:(id)arg1;
- (void)performPreSaveActions;
- (void)_prepareSave:(CDUnknownBlockType)arg1;
- (_Bool)saveSynchronouslyWithError:(id *)arg1;
- (void)saveWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willSaveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 reminderChangeItems:(id)arg3;
- (void)_updateResolutionTokenMapForChangeItem:(id)arg1;
- (id)updateReminder:(id)arg1;
- (id)addReminderWithTitle:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2;
- (id)addReminderWithTitle:(id)arg1 toReminderSubtaskContextChangeItem:(id)arg2 reminderObjectID:(id)arg3;
- (id)addReminderWithTitle:(id)arg1 toListChangeItem:(id)arg2;
- (id)addReminderWithTitle:(id)arg1 toListChangeItem:(id)arg2 reminderObjectID:(id)arg3;
- (id)_updateListWithReminderChangeItem:(id)arg1;
- (id)_updateListStorage:(id)arg1 accountCapabilities:(id)arg2;
- (id)updateList:(id)arg1;
- (id)addListWithName:(id)arg1 toListSublistContextChangeItem:(id)arg2;
- (id)addListWithName:(id)arg1 toListSublistContextChangeItem:(id)arg2 listObjectID:(id)arg3;
- (id)addListWithName:(id)arg1 toAccountChangeItem:(id)arg2;
- (id)addListWithName:(id)arg1 toAccountChangeItem:(id)arg2 listObjectID:(id)arg3;
- (id)addGroupWithName:(id)arg1 toAccountGroupContextChangeItem:(id)arg2;
- (id)addGroupWithName:(id)arg1 toAccountGroupContextChangeItem:(id)arg2 groupObjectID:(id)arg3;
- (id)_updateAccountWithListChangeItem:(id)arg1;
- (id)updateAccount:(id)arg1;
- (id)_addAccountWithType:(long long)arg1 name:(id)arg2;
- (id)_addAccountWithType:(long long)arg1 name:(id)arg2 accountObjectID:(id)arg3;
- (id)description;
- (id)initWithStore:(id)arg1;
- (void)_populateRecurrencesInReminderChangeItem:(id)arg1 withICSComponent:(id)arg2 icsCalendar:(id)arg3;
- (void)_addAlarmsToReminderChangeItem:(id)arg1 withICSAlarm:(id)arg2 icsCalendar:(id)arg3;
- (void)_populateAlarmsInReminderChangeItem:(id)arg1 withICSAlarms:(id)arg2 icsCalendar:(id)arg3;
- (id)icsDueOrEndDateWithICSCalendarItem:(id)arg1 options:(id)arg2;
- (void)_populateReminderChangeItem:(id)arg1 withICSTodoItem:(id)arg2 icsCalendar:(id)arg3 isNew:(_Bool)arg4 withOptions:(id)arg5;
- (id)_iCalendarDataFromICSTodoItem:(id)arg1 icsCalendar:(id)arg2;
- (void)updateUIDInReminderChangeItem:(id)arg1 fromICSComponent:(id)arg2 icsCalendar:(id)arg3;
- (_Bool)updateReminderChangeItem:(id)arg1 fromICSData:(id)arg2 isNew:(_Bool)arg3 withOptions:(id)arg4 error:(id *)arg5;
- (void)updateReminderChangeItem:(id)arg1 fromICSTodo:(id)arg2 icsCalendar:(id)arg3 isNew:(_Bool)arg4 withOptions:(id)arg5;
- (id)importRemindersFromICSData:(id)arg1 insertIntoListChangeItem:(id)arg2 error:(id *)arg3;

@end
