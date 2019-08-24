//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider
{
    int _identificationEntriesChangedNotifyToken;
    CXCallDirectoryManager *_callDirectoryManager;
    CDUnknownBlockType _countryDialingCode;
    CDUnknownBlockType _firstIdentificationEntriesForEnabledExtensions;
}

@property(copy, nonatomic) CDUnknownBlockType firstIdentificationEntriesForEnabledExtensions; // @synthesize firstIdentificationEntriesForEnabledExtensions=_firstIdentificationEntriesForEnabledExtensions;
@property(copy, nonatomic) CDUnknownBlockType countryDialingCode; // @synthesize countryDialingCode=_countryDialingCode;
@property(readonly, nonatomic) int identificationEntriesChangedNotifyToken; // @synthesize identificationEntriesChangedNotifyToken=_identificationEntriesChangedNotifyToken;
@property(readonly, nonatomic) CXCallDirectoryManager *callDirectoryManager; // @synthesize callDirectoryManager=_callDirectoryManager;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (void)dealloc;
- (id)init;

@end
