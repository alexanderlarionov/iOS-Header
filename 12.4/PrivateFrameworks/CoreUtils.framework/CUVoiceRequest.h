//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VSSpeechRequest;

__attribute__((visibility("hidden")))
@interface CUVoiceRequest : NSObject
{
    unsigned int _flags;
    CDUnknownBlockType _completion;
    id _owner;
    VSSpeechRequest *_speechRequest;
}

@property(retain, nonatomic) VSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;

@end
