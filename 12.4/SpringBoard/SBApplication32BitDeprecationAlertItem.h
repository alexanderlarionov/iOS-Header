//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem
{
    SBApplication *_associatedDisplay;
}

@property(nonatomic) __weak SBApplication *associatedDisplay; // @synthesize associatedDisplay=_associatedDisplay;
- (void).cxx_destruct;
- (id)_message;
- (id)_title;
- (_Bool)dismissOnLock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithApplication:(id)arg1;

@end
