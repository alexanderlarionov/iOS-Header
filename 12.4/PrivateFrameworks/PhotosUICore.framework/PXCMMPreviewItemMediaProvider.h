//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXCMMPreviewItemMediaProvider : NSObject
{
}

- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForParticipant:(id)arg1 targetSize:(struct CGSize)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (struct CGSize)imageSizeForPreviewItem:(id)arg1;

@end
