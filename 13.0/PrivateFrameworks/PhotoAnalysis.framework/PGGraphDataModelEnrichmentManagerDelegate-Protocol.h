//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class PGGraphDataModelEnrichmentManager;
@protocol PGGraphDataModelEnrichmentProcessor;

@protocol PGGraphDataModelEnrichmentManagerDelegate <NSObject>
- (void)enrichmentManager:(PGGraphDataModelEnrichmentManager *)arg1 didCancelProcessor:(id <PGGraphDataModelEnrichmentProcessor>)arg2;
- (void)enrichmentManager:(PGGraphDataModelEnrichmentManager *)arg1 didRunProcessor:(id <PGGraphDataModelEnrichmentProcessor>)arg2;
- (_Bool)enrichmentManager:(PGGraphDataModelEnrichmentManager *)arg1 shouldRunProcessor:(id <PGGraphDataModelEnrichmentProcessor>)arg2;
@end

