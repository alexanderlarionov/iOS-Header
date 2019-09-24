//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/WBSFormsMetadataProvider-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SFFormsMetadataProvider : NSObject <WBSFormsMetadataProvider>
{
    NSDictionary *_frameHandleToForms;
}

- (void).cxx_destruct;
- (void)enumerateFormsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long formCount;
- (id)initWithFrameHandleToFormsDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
