//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FRAdditions)
+ (id)fr_createArticleLinkWithArticleID:(id)arg1 url:(id)arg2;
+ (id)fr_NewsURLForOpenInNewsError;
+ (id)fr_NewsURLForNotificationsWithTagID:(id)arg1;
+ (id)_urlForTagID:(id)arg1 internal:(_Bool)arg2;
+ (id)fr_NewsInternalURLForTagID:(id)arg1;
+ (id)fr_NewsURLForTagID:(id)arg1 title:(id)arg2;
+ (id)fr_sanitizedURLForWebView:(id)arg1 navigationAction:(id)arg2;
+ (_Bool)fr_canHandleNavigationAction:(id)arg1;
- (_Bool)fr_isFeldsparOpenInNewsErrorURL;
- (long long)fr_iAdPreviewLimit;
- (id)fr_iAdPreviewId;
- (_Bool)fr_isiAdOriginatedURL;
- (void)fr_getOverrideSegmentSetIDs:(id *)arg1 additionalSegmentSetIDs:(id *)arg2 disableABTesting:(_Bool *)arg3;
- (void)fr_getPreviewChannelIdentifier:(id *)arg1 articleIdentifier:(id *)arg2;
- (_Bool)fr_isPreviewURL;
- (void)fr_openedFromEditorialArticleURLQueryParametersWithCompletion:(CDUnknownBlockType)arg1;
- (id)fr_notificationsURLTagID;
- (_Bool)fr_isNotificationsURL;
- (id)fr_accessTokenFromAuthenticationCallback;
- (id)fr_tagIDFromAuthenticationCallback;
- (id)fr_userActionDate;
- (id)fr_widgetModeGroupID;
- (id)fr_campaignType;
- (id)fr_campaignID;
- (id)fr_creativeID;
- (void)fr_subscriptionURLQueryParametersWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)fr_isSubscriptionURLForWebOptIn;
- (id)fr_subscriptionURLTagID;
- (_Bool)fr_isSubcriptionURL;
- (_Bool)fr_isBundleSubcriptionURL;
- (_Bool)fr_isAuthenticationCallbackURL;
- (_Bool)fr_isRSSFeedURL;
- (_Bool)fr_isStoreURL;
- (id)fr_storeURLRepresentation;
- (_Bool)fr_isFeldsparWebLinkURL;
- (id)fr_feldsparWebLinkURL;
- (_Bool)_caseInsensitiveCompareWithFirstPathComponent:(id)arg1;
- (_Bool)fr_isUserSegmentationURL;
- (_Bool)fr_isOpenedFromExploreTab;
- (_Bool)fr_isFeldsparReferableURL;
- (_Bool)fr_isFeldsparTabURL;
- (_Bool)fr_isFeldsparFavoritesPickerURL;
- (_Bool)fr_isFeldsparHistoryURL;
- (_Bool)fr_isFeldsparSavedURL;
- (_Bool)fr_isFeldsparSpotlightURL;
- (_Bool)fr_isFeldsparFollowingURL;
- (_Bool)fr_isFeldsparForYouURL;
- (id)fr_valueForQueryItemWithName:(id)arg1;
- (_Bool)fr_isFromSafariSearchWithSourceApplication:(id)arg1;
- (id)fr_widgetReferralItemWithQueryItemName:(id)arg1;
- (id)fr_widgetEngagementFileName;
- (long long)_articleOpenedFromQueryValue:(id)arg1;
- (long long)fr_articleOpenedFrom;
- (void)fr_feldsparArticleIDWithAssetManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fr_podcastRepresentation;
- (id)fr_httpsRepresentation;
- (id)fr_httpRepresentation;
- (id)_fr_representationWithScheme:(id)arg1;
- (_Bool)fr_isHTTPScheme;
- (_Bool)fr_isWebArchiveURL;
- (_Bool)fr_handleExternalURLWithPrompt;
- (id)fr_deepLinkURL;
@end
