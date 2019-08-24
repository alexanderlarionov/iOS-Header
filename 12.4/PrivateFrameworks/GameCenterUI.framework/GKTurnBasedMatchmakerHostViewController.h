//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKUIRemoteViewController.h>

#import <GameCenterUI/GKTurnBasedMatchmakerHostProtocol-Protocol.h>
#import <GameCenterUI/GKTurnBasedMatchmakerServiceProtocol-Protocol.h>

@class GKGame, GKTurnBasedMatchmakerViewController, NSString;

@interface GKTurnBasedMatchmakerHostViewController : GKUIRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol>
{
    GKTurnBasedMatchmakerViewController *_delegateWeak;
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)turnBasedMatchmakerExtension;
- (void)extensionIsCanceling;
- (void)messageFromExtension:(id)arg1;
- (void)refreshMatches;
- (void)setShowQuit:(_Bool)arg1;
- (void)setShowPlay:(_Bool)arg1;
- (void)setShowExistingMatches:(_Bool)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (id)extensionObjectProxy;
@property(nonatomic) GKTurnBasedMatchmakerViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
