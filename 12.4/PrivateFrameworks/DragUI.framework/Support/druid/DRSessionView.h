//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class DRFlockContainer;
@protocol DRSessionViewDelegate;

@interface DRSessionView : UIView
{
    DRFlockContainer *_flockContainer;
    id <DRSessionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <DRSessionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) DRFlockContainer *flockContainer;
- (id)initWithFrame:(struct CGRect)arg1;

@end
