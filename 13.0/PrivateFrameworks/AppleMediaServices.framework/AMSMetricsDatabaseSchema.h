//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabaseSchema : NSObject
{
}

+ (void)migrateVersion1to2WithMigration:(id)arg1;
+ (void)migrateVersion0to1WithMigration:(id)arg1;
+ (id)_containerURLForContainerId:(id)arg1;
+ (void)_applyProtectionClassForDirectoryAtURL:(id)arg1;
+ (_Bool)_addSkipBackupAttribute:(_Bool)arg1 forURL:(id)arg2;
+ (_Bool)removeDatabaseForContainerId:(id)arg1;
+ (id)databasePathForContainerId:(id)arg1;
+ (_Bool)createOrUpdateSchemaUsingConnection:(id)arg1;

@end
