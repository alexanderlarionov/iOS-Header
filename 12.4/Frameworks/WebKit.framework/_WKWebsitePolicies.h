//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSDictionary, NSString, WKWebsiteDataStore;

@interface _WKWebsitePolicies : NSObject <WKObject>
{
    struct ObjectStorage<API::WebsitePolicies> _websitePolicies;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *customNavigatorPlatform;
@property(copy, nonatomic) NSString *customUserAgent;
@property(retain, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property(copy, nonatomic) NSDictionary *customHeaderFields;
@property(nonatomic) unsigned long long popUpPolicy;
@property(nonatomic) long long autoplayPolicy;
@property(nonatomic) unsigned long long allowedAutoplayQuirks;
@property(nonatomic) _Bool deviceOrientationEventEnabled;
@property(nonatomic) _Bool contentBlockersEnabled;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
