//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRCarKitServiceClient;

@interface CRUsageInformation : NSObject
{
    CRCarKitServiceClient *_serviceClient;
}

@property(retain, nonatomic) CRCarKitServiceClient *serviceClient; // @synthesize serviceClient=_serviceClient;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldSuggestCarPlayTips;
- (id)init;

@end
