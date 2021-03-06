//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSNumber, NSString, WLKShowContentRating;

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata
{
    NSNumber *_seasonNumber;
    WLKShowContentRating *_contentRating;
    NSString *_canonicalShowID;
}

+ (id)seasonsWithDictionaries:(id)arg1;
@property(readonly, copy, nonatomic) NSString *canonicalShowID; // @synthesize canonicalShowID=_canonicalShowID;
@property(readonly, nonatomic) WLKShowContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(readonly, nonatomic) NSNumber *seasonNumber; // @synthesize seasonNumber=_seasonNumber;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

