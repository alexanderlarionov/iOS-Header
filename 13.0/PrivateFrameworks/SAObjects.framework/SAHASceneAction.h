//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSURL, SAHAAction;

@interface SAHASceneAction : SADomainObject
{
}

+ (id)sceneActionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sceneAction;
@property(copy, nonatomic) NSURL *entityId;
@property(retain, nonatomic) SAHAAction *action;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
