//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CNFuture, NSArray;
@protocol CNUICoreFamilyMemberCandidateContactsContainer;

@protocol CNUICoreFamilyMemberContactsUpdating
- (CNFuture *)updateContactWhitelistByRemovingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactWhitelistByAddingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactWhitelistByAddingContactsFromCandidateContacts:(id <CNUICoreFamilyMemberCandidateContactsContainer>)arg1;
- (CNFuture *)updateContactListByRemovingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByUpdatingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByAddingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByAddingContactsFromCandidateContacts:(id <CNUICoreFamilyMemberCandidateContactsContainer>)arg1;
@end
