//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import <iWorkImport/TSDContainerRep-Protocol.h>

@class NSArray, NSObject, NSString, TSWPShapeRep;
@protocol TSDContainerInfo, TSKSearchReference;

__attribute__((visibility("hidden")))
@interface TSWPTextHostRep : TSDRep <TSDContainerRep>
{
    TSWPShapeRep *_editingRep;
    _Bool _useFindOverlayers;
    NSObject<TSKSearchReference> *_primaryFindResultSearchReference;
    NSArray *_searchReferences;
}

@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(readonly, nonatomic) _Bool useFindOverlayers; // @synthesize useFindOverlayers=_useFindOverlayers;
@property(retain, nonatomic) NSObject<TSKSearchReference> *primaryFindResultSearchReference; // @synthesize primaryFindResultSearchReference=_primaryFindResultSearchReference;
- (void).cxx_destruct;
- (void)drawTextBackground:(struct CGContext *)arg1 insetRect:(struct CGRect)arg2 pulsating:(_Bool)arg3;
- (void)drawTextBackground:(struct CGContext *)arg1 insetRect:(struct CGRect)arg2 pulsating:(_Bool)arg3 shouldTint:(_Bool)arg4;
- (void)setPulseControllerActive:(_Bool)arg1 autohide:(_Bool)arg2;
- (void)selectChildRep:(id)arg1 extendingSelection:(_Bool)arg2;
- (_Bool)canSelectChildRep:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
@property(readonly, nonatomic) NSArray *childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)updateChildrenFromLayout;
- (void)willBeRemoved;
- (void)dealloc;
- (void)finishInit;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
