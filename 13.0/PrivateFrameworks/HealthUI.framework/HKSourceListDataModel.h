//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface HKSourceListDataModel : NSObject
{
    NSSet *_allSources;
    NSArray *_orderedAppSources;
    NSArray *_orderedUninstalledAppSources;
    NSArray *_orderedDeviceSources;
    NSArray *_orderedClinicalSources;
}

@property(readonly, copy, nonatomic) NSArray *orderedClinicalSources; // @synthesize orderedClinicalSources=_orderedClinicalSources;
@property(readonly, copy, nonatomic) NSArray *orderedDeviceSources; // @synthesize orderedDeviceSources=_orderedDeviceSources;
@property(readonly, copy, nonatomic) NSArray *orderedUninstalledAppSources; // @synthesize orderedUninstalledAppSources=_orderedUninstalledAppSources;
@property(readonly, copy, nonatomic) NSArray *orderedAppSources; // @synthesize orderedAppSources=_orderedAppSources;
@property(readonly, copy, nonatomic) NSSet *allSources; // @synthesize allSources=_allSources;
- (void).cxx_destruct;
- (void)_sortSources:(id)arg1;
- (id)initWithSourceModels:(id)arg1;
- (id)initWithSources:(id)arg1;

@end

