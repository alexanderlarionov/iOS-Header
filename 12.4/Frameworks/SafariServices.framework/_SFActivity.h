//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol _SFActivityDelegate;

@interface _SFActivity : UIActivity
{
    id <_SFActivityDelegate> _delegate;
}

@property(nonatomic) __weak id <_SFActivityDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)activityDidFinish:(_Bool)arg1;

@end

