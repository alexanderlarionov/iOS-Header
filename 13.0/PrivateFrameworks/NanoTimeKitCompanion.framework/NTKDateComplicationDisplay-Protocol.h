//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>

@class NSString;

@protocol NTKDateComplicationDisplay <NTKComplicationDisplay>
- (void)setDateComplicationText:(NSString *)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned long long)arg3;

@optional
- (unsigned long long)overrideDateStyle;
- (unsigned long long)desiredDateComplicationDateStyle;
@end

