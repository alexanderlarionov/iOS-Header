//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerBoxView.h>

@class TLKTextView;

__attribute__((visibility("hidden")))
@interface TLKDescriptionContainerBoxView : NUIContainerBoxView
{
    TLKTextView *_descriptionViewBaselineView;
}

@property(retain, nonatomic) TLKTextView *descriptionViewBaselineView; // @synthesize descriptionViewBaselineView=_descriptionViewBaselineView;
- (void).cxx_destruct;
- (id)calculateViewForLastBaselineLayout;
- (id)calculateViewForFirstBaselineLayout;

@end
