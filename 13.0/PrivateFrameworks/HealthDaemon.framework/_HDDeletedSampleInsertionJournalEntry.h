//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class HDDataOriginProvenance, NSArray;

@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry
{
    NSArray *_samples;
    HDDataOriginProvenance *_provenance;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
@property(readonly, copy, nonatomic) HDDataOriginProvenance *provenance; // @synthesize provenance=_provenance;
@property(readonly, copy, nonatomic) NSArray *samples; // @synthesize samples=_samples;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodableDeletedSamples:(id)arg1 provenance:(id)arg2;

@end

