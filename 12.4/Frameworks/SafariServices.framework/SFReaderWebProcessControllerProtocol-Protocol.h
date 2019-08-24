//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSNumber, WKBrowsingContextHandle;

@protocol SFReaderWebProcessControllerProtocol <NSObject>
- (void)willHideReader;
- (void)didFinishPresentationUpdateAfterTransitioningToReader;
- (void)prepareReaderContentForPrinting;
- (void)setConfiguration:(NSDictionary *)arg1;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(NSNumber *)arg1;
- (void)setInitalArticleScrollPositionAsDictionary:(NSDictionary *)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(NSDictionary *)arg2 isViewingArchive:(_Bool)arg3;
- (void)loadNewReaderArticle;
- (void)didCreateReaderPageContextHandle:(WKBrowsingContextHandle *)arg1;
- (void)prepareToTransitionToReader;
@end
