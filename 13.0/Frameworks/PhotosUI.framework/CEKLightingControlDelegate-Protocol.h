//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class CEKLightingControl;

@protocol CEKLightingControlDelegate <NSObject>
- (void)lightingControlDidChangeSelectedLightingType:(CEKLightingControl *)arg1;

@optional
- (void)lightingControlDidChangeExpanded:(CEKLightingControl *)arg1;
- (void)lightingControl:(CEKLightingControl *)arg1 willChangeExpanded:(_Bool)arg2;
@end
