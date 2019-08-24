//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SASetRemoteDevices : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)setRemoteDevicesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRemoteDevices;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *remoteDevices;
@property(nonatomic) _Bool remoteDeviceUnreachable;
@property(nonatomic) _Bool remoteDeviceNotSetup;
@property(nonatomic) _Bool remoteDeviceHasNoAssistantId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
