//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavXPCInterface-Protocol.h>

@class NSData;

@protocol NMCServerXPCInterface <GEONavXPCInterface>
- (void)invalidateNavigationSessionWithRouteContext:(NSData *)arg1;
- (void)pingForNavigationBarrier:(void (^)(void))arg1;
@end
