//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNavigationListItem.h>

@interface PXNavigationListGroupItem : PXNavigationListItem
{
    _Bool _group;
    _Bool _draggable;
    _Bool _expandable;
}

+ (id)titleForIdentifier:(id)arg1;
- (_Bool)isExpandable;
- (_Bool)isDraggable;
- (_Bool)isGroup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
