//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCKZoneDiff, SCKZoneSchema;
@protocol SCKZoneStore;

@interface SCKZone : NSObject
{
    SCKZoneSchema *_schema;
    id <SCKZoneStore> _store;
}

@property(retain, nonatomic) id <SCKZoneStore> store; // @synthesize store=_store;
@property(readonly, nonatomic) SCKZoneSchema *schema; // @synthesize schema=_schema;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDirty) _Bool dirty;
@property(readonly, nonatomic) _Bool needsFirstSync;
@property(readonly, copy, nonatomic) SCKZoneDiff *clientDiff;
@property(readonly, copy, nonatomic) NSArray *clientRecords;
- (id)initWithSchema:(id)arg1 store:(id)arg2;

@end
