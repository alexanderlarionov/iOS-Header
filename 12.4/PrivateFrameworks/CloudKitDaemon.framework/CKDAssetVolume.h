//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface CKDAssetVolume : CKObject
{
    NSNumber *_volumeIndex;
    NSUUID *_volumeUUID;
}

+ (id)CKSQLiteClassName;
@property(retain, nonatomic) NSUUID *volumeUUID; // @synthesize volumeUUID=_volumeUUID;
@property(retain, nonatomic) NSNumber *volumeIndex; // @synthesize volumeIndex=_volumeIndex;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;

@end
