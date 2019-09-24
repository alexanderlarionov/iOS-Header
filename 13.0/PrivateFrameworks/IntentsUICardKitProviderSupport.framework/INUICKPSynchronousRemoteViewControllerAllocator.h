//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IntentsUICardKitProviderSupport/INUICKPInterfaceSectionOrganizing-Protocol.h>
#import <IntentsUICardKitProviderSupport/INUICKPSynchronousRemoteViewControllerDelegate-Protocol.h>
#import <IntentsUICardKitProviderSupport/INUICKPViewControllerAllocating-Protocol.h>

@class INInteraction, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol INUICKPViewControllerAllocatingDelegate;

@interface INUICKPSynchronousRemoteViewControllerAllocator : NSObject <INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate, INUICKPViewControllerAllocating>
{
    Class _synchronousRemoteViewControllerClass;
    _Bool _requiresUserConsent;
    id <INUICKPViewControllerAllocatingDelegate> delegate;
    NSMutableArray *_mutableSynchronousRemoteViewControllers;
    INInteraction *_interaction;
    NSMutableArray *_finalInterfaceSections;
    NSMutableSet *_handledParameters;
    NSMutableDictionary *_mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
    NSMutableArray *_mutableRedundantInterfaceSections;
}

@property(readonly, nonatomic) NSMutableArray *mutableRedundantInterfaceSections; // @synthesize mutableRedundantInterfaceSections=_mutableRedundantInterfaceSections;
@property(readonly, nonatomic) NSMutableDictionary *mutableSynchronousRemoteViewControllersByInitialInterfaceSection; // @synthesize mutableSynchronousRemoteViewControllersByInitialInterfaceSection=_mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
@property(readonly, nonatomic) NSMutableSet *handledParameters; // @synthesize handledParameters=_handledParameters;
@property(readonly, nonatomic) NSMutableArray *finalInterfaceSections; // @synthesize finalInterfaceSections=_finalInterfaceSections;
@property(retain, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(readonly, nonatomic) NSMutableArray *mutableSynchronousRemoteViewControllers; // @synthesize mutableSynchronousRemoteViewControllers=_mutableSynchronousRemoteViewControllers;
@property(nonatomic) _Bool requiresUserConsent; // @synthesize requiresUserConsent=_requiresUserConsent;
@property(nonatomic) __weak id <INUICKPViewControllerAllocatingDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (double)boundingWidthForSynchronousRemoteViewController:(id)arg1;
- (id)organizedInterfaceSections;
- (id)_unhandledParametersForInterfaceSection:(id)arg1;
- (void)_recursivelyConnectForInterfaceSectionQueue:(id)arg1 recursionDepth:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_beginRecursivelyConnectingForInterfaceSectionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *redundantInterfaceSections;
@property(readonly, copy, nonatomic) NSDictionary *viewControllersByInitialInterfaceSection;
@property(readonly, copy, nonatomic) NSArray *allocatedViewControllers;
- (void)performAllocationsFromInteraction:(id)arg1 initialInterfaceSections:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSynchronousRemoteViewControllerClass:(Class)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
