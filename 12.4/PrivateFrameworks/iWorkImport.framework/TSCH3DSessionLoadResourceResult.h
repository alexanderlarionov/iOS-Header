//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DResource, TSCH3DResourceHandle;

__attribute__((visibility("hidden")))
@interface TSCH3DSessionLoadResourceResult : NSObject
{
    _Bool _generated;
    _Bool _uploaded;
    _Bool _failed;
    TSCH3DResourceHandle *_handle;
    TSCH3DResource *_resource;
}

@property(retain, nonatomic) TSCH3DResource *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) TSCH3DResourceHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) _Bool failed; // @synthesize failed=_failed;
@property(nonatomic) _Bool uploaded; // @synthesize uploaded=_uploaded;
@property(nonatomic) _Bool generated; // @synthesize generated=_generated;
- (_Bool)exists;
- (void)dealloc;
- (id)init;

@end
