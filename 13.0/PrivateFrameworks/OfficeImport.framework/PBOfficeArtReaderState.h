//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OABReaderState.h>

@class PBPresentationReaderState, PXPresentationState;

__attribute__((visibility("hidden")))
@interface PBOfficeArtReaderState : OABReaderState
{
    PXPresentationState *mXmlDocumentState;
    PBPresentationReaderState *mPresentationState;
}

@property(readonly) __weak PBPresentationReaderState *presentationState; // @synthesize presentationState=mPresentationState;
- (void).cxx_destruct;
- (id)drawableOnTgtSlideForShapeId:(int)arg1;
- (id)xmlDocumentState;
- (id)xmlDrawingState;
- (id)initWithPresentationState:(id)arg1;

@end
