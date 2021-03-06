//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIImage;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerAppearance : NSObject
{
    _Bool _navigationBarIsTranslucent;
    long long _statusBarStyle;
    UIImage *_navigationBarBackgroundImage;
    long long _navigationBarStyle;
}

+ (id)photoPickerAppearanceFromViewController:(id)arg1;
+ (id)photoPickerAppearanceFromDictionary:(id)arg1;
@property(nonatomic) _Bool navigationBarIsTranslucent; // @synthesize navigationBarIsTranslucent=_navigationBarIsTranslucent;
@property(nonatomic) long long navigationBarStyle; // @synthesize navigationBarStyle=_navigationBarStyle;
@property(retain, nonatomic) UIImage *navigationBarBackgroundImage; // @synthesize navigationBarBackgroundImage=_navigationBarBackgroundImage;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;

@end

