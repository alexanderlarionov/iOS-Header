//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/CTCellularPlanValidating-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CTCellularPlanSubscriptionAccountStatusParser : NSObject <CTCellularPlanValidating>
{
}

+ (_Bool)validate:(id)arg1;
+ (_Bool)validate:(id)arg1 parseTo:(int *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
