//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _UIPasteboardOptions : NSObject
{
    _Bool _pinned;
    _Bool _localOnly;
    NSDate *_expirationDate;
}

+ (id)optionsWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic, getter=isLocalOnly) _Bool localOnly; // @synthesize localOnly=_localOnly;
@property(nonatomic, getter=isPinned) _Bool pinned; // @synthesize pinned=_pinned;
- (void).cxx_destruct;
- (id)initWithOptionsDictionary:(id)arg1;

@end
