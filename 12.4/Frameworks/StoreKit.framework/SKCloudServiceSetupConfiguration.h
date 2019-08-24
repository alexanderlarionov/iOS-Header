//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/NSCopying-Protocol.h>
#import <StoreKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface SKCloudServiceSetupConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _targetsFinanceApplication;
    _Bool _forPublicSDK;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool forPublicSDK; // @synthesize forPublicSDK=_forPublicSDK;
@property(nonatomic) _Bool targetsFinanceApplication; // @synthesize targetsFinanceApplication=_targetsFinanceApplication;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end
