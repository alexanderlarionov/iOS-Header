//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface VUISettingsManager : NSObject
{
    NSNumber *_maxMovieRank;
    NSNumber *_maxTVShowRank;
    NSString *_preferredVideoFormat;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *preferredVideoFormat; // @synthesize preferredVideoFormat=_preferredVideoFormat;
@property(copy, nonatomic) NSNumber *maxTVShowRank; // @synthesize maxTVShowRank=_maxTVShowRank;
@property(copy, nonatomic) NSNumber *maxMovieRank; // @synthesize maxMovieRank=_maxMovieRank;
- (void).cxx_destruct;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (unsigned long long)_preferredVideoFormat;
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;
- (_Bool)_hasPreferredVideoFormatChanged;
- (_Bool)_hasRestrictionsChanged;
- (void)_sendSettingsValuesToJS;
- (id)preferencesJSONData;
- (void)checkAndUpdateSettings;
- (id)init;
@property(readonly, nonatomic) NSString *restrictions;
- (id)_init;

@end
