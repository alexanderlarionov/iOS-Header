//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol FROpenChannelActivityDelegate;

@interface FROpenChannelActivity : UIActivity
{
    id <FROpenChannelActivityDelegate> _delegate;
}

@property(retain, nonatomic) id <FROpenChannelActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;

@end

