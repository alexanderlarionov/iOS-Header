//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKImageBrush.h>

#import <GameCenterUI/GKBrushIdentification-Protocol.h>

@class NSString;

@interface GKAvatarImageBrush : GKImageBrush <GKBrushIdentification>
{
    long long _dimension;
}

@property(nonatomic) long long dimension; // @synthesize dimension=_dimension;
- (id)renderedImageIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

