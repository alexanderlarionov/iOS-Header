//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EditLocationViewController, MapsSuggestionsShortcut, RAPHomeWorkAdvancedEditorViewController, RAPHomeWorkCorrectionsQuestion, RAPReport, UIViewController;
@protocol RAPHomeWorkCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface RAPHomeWorkCoordinator : NSObject
{
    RAPReport *_report;
    MapsSuggestionsShortcut *_shortcut;
    id <RAPHomeWorkCoordinatorDelegate> _delegate;
    _Bool _hasDisplayedRefinementAlert;
    long long _presentationStyle;
    UIViewController *_parentViewController;
    EditLocationViewController *_editLocationViewController;
    RAPHomeWorkAdvancedEditorViewController *_homeWorkCorrectionsViewController;
    RAPHomeWorkCorrectionsQuestion *_question;
}

@property(readonly, nonatomic) RAPHomeWorkCorrectionsQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (_Bool)_isHomeShortcut;
@property(readonly, nonatomic) struct CLLocationCoordinate2D originalCoordinate;
- (id)_navigationControllerWithRootViewController:(id)arg1;
- (void)_presentLightweightAcknowledgementScreen;
- (void)_presentHomeWorkAdvancedEditor;
- (void)_presentHomeWorkWarningScreen;
- (void)_doneLocationRefinement;
- (void)_cancelLocationRefinement;
- (void)_presentLocationRefinement;
- (id)_refinementAlertController;
- (void)beginShortcutRefinement;
- (void)_createRAPContext;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2 report:(id)arg3 question:(id)arg4;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2 shortcut:(id)arg3;

@end
