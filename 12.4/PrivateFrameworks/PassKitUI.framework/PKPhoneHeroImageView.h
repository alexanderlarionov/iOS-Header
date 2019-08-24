//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHeroImageView-Protocol.h>

@class NSString, UIImageView;

@interface PKPhoneHeroImageView : UIView <PKHeroImageView>
{
    UIImageView *_phoneView;
}

- (void).cxx_destruct;
- (struct CGSize)imageSize;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
