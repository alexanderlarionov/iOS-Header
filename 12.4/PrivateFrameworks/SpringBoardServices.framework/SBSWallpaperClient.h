//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSWallpaperClient : FBSServiceFacilityClient
{
}

- (_Bool)setWallpaperWithVideo:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)fetchThumbnailForVariant:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;

@end
