//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CKAvatarView;

__attribute__((visibility("hidden")))
@interface CKAvatarCollectionViewCell : UICollectionViewCell
{
    CKAvatarView *_avatarView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithEntity:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

@end
