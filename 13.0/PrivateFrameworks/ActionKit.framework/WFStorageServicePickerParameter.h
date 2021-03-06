//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    WFiCloudDriveAccessResource *_iCloudDriveAccessResource;
}

+ (id)referencedActionResourceClasses;
@property(retain, nonatomic) WFiCloudDriveAccessResource *iCloudDriveAccessResource; // @synthesize iCloudDriveAccessResource=_iCloudDriveAccessResource;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)defaultSupportedVariableTypes;
- (id)possibleStates;
- (_Bool)isHidden;
- (id)accessoryIconForPossibleState:(id)arg1;
- (void)setActionResources:(id)arg1;

@end

