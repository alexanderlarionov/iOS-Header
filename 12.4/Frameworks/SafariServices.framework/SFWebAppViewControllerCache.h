//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SFWebAppViewControllerCache : NSObject
{
    NSMutableDictionary *_webViewControllers;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)clearWebViewController:(id)arg1;
- (id)takeWebViewControllerWithIdentifier:(id)arg1;
- (void)setWebViewController:(id)arg1 forIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;

@end

