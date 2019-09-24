//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudContainerObserver-Protocol.h>
#import <MapsSupport/MSPContainerObserver-Protocol.h>

@class MSPCloudContainer, MSPCloudSynchronizer, MSPContainer, NSString;

@interface MSPSynchronizedContainer : NSObject <MSPContainerObserver, MSPCloudContainerObserver>
{
    _Bool _requiresMerge;
    MSPCloudSynchronizer *_synchronizer;
    MSPContainer *_container;
    MSPCloudContainer *_cloudContainer;
}

@property(nonatomic) _Bool requiresMerge; // @synthesize requiresMerge=_requiresMerge;
@property(retain, nonatomic) MSPCloudContainer *cloudContainer; // @synthesize cloudContainer=_cloudContainer;
@property(retain, nonatomic) MSPContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) MSPCloudSynchronizer *synchronizer; // @synthesize synchronizer=_synchronizer;
- (void).cxx_destruct;
- (void)cloudContainerDidChange:(id)arg1;
- (void)containerDidEraseContents:(id)arg1 fromStorageTypes:(unsigned long long)arg2;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
@property(readonly, copy) NSString *description;
- (void)mergeWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareCloudWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setRequiresMerge:(_Bool)arg1 withReason:(unsigned long long)arg2;
- (id)initWithContainer:(id)arg1 synchronizer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
