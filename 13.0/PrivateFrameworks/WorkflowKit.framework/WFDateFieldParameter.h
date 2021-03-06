//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTextInputParameter.h>

@class NSDateFormatter, NSString;

@interface WFDateFieldParameter : WFTextInputParameter
{
    NSDateFormatter *_hintDateFormatter;
    NSString *_reactiveParameterKey;
    NSString *_hintDateMode;
}

@property(readonly, nonatomic) NSString *hintDateMode; // @synthesize hintDateMode=_hintDateMode;
@property(readonly, nonatomic) NSString *reactiveParameterKey; // @synthesize reactiveParameterKey=_reactiveParameterKey;
- (void).cxx_destruct;
- (id)localizedIncompleteHintString;
- (id)hintForState:(id)arg1;
@property(readonly, nonatomic) NSDateFormatter *hintDateFormatter; // @synthesize hintDateFormatter=_hintDateFormatter;
- (_Bool)dateOnlyMode;
- (_Bool)timeOnlyMode;
- (id)initWithDefinition:(id)arg1;

@end

