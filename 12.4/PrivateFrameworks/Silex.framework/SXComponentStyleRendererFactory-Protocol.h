//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXComponentStyle, SXComponentStyleRenderer;

@protocol SXComponentStyleRendererFactory <NSObject>
- (id <SXComponentStyleRenderer>)componentStyleRendererForComponentStyle:(id <SXComponentStyle>)arg1;
@end
