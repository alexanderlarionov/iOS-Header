//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUICardViewElement, SKUIViewElementLayoutContext;

@interface SKUICardLayout : NSObject
{
    SKUICardViewElement *_cardViewElement;
    SKUIViewElementLayoutContext *_layoutContext;
    _Bool _hasBackground;
}

+ (id)layoutWithCardViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)allowsViewElement:(id)arg1;
@property(readonly, nonatomic) SKUICardViewElement *cardViewElement; // @synthesize cardViewElement=_cardViewElement;
@property(readonly, nonatomic) SKUIViewElementLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
- (void).cxx_destruct;
- (double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3;
- (struct CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;
@property(readonly, nonatomic) long long layoutStyle;
@property(readonly, nonatomic) double horizontalContentInset;
- (double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2;
- (id)attributedStringForLabel:(id)arg1;
- (id)attributedStringForButton:(id)arg1;

@end
