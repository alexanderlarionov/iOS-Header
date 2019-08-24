//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKVectorTile.h>

__attribute__((visibility("hidden")))
@interface VKSkewingVectorTile : VKVectorTile
{
    Matrix_08d701e4 _skewedShaderMatrix;
    shared_ptr_696716c4 _skewedViewConstantData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateViewDependentStateWithContext:(struct LayoutContext *)arg1;
@property(readonly, nonatomic) const shared_ptr_696716c4 *skewedViewConstantData;
- (id)initWithKey:(const struct VKTileKey *)arg1 modelTile:(id)arg2 userInfo:(id)arg3 styleManager:(shared_ptr_a3c46825)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(Device_9226c869 *)arg7;

@end
