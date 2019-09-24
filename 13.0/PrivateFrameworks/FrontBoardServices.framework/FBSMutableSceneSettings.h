//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings
{
}

+ (_Bool)_isMutable;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setOccluded:(_Bool)arg1;
@property(copy, nonatomic) NSArray *occlusions; // @dynamic occlusions;
- (void)_setDisplayConfiguration:(id)arg1;
- (id)transientLocalSettings;
- (id)ignoreOcclusionReasons;
- (id)otherSettings;
@property(nonatomic, getter=isBackgrounded) _Bool backgrounded; // @dynamic backgrounded;
@property(nonatomic, getter=isForeground) _Bool foreground; // @dynamic foreground;
@property(nonatomic) long long interfaceOrientation; // @dynamic interfaceOrientation;
@property(nonatomic) double level; // @dynamic level;
@property(nonatomic) struct CGRect frame; // @dynamic frame;
- (void)setDisplayConfiguration:(id)arg1;

@end
