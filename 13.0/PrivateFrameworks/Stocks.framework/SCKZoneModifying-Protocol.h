//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol SCKZoneModifying
- (_Bool)recordExistsWithName:(NSString *)arg1;
- (void)deleteRecordWithName:(NSString *)arg1;
- (void)createOrUpdateRecordWithName:(NSString *)arg1 recordType:(NSString *)arg2 modifyBlock:(void (^)(CKRecord *))arg3;
@end
