//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutAnchor, NSLayoutConstraint, UIButton;

__attribute__((visibility("hidden")))
@interface RouteTableViewCellButtonConstraintsController : NSObject
{
    _Bool _buttonVisible;
    NSLayoutAnchor *_leadingAnchor;
    NSLayoutAnchor *_trailingAnchor;
    NSLayoutAnchor *_firstBaselineAnchor;
    double _leadingDistance;
    double _firstBaselineDistance;
    NSLayoutConstraint *_firstBaselineConstraintShown;
    NSArray *_constraintsWhenButtonHidden;
    NSArray *_constraintsWhenButtonShown;
    UIButton *_button;
}

@property(nonatomic, getter=isButtonVisible) _Bool buttonVisible; // @synthesize buttonVisible=_buttonVisible;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSArray *constraintsWhenButtonShown; // @synthesize constraintsWhenButtonShown=_constraintsWhenButtonShown;
@property(retain, nonatomic) NSArray *constraintsWhenButtonHidden; // @synthesize constraintsWhenButtonHidden=_constraintsWhenButtonHidden;
@property(readonly, nonatomic) NSLayoutConstraint *firstBaselineConstraintShown; // @synthesize firstBaselineConstraintShown=_firstBaselineConstraintShown;
@property(nonatomic) double firstBaselineDistance; // @synthesize firstBaselineDistance=_firstBaselineDistance;
@property(readonly, nonatomic) double leadingDistance; // @synthesize leadingDistance=_leadingDistance;
@property(readonly, nonatomic) NSLayoutAnchor *firstBaselineAnchor; // @synthesize firstBaselineAnchor=_firstBaselineAnchor;
@property(readonly, nonatomic) NSLayoutAnchor *trailingAnchor; // @synthesize trailingAnchor=_trailingAnchor;
@property(readonly, nonatomic) NSLayoutAnchor *leadingAnchor; // @synthesize leadingAnchor=_leadingAnchor;
- (void).cxx_destruct;
- (void)_invalidateButtonConstraints;
- (void)_updateActiveConstraintsToSetButtonVisible:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *initialConstraints;
- (id)initWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 firstBaselineAnchor:(id)arg3 leadingDistance:(double)arg4 firstBaselineDistance:(double)arg5;

@end
