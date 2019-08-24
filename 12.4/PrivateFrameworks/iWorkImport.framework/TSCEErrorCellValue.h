//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCEErrorCellValue : TSCECellValue
{
    struct TSCEErrorValue *_errorValue;
}

- (void)encodeToArchive:(struct ErrorCellValueArchive *)arg1;
- (id)initWithArchive:(const struct ErrorCellValueArchive *)arg1 locale:(id)arg2;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)format;
- (struct TSCEValue)tsceValue;
- (struct TSCEErrorValue *)errorValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithErrorValue:(struct TSCEErrorValue *)arg1 locale:(id)arg2;

@end
