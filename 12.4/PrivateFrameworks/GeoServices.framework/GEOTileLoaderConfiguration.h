//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOResourceManifestConfiguration, NSLocale, NSString;

@interface GEOTileLoaderConfiguration : NSObject <NSCopying>
{
    Class _serverProxyClass;
    _Bool _trackUsage;
    unsigned long long _memoryCacheCountLimit;
    unsigned long long _memoryCacheCostLimit;
    NSString *_diskCacheLocation;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
}

@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(copy, nonatomic) NSString *diskCacheLocation; // @synthesize diskCacheLocation=_diskCacheLocation;
@property(nonatomic) unsigned long long memoryCacheCostLimit; // @synthesize memoryCacheCostLimit=_memoryCacheCostLimit;
@property(nonatomic) unsigned long long memoryCacheCountLimit; // @synthesize memoryCacheCountLimit=_memoryCacheCountLimit;
@property(nonatomic) _Bool trackUsage; // @synthesize trackUsage=_trackUsage;
@property(nonatomic) Class serverProxyClass; // @synthesize serverProxyClass=_serverProxyClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

