//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CATiledLayer.h>

#import <CorePDF/UIPDFSelectionLayer-Protocol.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer>
{
    CALayer *_selectionLayer;
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (void)setSelectionNeedsDisplay;
- (void)dealloc;
- (id)init;

@end
