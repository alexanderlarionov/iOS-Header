//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsPredictor-Protocol.h>

@class MapsSuggestionsSignalPackCache, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsSignalPackCache *_signalPackCache;
    int _tempPredictedTransportMode;
}

+ (id)sharedPredictor;
- (void).cxx_destruct;
- (void)_unscheduleCloseConnection;
- (void)_scheduleCloseConnection;
- (void)_initCloseTimerIfNecessary;
- (void)_closeConnection;
- (_Bool)_openConnectionIfNecessary;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)cancelCapturingAnalytics;
- (void)capturePredictedTransportationMode:(int)arg1;
- (void)captureActualTransportationMode:(int)arg1 withMapItem:(struct GEOMapItemStorage *)arg2;
- (_Bool)predictedTransportModeForDestinationMapItem:(struct GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
