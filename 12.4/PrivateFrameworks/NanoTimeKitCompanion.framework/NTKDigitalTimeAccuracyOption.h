//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKDigitalTimeAccuracyOption : NTKEnumeratedEditOption
{
}

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (long long)indexForAccuracy:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithAccuracy:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) unsigned long long accuracy;

@end

