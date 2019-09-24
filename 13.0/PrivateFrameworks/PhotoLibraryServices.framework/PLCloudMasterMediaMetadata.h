//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, PLAdditionalAssetAttributes, PLCloudMaster;

@interface PLCloudMasterMediaMetadata : PLManagedObject
{
}

+ (id)entityName;
- (id)payloadsForChangedKeys:(id)arg1;
- (void)_addPayloadIfValidForAsset:(id)arg1 changedKeys:(id)arg2 toPayloads:(id)arg3 modelProperties:(id)arg4;

// Remaining properties
@property(retain, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes; // @dynamic additionalAssetAttributes;
@property(retain, nonatomic) PLCloudMaster *cloudMaster; // @dynamic cloudMaster;
@property(retain, nonatomic) NSData *data; // @dynamic data;

@end
