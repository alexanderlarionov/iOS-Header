//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NAEquatable-Protocol.h>
#import <Home/NAHashable-Protocol.h>

@class NAIdentity;

@protocol NAIdentifiable <NAHashable, NAEquatable>
+ (NAIdentity *)na_identity;
@end
