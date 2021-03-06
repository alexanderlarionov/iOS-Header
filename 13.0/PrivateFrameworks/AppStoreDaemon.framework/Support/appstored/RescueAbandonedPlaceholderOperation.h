//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSString;

@interface RescueAbandonedPlaceholderOperation : Task
{
    NSString *_bundleID;
    CDUnknownBlockType _outputBlock;
}

- (void).cxx_destruct;
- (id)_fetchAppProxyForBundleID:(id)arg1 error:(id *)arg2;
- (_Bool)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id *)arg3;
- (void)_attemptRescueForBundleID:(id)arg1;
- (void)main;
@property(copy, nonatomic) CDUnknownBlockType outputBlock;
- (id)initWithBundleID:(id)arg1;

@end

