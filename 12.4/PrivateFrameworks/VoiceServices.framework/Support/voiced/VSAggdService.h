//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSAggdService : NSObject
{
    NSString *_loggingPrefix;
}

+ (id)defaultService;
@property(retain, nonatomic) NSString *loggingPrefix; // @synthesize loggingPrefix=_loggingPrefix;
- (void).cxx_destruct;
- (void)tallySynthesisCore:(id)arg1;
- (void)tallyTask:(id)arg1;
- (void)recordCategory:(id)arg1 value:(id)arg2;
- (id)initWithLoggingPrefix:(id)arg1;

@end
