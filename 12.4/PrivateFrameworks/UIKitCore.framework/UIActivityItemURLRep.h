//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface UIActivityItemURLRep : NSObject
{
    NSURL *_URL;
    UIImage *_thumbnail;
    long long _attachmentURLType;
}

@property(nonatomic) long long attachmentURLType; // @synthesize attachmentURLType=_attachmentURLType;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)scheme;
- (_Bool)isFileURL;

@end

