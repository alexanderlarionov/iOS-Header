//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol AXPIFingerAppearanceDelegate;

@interface AXPIPinchChainView : UIView
{
    _Bool _pressed;
    _Bool _selected;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect)arg1;

@end
