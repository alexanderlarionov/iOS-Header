//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataAccess/DAContainer-Protocol.h>

@class CNMutableContainer, NSString;

@interface DAContactsContainer : NSObject <DAContainer>
{
    _Bool _markedForDeletion;
    _Bool _markedAsDefault;
    CNMutableContainer *_mutableContainer;
}

@property(nonatomic) _Bool markedAsDefault; // @synthesize markedAsDefault=_markedAsDefault;
@property(nonatomic) _Bool markedForDeletion; // @synthesize markedForDeletion=_markedForDeletion;
@property(readonly, nonatomic) CNMutableContainer *mutableContainer; // @synthesize mutableContainer=_mutableContainer;
- (void).cxx_destruct;
- (id)asContainer;
- (void *)asSource;
- (void)updateSaveRequest:(id)arg1;
- (_Bool)isAccount;
- (_Bool)isContainer;
- (_Bool)isGroup;
- (_Bool)isContact;
- (void)markAsDefault;
- (void)markForDeletion;
- (_Bool)isSearchContainer;
@property(nonatomic, getter=isGuardianStateDirty) _Bool guardianStateDirty;
@property(nonatomic, getter=isGuardianRestricted) _Bool guardianRestricted;
- (void)setArePropertiesReadonly:(_Bool)arg1;
- (_Bool)arePropertiesReadonly;
- (void)setContentReadonly:(_Bool)arg1;
- (_Bool)isContentReadonly;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setMeContactIdentifier:(id)arg1;
- (id)meContactIdentifier;
- (void)setConstraintsPath:(id)arg1;
- (id)constraintsPath;
- (void)setSyncData:(id)arg1;
- (id)syncData;
- (void)setSyncTag:(id)arg1;
- (id)syncTag;
- (void)setCTag:(id)arg1;
- (id)cTag;
- (void)setExternalIdentifier:(id)arg1;
- (id)externalIdentifier;
- (void)setType:(long long)arg1;
- (long long)type;
- (_Bool)isLocal;
- (void)setName:(id)arg1;
- (id)name;
- (id)identifier;
- (id)initWithCNContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
