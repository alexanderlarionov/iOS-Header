//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskEntry : NSObject <NSCopying>
{
    CDUnknownBlockType __task;
    NSArray *__creationStack;
}

@property(readonly, retain, nonatomic) NSArray *originatingStack; // @synthesize originatingStack=__creationStack;
- (void)execute:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(CDUnknownBlockType)arg1;

@end

