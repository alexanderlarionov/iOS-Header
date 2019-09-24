//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSCopying-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    unsigned long long _stateFlags;
    int _ratingRank;
    unsigned long long _installType;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)addStateFlag:(unsigned long long)arg1;
- (id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3 installType:(unsigned long long)arg4;
@property(readonly, nonatomic, getter=isDowngraded) _Bool downgraded;
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked;
@property(readonly, nonatomic, getter=isRemovedSystemApp) _Bool removedSystemApp;
@property(readonly, nonatomic, getter=isAlwaysAvailable) _Bool alwaysAvailable;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end
