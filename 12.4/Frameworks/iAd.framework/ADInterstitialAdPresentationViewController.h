//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ADCountdownButton, ADInterstitialAd;

@interface ADInterstitialAdPresentationViewController : UIViewController
{
    ADInterstitialAd *_interstitialAd;
    ADCountdownButton *_closeButton;
}

@property(retain, nonatomic) ADCountdownButton *closeButton; // @synthesize closeButton=_closeButton;
- (_Bool)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)wantsFullScreenLayout;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
@property(readonly, nonatomic) __weak ADInterstitialAd *interstitialAd;
- (id)initForInterstitialAd:(id)arg1;
- (void)dealloc;

@end
