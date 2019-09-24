//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OADTableCellProperties, OADTextBody;

__attribute__((visibility("hidden")))
@interface OADTableCell : NSObject
{
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    _Bool mHorzMerge;
    _Bool mVertMerge;
    int mTopRow;
    int mLeftColumn;
}

- (void).cxx_destruct;
- (id)description;
- (void)setLeftColumn:(int)arg1;
- (int)leftColumn;
- (void)setTopRow:(int)arg1;
- (int)topRow;
- (_Bool)merge:(int)arg1;
- (void)setVertMerge:(_Bool)arg1;
- (_Bool)vertMerge;
- (void)setHorzMerge:(_Bool)arg1;
- (_Bool)horzMerge;
- (void)setGridSpan:(int)arg1;
- (int)gridSpan;
- (void)setRowSpan:(int)arg1;
- (int)rowSpan;
- (int)spanAlongDir:(int)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)setTextBody:(id)arg1;
- (id)textBody;
- (id)init;

@end
