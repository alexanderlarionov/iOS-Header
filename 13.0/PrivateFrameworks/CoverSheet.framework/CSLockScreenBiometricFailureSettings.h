//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenBiometricFailureSettings : PTSettings
{
    _Bool _jiggleLock;
    _Bool _vibrate;
    _Bool _showPasscode;
    _Bool _waitUntilButtonUp;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool waitUntilButtonUp; // @synthesize waitUntilButtonUp=_waitUntilButtonUp;
@property(nonatomic) _Bool showPasscode; // @synthesize showPasscode=_showPasscode;
@property(nonatomic) _Bool vibrate; // @synthesize vibrate=_vibrate;
@property(nonatomic) _Bool jiggleLock; // @synthesize jiggleLock=_jiggleLock;
- (void)setDefaultValues;

@end

