//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_fileSignature;
    NSData *_referenceSignature;
    NSData *_assetKey;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(copy, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(copy, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
