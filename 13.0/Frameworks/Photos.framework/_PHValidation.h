//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface _PHValidation : NSObject
{
    unsigned long long _requestedOptions;
    unsigned long long _validatedOptions;
    NSError *_error;
}

- (void).cxx_destruct;
- (_Bool)isValid:(id *)arg1;
- (void)assert:(_Bool)arg1 error:(id)arg2;
- (void)assert:(_Bool)arg1 format:(id)arg2;
- (void)validateOption:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithOptions:(unsigned long long)arg1;

@end
