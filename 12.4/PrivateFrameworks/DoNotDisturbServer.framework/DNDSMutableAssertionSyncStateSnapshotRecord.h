//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/DNDSAssertionSyncStateSnapshotRecord.h>

@class DNDSModeAssertionStoreRecord, NSNumber, NSString;

@interface DNDSMutableAssertionSyncStateSnapshotRecord : DNDSAssertionSyncStateSnapshotRecord
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) DNDSModeAssertionStoreRecord *snapshotAssertionStore; // @dynamic snapshotAssertionStore;
@property(copy, nonatomic) NSNumber *snapshotLastFullAssertionInvalidationReason; // @dynamic snapshotLastFullAssertionInvalidationReason;
@property(copy, nonatomic) NSNumber *snapshotTimestamp; // @dynamic snapshotTimestamp;
@property(copy, nonatomic) NSString *snapshotUUID; // @dynamic snapshotUUID;

@end
