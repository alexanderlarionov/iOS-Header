//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupAppAuthorizationStatusRequest : SABaseClientBoundCommand
{
}

+ (id)appAuthorizationStatusRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appAuthorizationStatusRequest;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *appBundleIds;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
