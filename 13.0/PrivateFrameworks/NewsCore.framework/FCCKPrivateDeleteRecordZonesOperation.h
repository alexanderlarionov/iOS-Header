//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordZonesOperation : FCCKPrivateDatabaseOperation
{
    _Bool _secureDatabaseOnly;
    NSArray *_recordZoneIDsToDelete;
    CDUnknownBlockType _deleteRecordZonesCompletionBlock;
    NSArray *_resultDeletedRecordZoneIDs;
}

@property(retain, nonatomic) NSArray *resultDeletedRecordZoneIDs; // @synthesize resultDeletedRecordZoneIDs=_resultDeletedRecordZoneIDs;
@property(copy, nonatomic) CDUnknownBlockType deleteRecordZonesCompletionBlock; // @synthesize deleteRecordZonesCompletionBlock=_deleteRecordZonesCompletionBlock;
@property(nonatomic) _Bool secureDatabaseOnly; // @synthesize secureDatabaseOnly=_secureDatabaseOnly;
@property(copy, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end
