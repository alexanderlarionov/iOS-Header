//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPMutableCryptoInfo-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface SFUCryptoKey : NSObject <TSPMutableCryptoInfo>
{
    unsigned int mIterationCount;
    char *mKey;
    unsigned long long mKeyLength;
    NSData *mSaltData;
    NSString *_passphrase;
}

@property(readonly, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
- (id)saltData;
- (unsigned long long)keyLength;
- (const char *)keyData;
- (unsigned int)iterationCount;
- (int)keyType;
- (void)dealloc;
- (id)initAes128Key:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3 saltData:(id)arg4;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2;
- (void)incrementDecodedLengthBy:(unsigned long long)arg1;
- (void)addBlockInfo:(id)arg1;
- (void)reset;
- (id)mutableCryptoInfoCopy;
@property(readonly, nonatomic) unsigned long long decodedLength;
@property(readonly, nonatomic) _Bool hasDecodedLength;
@property(readonly, nonatomic) NSArray *blockInfos;
@property(readonly, nonatomic) unsigned long long preferredBlockSize;
@property(readonly, nonatomic) SFUCryptoKey *cryptoKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
