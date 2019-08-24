//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/NSCopying-Protocol.h>
#import <ScreenTimeUI/NSSecureCoding-Protocol.h>

@class NSString;

@interface STUsageInsights : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_insightText;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *insightText; // @synthesize insightText=_insightText;
- (void).cxx_destruct;
- (void)_generateInsightsWithReport:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsageReport:(id)arg1;

@end
