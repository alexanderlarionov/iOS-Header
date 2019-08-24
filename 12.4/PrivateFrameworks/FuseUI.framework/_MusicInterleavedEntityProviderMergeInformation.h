//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;
@protocol MusicEntityProviding;

@interface _MusicInterleavedEntityProviderMergeInformation : NSObject
{
    id <MusicEntityProviding> _entityProvider;
    id _entityUniqueIdentifier;
    id _entityComparisonObject;
    NSIndexPath *_indexPath;
}

@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) id entityComparisonObject; // @synthesize entityComparisonObject=_entityComparisonObject;
@property(copy, nonatomic) id entityUniqueIdentifier; // @synthesize entityUniqueIdentifier=_entityUniqueIdentifier;
@property(retain, nonatomic) id <MusicEntityProviding> entityProvider; // @synthesize entityProvider=_entityProvider;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;

@end
