//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHResourceAvailabilityRequest.h>

@class NSSet;
@protocol PHResourceRepairRequestDelegate;

@interface PHResourceRepairRequest : PHResourceAvailabilityRequest
{
    id <PHResourceRepairRequestDelegate> _delegate;
    NSSet *_errorCodesToRepair;
}

+ (_Bool)appyCorrectionsToResource:(id)arg1 assetObjectID:(id)arg2 errorCodes:(id)arg3 context:(id)arg4;
@property(retain, nonatomic) NSSet *errorCodesToRepair; // @synthesize errorCodesToRepair=_errorCodesToRepair;
@property(nonatomic) __weak id <PHResourceRepairRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithDataStoreKey:(id)arg1 store:(id)arg2 assetObjectID:(id)arg3 context:(id)arg4 validationErrors:(id)arg5;
- (id)initWithResource:(id)arg1 assetObjectID:(id)arg2 validationErrors:(id)arg3;
- (void)runDaemonSide;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)_errorCodesFromErrors:(id)arg1;
- (void)_handleRepairFinishedNotification:(id)arg1;

@end
