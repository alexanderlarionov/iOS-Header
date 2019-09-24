//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface User : NSObject
{
    NSString *_biometricsToken;
    NSString *_DSID;
    NSString *_password;
    NSString *_username;
}

@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(readonly, nonatomic) NSString *biometricsToken; // @synthesize biometricsToken=_biometricsToken;
- (void).cxx_destruct;
- (id)description;
- (id)compile;
- (id)initWithDSID:(id)arg1 username:(id)arg2 password:(id)arg3 biometricsToken:(id)arg4;
- (id)initWithDictionary:(id)arg1;

@end
