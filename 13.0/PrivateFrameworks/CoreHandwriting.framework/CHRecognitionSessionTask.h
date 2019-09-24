//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognitionSessionResult, NSArray, NSSet;
@protocol CHRecognitionSessionTaskDelegate, CHStrokeProvider, OS_dispatch_queue;

@interface CHRecognitionSessionTask : NSObject
{
    _Bool _cancelled;
    _Bool _saveInputDrawings;
    _Bool _strokeGroupingOnly;
    CHRecognitionSessionResult *_inputResult;
    long long _status;
    id <CHRecognitionSessionTaskDelegate> _delegate;
    NSArray *_locales;
    NSArray *_preferredLocales;
    id <CHStrokeProvider> _strokeProvider;
    CHRecognitionSessionResult *_outputResult;
    long long _recognitionEnvironment;
    NSSet *_forceRecognitionStrokeGroupIdentifiers;
    NSObject<OS_dispatch_queue> *__recognizersQueue;
}

@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *_recognizersQueue; // @synthesize _recognizersQueue=__recognizersQueue;
@property(nonatomic) _Bool strokeGroupingOnly; // @synthesize strokeGroupingOnly=_strokeGroupingOnly;
@property(copy, nonatomic) NSSet *forceRecognitionStrokeGroupIdentifiers; // @synthesize forceRecognitionStrokeGroupIdentifiers=_forceRecognitionStrokeGroupIdentifiers;
@property(nonatomic) _Bool saveInputDrawings; // @synthesize saveInputDrawings=_saveInputDrawings;
@property(readonly, nonatomic) long long recognitionEnvironment; // @synthesize recognitionEnvironment=_recognitionEnvironment;
@property(retain, nonatomic, setter=_setOutputResult:) CHRecognitionSessionResult *outputResult; // @synthesize outputResult=_outputResult;
@property(readonly, retain, nonatomic) id <CHStrokeProvider> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
@property(readonly, copy, nonatomic) NSArray *preferredLocales; // @synthesize preferredLocales=_preferredLocales;
@property(readonly, copy, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(nonatomic) id <CHRecognitionSessionTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, setter=_setStatus:) long long status; // @synthesize status=_status;
@property(readonly, retain, nonatomic) CHRecognitionSessionResult *inputResult; // @synthesize inputResult=_inputResult;
- (id)newGroupingManager;
- (id)newStrokeClassifier;
- (id)clutterFilter;
- (id)_recognitionResultsForNonTextStrokeGroup:(id)arg1 groupingManager:(id)arg2;
- (id)_tokenizedTextResultForDrawing:(id)arg1 usingRecognizer:(id)arg2 isRemoteRecognizer:(_Bool)arg3 locale:(id)arg4 strokeLimit:(long long)arg5 recognitionError:(id *)arg6;
- (id)_textRecognitionResultsForTextStrokeGroup:(id)arg1 groupingManager:(id)arg2;
- (id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;
- (void)_logResultsIfAppropriateWithStrokeProvider:(id)arg1;
- (_Bool)_isTransitionValidFromStatus:(long long)arg1 toStatus:(long long)arg2;
- (void)cancel;
- (void)main;
- (void)dealloc;
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5 recognitionEnvironment:(long long)arg6;
- (id)init;

@end
