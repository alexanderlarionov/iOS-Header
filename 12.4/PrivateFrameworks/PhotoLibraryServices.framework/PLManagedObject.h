//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, PLPhotoLibrary;

@interface PLManagedObject : NSManagedObject
{
}

- (void)willSave;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;
@property(readonly, copy, nonatomic) NSString *shortObjectIDURI;
@property(readonly, nonatomic) _Bool isRegisteredWithUserInterfaceContext;
@property(readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary;

@end

