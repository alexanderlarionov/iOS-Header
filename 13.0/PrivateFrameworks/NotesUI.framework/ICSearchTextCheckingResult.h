//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface ICSearchTextCheckingResult : NSTextCheckingResult
{
    NSString *_csEvaluatorMatchString;
    struct _NSRange _ic_range;
}

@property(nonatomic) struct _NSRange ic_range; // @synthesize ic_range=_ic_range;
@property(retain, nonatomic) NSString *csEvaluatorMatchString; // @synthesize csEvaluatorMatchString=_csEvaluatorMatchString;
- (void).cxx_destruct;
- (struct _NSRange)range;
- (id)initWithRange:(struct _NSRange)arg1 csEvaluatorMatchString:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1;

@end
