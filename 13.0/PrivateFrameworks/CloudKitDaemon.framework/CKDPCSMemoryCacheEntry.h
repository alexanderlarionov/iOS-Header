//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDPCSData;

__attribute__((visibility("hidden")))
@interface CKDPCSMemoryCacheEntry : NSObject
{
    CKDPCSData *_pcsData;
    double _lastAccess;
}

@property double lastAccess; // @synthesize lastAccess=_lastAccess;
@property(retain, nonatomic) CKDPCSData *pcsData; // @synthesize pcsData=_pcsData;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)init;

@end
