//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/EQKitLayout-Protocol.h>

@class EQKitBox, EQKitEnvironmentInstance, NSString;
@protocol EQKitRootNode;

__attribute__((visibility("hidden")))
@interface EQKitLayout : NSObject <EQKitLayout>
{
    id <EQKitRootNode> mRoot;
    EQKitBox *mBox;
    double mAscent;
    double mDescent;
    double mLeading;
    double mNaturalAlignmentOffset;
    double mScale;
    _Bool mSingleLineHeight;
    EQKitEnvironmentInstance *mEnvironment;
}

@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=mBox;
@property(readonly, copy) NSString *description;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (void)setFontSmoothingBackgroundColor:(struct CGColor *)arg1;
- (struct CGSize)naturalSize;
- (struct CGRect)erasableBounds;
- (double)naturalAlignmentOffset;
- (double)vsize;
- (double)width;
- (double)depth;
- (double)height;
- (_Bool)layoutWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithRoot:(id)arg1 environment:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

