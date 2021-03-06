//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBLeafIcon.h"

@class NSURL, SBBookmark, UIWebClip;

@interface SBBookmarkIcon : SBLeafIcon
{
    SBBookmark *_bookmark;
}

@property(readonly, nonatomic) SBBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (void).cxx_destruct;
- (_Bool)isBookmarkIcon;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)applicationToLaunch;
- (id)matchedWebApplication;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly, nonatomic) UIWebClip *webClip;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBookmark:(id)arg1;

@end

