//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>
#import <Silex/SXTextStyleFontDescribing-Protocol.h>

@class SXJSONArray, SXTextDecoration, SXTextShadow, SXTextStroke, UIColor;

@protocol SXConditionalTextStyleProperties <NSObject, SXTextStyleFontDescribing>
@property(readonly, nonatomic) SXTextStroke *stroke;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) SXJSONArray *listStyle;
@property(readonly, nonatomic) SXTextDecoration *strikethrough;
@property(readonly, nonatomic) SXTextDecoration *underline;
@property(readonly, nonatomic) double tracking;
@property(readonly, nonatomic) long long textTransform;
@property(readonly, nonatomic) SXTextShadow *textShadow;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) long long fontSize;
@end
