//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface PromotedIAPDatabase : NSObject
{
    SSSQLiteDatabase *_database;
}

+ (_Bool)_setupDatabase:(id)arg1;
+ (void)_createDatabaseDirectory;
- (void).cxx_destruct;
- (void)removeOverridesForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setOrderForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getOrderForIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setVisibility:(long long)arg1 forIAP:(id)arg2 app:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getVisibilityForAllIAPsInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getVisibilityForIAPs:(id)arg1 app:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;
- (id)init;

@end
