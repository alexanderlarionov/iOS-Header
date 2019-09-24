//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSXPCCoding-Protocol.h>
#import <UIKitServices/NSCopying-Protocol.h>
#import <UIKitServices/NSMutableCopying-Protocol.h>

@class NSDictionary, NSString;

@interface UISDeviceContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>
{
    NSDictionary *_deviceInfoKeysToValues;
}

+ (id)_allKeys;
+ (id)_keysToValueTypes;
+ (id)defaultContext;
- (void).cxx_destruct;
- (id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1;
- (id)_rawDeviceInfoKeysToValues;
- (_Bool)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2;
- (_Bool)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2;
- (long long)_valueTypeForValue:(id)arg1;
- (long long)_valueTypeForKey:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)deviceInfoStringValueForKey:(id)arg1;
- (_Bool)deviceInfoBoolValueForKey:(id)arg1;
- (long long)deviceInfoIntegerValueForKey:(id)arg1;
- (double)deviceInfoFloatValueForKey:(id)arg1;
- (_Bool)hasDeviceInfoValueForKey:(id)arg1;
- (id)initWithDeviceInfoValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
