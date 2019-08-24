//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, SKUIStorePageSectionContext, UIColor;

@interface SKUIStorePageSplit : NSObject <NSCopying>
{
    UIColor *_dividerColor;
    long long _numberOfPageSections;
    NSArray *_pageComponents;
    SKUIStorePageSectionContext *_sectionContext;
    double _widthFraction;
}

@property(nonatomic) double widthFraction; // @synthesize widthFraction=_widthFraction;
@property(retain, nonatomic) SKUIStorePageSectionContext *sectionContext; // @synthesize sectionContext=_sectionContext;
@property(copy, nonatomic) NSArray *pageComponents; // @synthesize pageComponents=_pageComponents;
@property(nonatomic) long long numberOfPageSections; // @synthesize numberOfPageSections=_numberOfPageSections;
@property(copy, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
