//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIViewControllerWrapperView : UIView
{
    _Bool _tightWrappingDisabled;
}

+ (id)existingWrapperViewForView:(id)arg1;
+ (id)wrapperViewForView:(id)arg1 wrapperFrame:(struct CGRect)arg2 viewFrame:(struct CGRect)arg3;
+ (id)wrapperViewForView:(id)arg1 frame:(struct CGRect)arg2;
@property(nonatomic) _Bool tightWrappingDisabled; // @synthesize tightWrappingDisabled=_tightWrappingDisabled;
- (void)unwrapView:(id)arg1;
- (void)unwrapView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end
