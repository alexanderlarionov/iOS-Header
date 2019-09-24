//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/NSCopying-Protocol.h>

@class UIStatusBarStyleRequest;

@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying>
{
    _Bool _hidden;
    UIStatusBarStyleRequest *_leadingStyleRequest;
    UIStatusBarStyleRequest *_trailingStyleRequest;
    struct CGRect _avoidanceFrame;
    struct UIEdgeInsets _statusBarInsets;
}

@property(readonly, copy, nonatomic) UIStatusBarStyleRequest *trailingStyleRequest; // @synthesize trailingStyleRequest=_trailingStyleRequest;
@property(readonly, copy, nonatomic) UIStatusBarStyleRequest *leadingStyleRequest; // @synthesize leadingStyleRequest=_leadingStyleRequest;
@property(readonly, nonatomic) struct UIEdgeInsets statusBarInsets; // @synthesize statusBarInsets=_statusBarInsets;
@property(readonly, nonatomic) struct CGRect avoidanceFrame; // @synthesize avoidanceFrame=_avoidanceFrame;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHidden:(_Bool)arg1 leadingStyleRequest:(id)arg2 trailingStyleRequest:(id)arg3 statusBarInsets:(struct UIEdgeInsets)arg4 avoidanceFrame:(struct CGRect)arg5;

@end
