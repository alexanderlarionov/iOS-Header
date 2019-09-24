//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface QLSqliteDatabase : NSObject
{
    NSString *_path;
    struct sqlite3 *_db;
    _Bool _isCorrupted;
    NSObject<OS_dispatch_queue> *_queue;
    long long transactionCount;
    NSMutableDictionary *_statementCache;
    NSMapTable *_statementsInUseTable;
    NSString *_tracingPrefix;
}

+ (void)toggleSqlLogging;
@property(retain) NSString *tracingPrefix; // @synthesize tracingPrefix=_tracingPrefix;
@property _Bool isCorrupted; // @synthesize isCorrupted=_isCorrupted;
- (void).cxx_destruct;
- (void)_dropStatementCache;
- (void)closeDatabase;
- (void)dealloc;
- (_Bool)isOpened;
- (void)openDatabaseAtPath:(id)arg1;
- (id)queue;
- (void)do:(CDUnknownBlockType)arg1;
- (id)init;
- (void)_databaseCorrupted;
- (void)_finalizeStatement:(struct sqlite3_stmt **)arg1;
- (void)vacuum;
- (void)setSqliteCacheSize:(long long)arg1;
- (void)runStatement:(struct sqlite3_stmt *)arg1 withBoundRowIds:(unsigned long long *)arg2 count:(unsigned long long)arg3 startingAtIndex:(int)arg4 stepHandler:(CDUnknownBlockType)arg5;
- (void)runStatement:(struct sqlite3_stmt *)arg1 withBoundNumbers:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(CDUnknownBlockType)arg4;
- (void)runStatement:(struct sqlite3_stmt *)arg1 withBoundRowIds:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(CDUnknownBlockType)arg4;
- (void)runStatement:(struct sqlite3_stmt *)arg1 withBoundObjects:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(CDUnknownBlockType)arg4;
- (void)runStatement:(struct sqlite3_stmt *)arg1 stepHandler:(CDUnknownBlockType)arg2;
- (double)doubleFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2;
- (float)floatFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2;
- (int)intFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2;
- (unsigned long long)unsignedLongLongFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2;
- (id)newDataFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 copyBytes:(_Bool)arg3;
- (void *)newBufferFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 length:(unsigned int *)arg3;
- (id)newPathFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 uniqueInStringTable:(id)arg3;
- (id)newStringFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 uniqueInStringTable:(id)arg3;
- (struct __CFString *)newCFStringFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 uniqueInStringTable:(id)arg3;
- (struct __CFURL *)newCFURLFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2;
- (id)newColumnName:(int)arg1 inStatement:(struct sqlite3_stmt *)arg2 uniqueInStringTable:(id)arg3;
- (long long)columnCount:(struct sqlite3_stmt *)arg1;
- (void)bindInt:(int)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (void)bindLongLong:(long long)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (void)bindUnsignedLongLong:(unsigned long long)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (void)bindPath:(id)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (void)bindCFURL:(struct __CFURL *)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (void)bindObject:(id)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (void)bindBytes:(void *)arg1 length:(unsigned int)arg2 atIndex:(int)arg3 inStatement:(struct sqlite3_stmt *)arg4;
- (void)checkpoint;
- (void)finalizeStatement:(struct sqlite3_stmt **)arg1;
- (void)resetStatement:(struct sqlite3_stmt *)arg1 unbindValuesThroughIndex:(int)arg2;
- (_Bool)stepStatement:(struct sqlite3_stmt *)arg1;
- (id)_cacheStatement:(struct sqlite3_stmt *)arg1 forKey:(id)arg2;
- (id)_cachedStatementForKey:(id)arg1;
- (struct sqlite3_stmt *)prepareStatement:(const char *)arg1;
- (long long)lastInsertRowId;
- (id)lastCrapWithDate:(id *)arg1;
- (void)sqliteCrappedOut:(int)arg1 message:(id)arg2;
- (id)_crapPath;
- (void)executeSql:(const char *)arg1 withCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (void)executeWithCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 sql:(const char *)arg3;
- (void)executeWithRollbackOnError:(const char *)arg1;
- (void)execute:(const char *)arg1;
- (void)executeWithBlob:(const void *)arg1 length:(int)arg2 format:(const char *)arg3;
- (void)executeWithCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 rollbackOnError:(_Bool)arg3 sql:(const char *)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)endTransaction;
- (_Bool)beginTransaction;
- (void)disableSqliteTracing;
- (void)enableSqliteTracing:(id)arg1;

@end
