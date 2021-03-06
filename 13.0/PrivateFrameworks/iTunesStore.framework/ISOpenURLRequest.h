//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface ISOpenURLRequest : NSObject <NSCopying>
{
    _Bool _isITunesStoreURL;
    NSString *_targetIdentifier;
    NSString *_urlBagKey;
    NSURL *_url;
    _Bool _interruptsKeybagRefresh;
}

+ (id)openURLRequestWithURL:(id)arg1;
@property(copy, nonatomic) NSString *URLBagKey; // @synthesize URLBagKey=_urlBagKey;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(nonatomic, getter=isITunesStoreURL) _Bool ITunesStoreURL; // @synthesize ITunesStoreURL=_isITunesStoreURL;
@property(nonatomic) _Bool interruptsKeybagRefresh; // @synthesize interruptsKeybagRefresh=_interruptsKeybagRefresh;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLBagKey:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

