//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

#import <Silex/SXTextSourceDataSource-Protocol.h>

@class NSString, SXTextLayouter;

@interface SXButtonComponentSizer : SXComponentSizer <SXTextSourceDataSource>
{
    SXTextLayouter *_textLayouter;
}

@property(readonly, nonatomic) SXTextLayouter *textLayouter; // @synthesize textLayouter=_textLayouter;
- (void).cxx_destruct;
- (id)textStyleForIdentifier:(id)arg1;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (id)linkStyleForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(_Bool)arg2;
- (id)textResizerForTextSource:(id)arg1;
- (struct UIEdgeInsets)layoutMarginsWithUnitConverter:(id)arg1;
- (struct UIEdgeInsets)contentInsetsWithUnitConverter:(id)arg1;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 textProvider:(id)arg6 textComponentLayoutHosting:(id)arg7 textSourceFactory:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
