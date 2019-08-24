//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface QLDetailItemViewControllerState : NSObject
{
    _Bool _informationVisible;
    NSString *_actionButtonTitle;
    UIView *_actionButtonView;
}

+ (id)detailItemViewControllerStateWithActionButtonTitle:(id)arg1 actionButtonView:(id)arg2 informationVisible:(_Bool)arg3;
@property(getter=isInformationVisible) _Bool informationVisible; // @synthesize informationVisible=_informationVisible;
@property(retain) UIView *actionButtonView; // @synthesize actionButtonView=_actionButtonView;
@property(retain) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
- (void).cxx_destruct;

@end
