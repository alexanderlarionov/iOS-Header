//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol CarCardStyleProviding <NSObject>
- (UIView *)backgroundViewForCarCardLayout:(CDStruct_fd467f33)arg1 scale:(double)arg2 userInterfaceStyle:(long long)arg3;

@optional
@property(nonatomic, getter=isTransitioning) _Bool transitioning;
- (CDStruct_0af47fae)cornerMaskForCarCardLayout:(CDStruct_fd467f33)arg1;
- (CDStruct_fd467f33)validateCarCardLayout:(CDStruct_fd467f33)arg1;
@end
