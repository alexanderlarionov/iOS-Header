//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ScratchManager : NSObject
{
}

+ (id)_directoryPathForDownloadID:(long long)arg1 createIfNeeded:(_Bool)arg2 atBasePath:(id)arg3;
+ (id)_containerDirectoryPath;
+ (id)_baseDirectoryPath;
+ (id)directoryPathForDownloadID:(long long)arg1 kind:(id)arg2 createIfNeeded:(_Bool)arg3;
+ (id)directoryPathForDownloadID:(long long)arg1 assetID:(long long)arg2 kind:(id)arg3 createIfNeeded:(_Bool)arg4;
+ (id)directoryPathForDownloadID:(long long)arg1 assetID:(long long)arg2 createIfNeeded:(_Bool)arg3;
+ (id)containerDirectoryPath;
+ (id)baseDirectoryPath;

@end
