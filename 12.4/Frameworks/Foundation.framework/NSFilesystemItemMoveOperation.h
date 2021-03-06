//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSURL;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemMoveOperation : NSOperation
{
    id _delegate;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    NSError *_error;
    unsigned long long _options;
}

+ (id)filesystemItemMoveOperationWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3;
+ (id)_errorWithErrno:(int)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3;
- (void)main;
- (void)_setError:(id)arg1;
- (id)error;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (_Bool)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (void)dealloc;
- (void)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3;

@end

