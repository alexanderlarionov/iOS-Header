//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSData, NSSet, NSURL, QLPreviewContext, QLSpotlightSearchableItemInfo;

@protocol QLItemTransformerProtocol <NSObject>
+ (NSSet *)allowedOutputClasses;

@optional
- (id)transformedContentsFromSpotlightSearchableItemInfo:(QLSpotlightSearchableItemInfo *)arg1 context:(QLPreviewContext *)arg2 error:(id *)arg3;
- (id)transformedContentsFromData:(NSData *)arg1 context:(QLPreviewContext *)arg2 error:(id *)arg3;
- (id)transformedContentsFromURL:(NSURL *)arg1 context:(QLPreviewContext *)arg2 error:(id *)arg3;
@end
