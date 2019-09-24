//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties, SUMescalSession;

@interface SUSetupMescalSessionOperation : ISOperation
{
    SSURLRequestProperties *_requestProperties;
    SUMescalSession *_session;
}

- (id)_setupSAPWithData:(id)arg1 error:(id *)arg2;
- (id)_setupSAPCertificate:(id *)arg1;
- (_Bool)_isMescalEnabled;
- (void)run;
@property(readonly) SUMescalSession *mescalSession;
- (void)dealloc;
- (id)initWithURLRequestProperties:(id)arg1;

@end
