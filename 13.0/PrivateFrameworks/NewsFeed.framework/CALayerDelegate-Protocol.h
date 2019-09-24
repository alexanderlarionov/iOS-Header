//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeed/NSObject-Protocol.h>

@class CALayer, NSString;
@protocol CAAction;

@protocol CALayerDelegate <NSObject>

@optional
- (id <CAAction>)actionForLayer:(CALayer *)arg1 forKey:(NSString *)arg2;
- (void)layoutSublayersOfLayer:(CALayer *)arg1;
- (void)layerWillDraw:(CALayer *)arg1;
- (void)drawLayer:(CALayer *)arg1 inContext:(struct CGContext *)arg2;
- (void)displayLayer:(CALayer *)arg1;
@end
