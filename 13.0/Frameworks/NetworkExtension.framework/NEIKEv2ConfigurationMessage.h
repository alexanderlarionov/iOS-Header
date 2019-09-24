//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSArray;

@interface NEIKEv2ConfigurationMessage : NSObject <NSCopying>
{
    unsigned long long _configurationType;
    NSArray *_attributes;
}

+ (id)copyConfigurationForRequest:(id)arg1 reply:(id)arg2;
@property(retain) NSArray *attributes; // @synthesize attributes=_attributes;
@property unsigned long long configurationType; // @synthesize configurationType=_configurationType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithWithAttributes:(id)arg1;

@end
