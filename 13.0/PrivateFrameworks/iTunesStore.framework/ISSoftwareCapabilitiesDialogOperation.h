//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation
{
    NSDictionary *_mismatches;
    id _requiredCapabilities;
}

- (void)_postDefaultDialog;
- (void)run;
@property(readonly) id requiredCapabilities;
@property(readonly) NSDictionary *mismatches;
- (void)dealloc;
- (id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2;

@end
