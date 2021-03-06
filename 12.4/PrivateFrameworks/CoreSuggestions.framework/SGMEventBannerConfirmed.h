//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMEventBannerConfirmed : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_)arg2 category:(struct SGMEventCategory_)arg3 extracted:(struct SGMEventExtractionType_)arg4 state:(struct SGMEventState_)arg5 titleAdj:(struct SGMEventStringAdj_)arg6 dateAdj:(struct SGMEventDateAdj_)arg7 duraAdj:(struct SGMEventDurationAdj_)arg8;
- (id)init;

@end

