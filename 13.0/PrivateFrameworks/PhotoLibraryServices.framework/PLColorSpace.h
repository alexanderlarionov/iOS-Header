//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLColorSpace : NSObject
{
    NSString *_colorSpaceName;
}

+ (id)commonColorSpace_displaySpace;
+ (id)commonColorSpace_unspecified;
+ (id)commonColorSpace_sRGB;
+ (id)colorSpaceFromName:(id)arg1;
@property(copy, nonatomic) NSString *colorSpaceName; // @synthesize colorSpaceName=_colorSpaceName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1;

@end
