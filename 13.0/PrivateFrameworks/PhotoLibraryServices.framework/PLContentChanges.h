//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PLContentChanges : NSObject
{
    NSMutableArray *_container;
    NSMutableArray *_updatedContent;
}

@property(retain, nonatomic) NSMutableArray *updatedContent; // @synthesize updatedContent=_updatedContent;
@property(retain, nonatomic) NSMutableArray *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)cleanupState;

@end

