//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAMPLoadQP : SADomainCommand
{
}

+ (id)loadQPWithDictionary:(id)arg1 context:(id)arg2;
+ (id)loadQP;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *startPlaying;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

