//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADShadowEffect.h>

__attribute__((visibility("hidden")))
@interface OADPresetShadowEffect : OADShadowEffect
{
    int mPresetShadowType;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)equivalentOuterShadowEffect;
- (void)setPresetShadowType:(int)arg1;
- (int)presetShadowType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

