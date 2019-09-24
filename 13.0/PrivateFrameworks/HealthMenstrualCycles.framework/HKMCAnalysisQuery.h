//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@interface HKMCAnalysisQuery : HKQuery
{
    CDUnknownBlockType _updateHandler;
}

+ (id)clientInterfaceProtocol;
- (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)arg1;
- (_Bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)client_deliverAnalysis:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1;

@end
