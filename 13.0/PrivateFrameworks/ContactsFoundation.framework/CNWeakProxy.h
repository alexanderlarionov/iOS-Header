//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@interface CNWeakProxy : NSProxy
{
    Class _targetClass;
    id _weakReference;
}

+ (id)weakProxyWithObject:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1;

@end
