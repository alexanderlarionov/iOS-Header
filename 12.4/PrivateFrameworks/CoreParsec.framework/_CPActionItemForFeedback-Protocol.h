//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPPunchoutForFeedback;

@protocol _CPActionItemForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _CPPunchoutForFeedback *punchout;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
