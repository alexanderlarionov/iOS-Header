//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel
{
}

- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;
- (id)partialDerivatives;
- (void)getInitialParams:(double *)arg1;
- (int)modelParameterCount;
- (CDUnknownBlockType)modelFunction;
- (id)modelDescription;

@end

