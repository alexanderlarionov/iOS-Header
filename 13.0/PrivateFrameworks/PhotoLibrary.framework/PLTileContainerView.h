//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PLPhotoTileViewController;

@interface PLTileContainerView : UIView
{
    PLPhotoTileViewController *_photoTileController;
}

- (_Bool)canBecomeFirstResponder;
- (void)clearBackReference;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 photoTileController:(id)arg2;

@end
