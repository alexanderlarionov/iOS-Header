//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapLine-Protocol.h>

@class GEOMapRequest, NSString;

@protocol GEOMapRoad <GEOMapLine>
@property(readonly, nonatomic) NSString *internalRoadName;
@property(readonly, nonatomic) int rampType;
@property(readonly, nonatomic) _Bool isRail;
@property(readonly, nonatomic) _Bool isBridge;
@property(readonly, nonatomic) _Bool isTunnel;
@property(readonly, nonatomic) unsigned long long roadID;
@property(readonly, nonatomic) _Bool speedLimitIsMPH;
@property(readonly, nonatomic) unsigned long long speedLimit;
@property(readonly, nonatomic) double roadWidth;
@property(readonly, nonatomic) int travelDirection;
@property(readonly, nonatomic) int formOfWay;
@property(readonly, nonatomic) int roadClass;
- (GEOMapRequest *)findRoadsToNextIntersection:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findRoadsFromNextIntersection:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findRoadsToPreviousIntersection:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findRoadsFromPreviousIntersection:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findRoadsFrom:(void (^)(id <GEOMapRoad>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (void)roadEdgesWithHandler:(void (^)(struct *))arg1;
- (void)roadFeaturesWithHandler:(void (^)(struct *))arg1;
@end
