//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointInstant : CUTCheckpointSignpost
{
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (id)description;
- (void)mergeWithCheckpoint:(id)arg1;
- (void)_touchDate;
- (id)initWithDate:(id)arg1 name:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;

@end

