//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, PDFCollectionView, PDFView, UIColor;

__attribute__((visibility("hidden")))
@interface PDFThumbnailViewPrivateVars : NSObject
{
    PDFView *PDFView;
    UIColor *backgroundColor;
    struct CGSize thumbnailSize;
    PDFCollectionView *collectionView;
    NSLayoutConstraint *topInsetConstraint;
    NSLayoutConstraint *bottomInsetConstraint;
    NSLayoutConstraint *leftInsetConstraint;
    NSLayoutConstraint *rightInsetConstraint;
    long long layoutMode;
}

- (void).cxx_destruct;

@end

