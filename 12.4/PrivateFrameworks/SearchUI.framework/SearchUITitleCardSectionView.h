//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class NUIContainerBoxView, UILabel;

@interface SearchUITitleCardSectionView : SearchUICardSectionView
{
    UILabel *_label;
    NUIContainerBoxView *_containerView;
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property(retain) NUIContainerBoxView *containerView; // @synthesize containerView=_containerView;
@property(retain) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

@end

