//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ODROperation.h"

@interface ODRAssetPackValidationMaintenanceOperation : ODROperation
{
    _Bool _dbWasRebuilt;
}

+ (_Bool)_removeItemAtURL:(id)arg1 withDescription:(id)arg2;
+ (void)_enumerateURLs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_validateMetadataURL:(id)arg1 matchesContents:(id)arg2;
- (_Bool)_validateAssetsForHashURL:(id)arg1;
- (_Bool)_validateAssetPackURL:(id)arg1;
- (void)_run;
- (_Bool)run;

@end
