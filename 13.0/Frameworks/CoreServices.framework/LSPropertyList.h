//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _LSLazyPropertyList;

__attribute__((visibility("hidden")))
@interface LSPropertyList : NSObject
{
    _LSLazyPropertyList *_lazyPropertyList;
}

+ (id)new;
@property(retain) _LSLazyPropertyList *lazyPropertyList; // @synthesize lazyPropertyList=_lazyPropertyList;
- (void).cxx_destruct;
- (id)_initWithLazyPropertyList:(id)arg1;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectsForKeys:(id)arg1;
- (id)init;

@end
