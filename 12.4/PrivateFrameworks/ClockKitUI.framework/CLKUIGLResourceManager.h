//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUIResourceManager.h>

@class EAGLContext, EAGLSharegroup, NSMutableDictionary;

@interface CLKUIGLResourceManager : CLKUIResourceManager
{
    NSMutableDictionary *_programsByName;
    EAGLContext *_context;
    EAGLSharegroup *_shareGroup;
}

+ (id)programWithName:(id)arg1;
+ (id)context;
+ (id)shareGroup;
+ (id)sharedGLInstance;
- (void).cxx_destruct;
- (void)_purgeAtlases:(id)arg1;
- (id)_newAtlasForUuid:(id)arg1;
- (id)init;

@end
