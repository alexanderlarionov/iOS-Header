//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface DCSinglePixelLineView : UIView
{
    _Bool _hasSetUpSizeConstraint;
}

@property(nonatomic) _Bool hasSetUpSizeConstraint; // @synthesize hasSetUpSizeConstraint=_hasSetUpSizeConstraint;
- (id)addSizeConstraint;
- (id)findSizeLayoutConstraintIfExists;
- (void)setUpHeightConstraintIfNecessary;
- (void)updateConstraints;

@end
