//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXGradientFactory-Protocol.h>

@class NSString;

@interface SXGradientFactory : NSObject <SXGradientFactory>
{
}

- (id)locationsFromColorStops:(id)arg1;
- (id)colorsFromColorStops:(id)arg1;
- (id)gradientForColorStops:(id)arg1 angle:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

