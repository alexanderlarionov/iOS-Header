//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSCopying-Protocol.h>

@interface NSSDataContainerDataDestructionItem : NSObject <NSCopying>
{
    unsigned long long _containerClass;
    const char *_identifier;
}

@property(nonatomic) const char *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContainerClass:(unsigned long long)arg1 identifier:(const char *)arg2;
- (id)init;

@end

