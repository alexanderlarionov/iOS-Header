//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSArray, NSData, NSOrderedSet, NSString, NSURL, WFCloudKitSyncToken, WFConfiguredTrigger, WFConfiguredTriggerRecord, WFDatabaseObjectDescriptor, WFDatabaseResult, WFWorkflowCreationOptions, WFWorkflowReference, WFWorkflowRunEvent;

@protocol WFDatabaseBackingStore <NSObject>
@property(readonly, nonatomic) NSURL *fileURL;
- (WFDatabaseResult *)deletedWorkflows;
- (NSArray *)referencesForWorkflowName:(NSString *)arg1;
- (void)setWorkflowOrdering:(NSOrderedSet *)arg1;
- (void)setSyncToken:(WFCloudKitSyncToken *)arg1;
- (WFCloudKitSyncToken *)syncToken;
- (void)clearTombstonesAndSyncState;
- (WFWorkflowRunEvent *)latestRunEvent;
- (NSArray *)sortedRunEventsForTriggerID:(NSString *)arg1;
- (NSArray *)sortedRunEventsWithSource:(NSString *)arg1;
- (WFDatabaseResult *)allConfiguredTriggers;
- (WFDatabaseResult *)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(NSString *)arg1;
- (WFDatabaseResult *)sortedVisibleWorkflowsByName;
- (WFDatabaseResult *)sortedVisibleWorkflows;
- (WFDatabaseResult *)sortedVisibleWorkflowsWithType:(NSString *)arg1;
- (_Bool)startObservingChangesForResult:(WFDatabaseResult *)arg1;
- (NSArray *)descriptorsForResult:(WFDatabaseResult *)arg1 error:(id *)arg2;
- (WFConfiguredTrigger *)createTriggerWithRecord:(WFConfiguredTriggerRecord *)arg1 workflow:(WFWorkflowReference *)arg2 error:(id *)arg3;
- (void)deleteAllAccessResourceStateDataForReference:(WFWorkflowReference *)arg1;
- (NSArray *)accessResourceStatesForReference:(WFWorkflowReference *)arg1;
- (void)setStateData:(NSData *)arg1 forAccessResourceWithIdentifier:(NSString *)arg2 forReference:(WFWorkflowReference *)arg3;
- (NSData *)currentStateDataForAccessResourceWithIdentifier:(NSString *)arg1 forReference:(WFWorkflowReference *)arg2;
- (_Bool)isReference:(WFWorkflowReference *)arg1 allowedToRunOnDomain:(NSString *)arg2;
- (void)setTrustedToRunScripts:(_Bool)arg1 forReference:(WFWorkflowReference *)arg2 onDomain:(NSString *)arg3;
- (void)setOutcome:(long long)arg1 forRunEvent:(WFWorkflowRunEvent *)arg2;
- (WFWorkflowRunEvent *)logRunOfWorkflow:(WFWorkflowReference *)arg1 withSource:(NSString *)arg2 triggerID:(NSString *)arg3;
- (void)setConflictingReference:(WFWorkflowReference *)arg1 forReference:(WFWorkflowReference *)arg2;
- (WFWorkflowReference *)conflictingReferenceForReference:(WFWorkflowReference *)arg1;
- (WFWorkflowReference *)duplicateReference:(WFWorkflowReference *)arg1 newName:(NSString *)arg2 error:(id *)arg3;
- (WFWorkflowReference *)createWorkflowWithOptions:(WFWorkflowCreationOptions *)arg1 error:(id *)arg2;
- (WFWorkflowReference *)workflowReferenceWithName:(NSString *)arg1;
- (_Bool)deleteReference:(WFDatabaseObjectDescriptor *)arg1 tombstone:(_Bool)arg2 error:(id *)arg3;
- (void)moveReferenceFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)performTransactionWithBlock:(void (^)(id *))arg1 error:(id *)arg2;
- (void)accessStorageForDescriptor:(WFDatabaseObjectDescriptor *)arg1 usingBlock:(void (^)(id <WFRecordStorage>, id *))arg2 withError:(id *)arg3;
- (void)refresh;
@end
