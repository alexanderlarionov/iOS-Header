//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPDataObserverInfo.h>

__attribute__((visibility("hidden")))
@interface TSPDataDownloadObserverInfo : TSPDataObserverInfo
{
}

- (_Bool)shouldClearObserverForStatus:(long long)arg1;
- (_Bool)shouldNotifyStatus:(long long)arg1;
- (id)initWithDownloadObserver:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 isInternalObserver:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
