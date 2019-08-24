//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputContext/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol _ICPredictionManaging <NSObject>
- (void)hibernate;
- (void)warmUp;
- (NSArray *)searchForMeCardEmailAddresses;
- (NSArray *)searchForMeCardRegions;
- (void)reset;
- (void)predictedItemSelected:(NSString *)arg1;
- (NSArray *)lastCachedResultWithInitialCharacters:(NSString *)arg1;
- (NSArray *)searchWithTriggers:(NSArray *)arg1 application:(NSString *)arg2 recipient:(NSString *)arg3 localeIdentifier:(NSString *)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;
@end
