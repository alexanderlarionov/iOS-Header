//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchSuggestion.h>

@class SFSearchResult;

@interface SPResultSearchSuggestion : SFSearchSuggestion
{
    SFSearchResult *_originalResult;
}

@property(retain, nonatomic) SFSearchResult *originalResult; // @synthesize originalResult=_originalResult;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResult:(id)arg1;
- (Class)classForKeyedArchiver;

@end
