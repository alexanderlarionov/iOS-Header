//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSaverTileLoaderProxy-Protocol.h>

@class NSString;

@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy>
{
}

- (void)_debug_initiateDataSaverPreload;
@property(readonly, nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled;
- (void)_removeOldRegionStateFromDisk;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
