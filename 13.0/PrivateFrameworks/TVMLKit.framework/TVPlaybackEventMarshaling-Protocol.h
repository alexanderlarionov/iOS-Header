//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/NSObject-Protocol.h>

@class JSContext, JSValue, NSDictionary;

@protocol TVPlaybackEventMarshaling <NSObject>
@property(readonly, nonatomic) NSDictionary *properties;

@optional
- (void)processReturnJSValue:(JSValue *)arg1 inContext:(JSContext *)arg2;
@end
