//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKExpandingLabel, NSArray, TransitSignView;

@protocol TransitSignViewDelegate <NSObject>
- (void)transitSignView:(TransitSignView *)arg1 incidentButtonTappedForIncidents:(NSArray *)arg2;
- (void)transitSignView:(TransitSignView *)arg1 expandingLabelDidExpand:(MKExpandingLabel *)arg2;
- (void)transitSignViewDidTapClusteredRoutesButton:(TransitSignView *)arg1;
@end
