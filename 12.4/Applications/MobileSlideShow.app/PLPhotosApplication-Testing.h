//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/PLPhotosApplication.h>

@interface PLPhotosApplication (Testing)
- (void)runAssetExplorerScrollTest:(id)arg1;
- (id)_recentPhotosViewController;
- (void)runCMMInvitationsScrollTest:(id)arg1;
- (void)runImportHistoryScrollTest:(id)arg1;
- (void)runImportCycleImportSource:(id)arg1;
- (void)runImportGridThumbnailTests:(id)arg1;
- (void)runImportGridImportAssetsToLibrary:(id)arg1;
- (void)runImportGridDeleteAssets:(id)arg1;
- (void)runImportGridContentLoadingTest:(id)arg1;
- (void)runImportGridScrollLoadingAssetsTest:(id)arg1;
- (void)_runImportTestCommonInit:(id)arg1 navigateToImportTab:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)runLoadForYouTest:(id)arg1;
- (void)_setupForYouSettingsForLoadTesting;
- (void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)_cameraViewController:(id)arg1 didCapturePhotoWithProperties:(id)arg2 error:(id)arg3;
- (void)runPhotoCaptureTest:(id)arg1;
- (void)runPhotoCaptureWarmUp:(id)arg1;
- (void)_convertAsset:(id)arg1 toVariationType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)runAutoLoopGenerationTest:(id)arg1;
- (void)_launchUIImagePickerControllerWithOptions:(id)arg1 sourceType:(long long)arg2 mediaTypes:(id)arg3;
- (void)launchUIImagePickerControllerWithSavedPhotosAlbum:(id)arg1;
- (void)launchUIImagePickerControllerWithPhotoLibrary:(id)arg1;
- (void)runLoadSearchZeroKeywordsTest:(id)arg1;
- (void)runShowSearchHomeTest:(id)arg1;
- (void)runPerformSearchTest:(id)arg1;
- (void)_runPersonTypeChangeTestToType:(long long)arg1 withOptions:(id)arg2;
- (void)runUnfavoritePeopleTest:(id)arg1;
- (void)runFavoritePeopleTest:(id)arg1;
- (void)runNamePersonTest:(id)arg1;
- (void)runCommitBootstrapTest:(id)arg1;
- (void)runMergePeopleTest:(id)arg1;
- (void)runLoadBootstrapTest:(id)arg1;
- (void)runLoadPeopleHomeTest:(id)arg1;
- (void)installNotificationObserverForNotificationName:(id)arg1 notificationName:(id)arg2 forOneNotification:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)runImagePicker:(id)arg1;
- (void)runHyperionResetTest:(id)arg1;
- (void)runHyperionHardResetSyncTest:(id)arg1;
- (void)runHyperionSoftResetSyncTest:(id)arg1;
- (void)runHyperionInitialSyncTest:(id)arg1;
- (void)_runRequestImageWithTargetSize:(struct CGSize)arg1 contentMode:(long long)arg2 options:(id)arg3;
- (void)runRequestGridSizeTest:(id)arg1;
- (void)runRequestFullscreenTest:(id)arg1;
- (void)runRequestOriginalTest:(id)arg1;
- (void)_navigateToOutgoingCMMInvitationForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToIncomingCMMInvitationForCurrentTest:(CDUnknownBlockType)arg1 selecting:(_Bool)arg2;
- (void)_navigateToIncomingCMMInvitationForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToCMMSuggestionComposeRecipientViewForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToCMMSuggestionForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToMiroForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToPhotosDetailsForCurrentTestAnimated:(_Bool)arg1 willTapHandler:(CDUnknownBlockType)arg2 willTransitionHandler:(CDUnknownBlockType)arg3 didTransitionHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_navigateToSearchTabForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToForYouForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToPeopleHomeAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_navigateToMemoriesFeedForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToZoomLevelForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToAlbumsTabForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToAlbumListGadgetType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_navigateToSharedAlbumListForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToMyAlbumListForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToAlbumForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToAssetForCurrentTest:(CDUnknownBlockType)arg1;
- (void)_navigateToAssetInOneUpPreferLocationAndFace:(_Bool)arg1 forCurrentTest:(CDUnknownBlockType)arg2;
- (void)_navigateToAssetInOneUpForCurrentTest:(CDUnknownBlockType)arg1;
- (id)_tabbedLibraryViewController;
- (void)runSelectAssetInMomentTest:(id)arg1;
- (void)runDeletePhotosTest:(id)arg1;
- (id)_identifierForNewAssetWithImage:(id)arg1;
- (id)_newImageWithSize:(struct CGSize)arg1;
- (void)runSwitchTabTest:(id)arg1 fromTab:(id)arg2 numberOfIterations:(int)arg3;
- (void)startSwitchTabTest:(id)arg1;
- (id)getTabBarItem:(id)arg1;
- (void)runAlbumsRotationTest:(id)arg1;
- (void)runActivityFeedRotationTest:(id)arg1;
- (void)runPhotosTabRotationTest:(id)arg1;
- (void)_runRotationTestWithViewController:(id)arg1;
- (void)runZoomLevelTest:(id)arg1;
- (void)runSelectPhotosTest:(id)arg1;
- (void)runSelectAlbumsTest:(id)arg1;
- (void)runBaselineTransitionTest:(id)arg1;
- (void)_navigateToLivePhotosForCurrentTest:(CDUnknownBlockType)arg1;
- (_Bool)_purgeVariationsCaches;
- (void)runLivePhotoEffectsPreviewTest:(id)arg1;
- (void)runLivePhotoPlaybackTest:(id)arg1;
- (void)runLivePhotoPlaybackInEditTest:(id)arg1;
- (void)runScrollBWAdjustmentTest:(id)arg1;
- (void)runScrollColorAdjustmentTest:(id)arg1;
- (void)runScrollLightAdjustmentTest:(id)arg1;
- (void)_runSelectedSliderTestForViewController:(id)arg1 withOptions:(id)arg2;
- (void)runLoadPhotoEditorApplyAutoenhanceTest:(id)arg1;
- (void)runLoadPhotoEditorOpenCropTest:(id)arg1;
- (void)runLoadPhotoEditorOpenAdjustmentsTest:(id)arg1;
- (void)runLoadPhotoEditorDepthTest:(id)arg1;
- (void)runLoadPhotoEditorOpenFiltersTest:(id)arg1;
- (void)runLoadPhotoEditorOneUpTestWaitUntilRendered:(id)arg1;
- (void)runLoadPhotoEditorOneUpTest:(id)arg1;
- (void)_runPhotoEditTestWithOptions:(id)arg1 afterEditOpenedBlock:(CDUnknownBlockType)arg2;
- (void)runMailSharingTest:(id)arg1;
- (void)runMessageSharingTest:(id)arg1;
- (void)_runSharingTest:(id)arg1 withActivityType:(id)arg2;
- (void)tearDownSharingTest:(id)arg1;
- (void)runLoadFullScreenSharingOneUpTest:(id)arg1;
- (void)runSkimFullQualityOneUpPhotosTest:(id)arg1;
- (void)runScrubOneUpTest:(id)arg1;
- (void)runPageSwipeOneUpTest:(id)arg1;
- (void)runScrollOneUpTest:(id)arg1;
- (void)runMiroTest:(id)arg1;
- (void)runToggleCuratedTransitionTest:(id)arg1;
- (void)runSelectMemoriesTest:(id)arg1;
- (void)runMemoryTransitionTest:(id)arg1;
- (void)runOneUpRelatedTransitionTest:(id)arg1;
- (void)runShowOneUpRelatedTest:(id)arg1;
- (void)runShowPhotosDetailsTest:(id)arg1;
- (void)runScrollPhotosDetailsTest:(id)arg1;
- (void)runTransitionCMMComposeRecipientsViewTest:(id)arg1;
- (void)runScrollCMMComposeRecipientsViewTest:(id)arg1;
- (void)runScrollCMMSuggestionViewTest:(id)arg1;
- (void)runScrollOutgoingCMMInvitationViewTest:(id)arg1;
- (void)runScrollIncomingCMMInvitationViewSelectingTest:(id)arg1;
- (void)runScrollIncomingCMMInvitationViewTest:(id)arg1;
- (void)runScrollMemoriesTest:(id)arg1;
- (void)runScrollActivityFeedTest:(id)arg1;
- (id)_horizontalAlbumListGadgetForType:(unsigned long long)arg1 fromAlbumsGadgetViewController:(id)arg2;
- (void)_scrollHorizontallyAlbumListType:(unsigned long long)arg1 options:(id)arg2;
- (void)runScrollHorizontallySharedAlbumsTest:(id)arg1;
- (void)runScrollHorizontallyMyAlbumsTest:(id)arg1;
- (void)runScrollSharedAlbumListTest:(id)arg1;
- (void)runScrollMyAlbumListTest:(id)arg1;
- (void)runScrollAlbumsTabTest:(id)arg1;
- (void)runScrollPhotosTabTest:(id)arg1;
- (void)runScrollSearchResultsTest:(id)arg1;
- (void)runScrollSearchHomeTest:(id)arg1;
- (void)runZoomMapTest:(id)arg1;
- (void)runScrollMapTest:(id)arg1;
- (void)runScrollForYouCMMSuggestionsGadgetTest:(id)arg1;
- (void)runScrollForYouTest:(id)arg1;
- (void)runScrollPeopleDetailTest:(id)arg1;
- (void)runScrollPeopleHomeTest:(id)arg1;
- (void)runScrollAlbumTest:(id)arg1;
- (void)runBaselineScrollTest:(id)arg1;
- (int)_scrollAxisForTestWithOptions:(id)arg1;
- (int)_scrollTestDelta:(id)arg1 options:(id)arg2;
- (int)_scrollTestLength:(id)arg1 options:(id)arg2;
- (void)failedCurrentTestWithFailure:(id)arg1;
- (void)failedCurrentTest;
- (void)finishedCurrentTestWithExtraResults:(id)arg1;
- (void)finishedCurrentTest;
- (void)startedCurrentTest;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_performBlockWhenImportSourceIsReady:(CDUnknownBlockType)arg1;
- (_Bool)_isGraphStatusCheckDisabled;
- (void)_performBlockWhenInitialBackgroundLoadingIsReady:(CDUnknownBlockType)arg1;
- (void)failedTest:(id)arg1 withFailure:(id)arg2 withResults:(id)arg3;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2 waitForNotification:(id)arg3 withTeardownBlock:(CDUnknownBlockType)arg4;
- (void)startedTest:(id)arg1;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (_Bool)launchedToTest;
- (void)_computeFibonnaciNumbersForDuration:(double)arg1;
- (void)ppt_performScrollTest:(id)arg1 withOptions:(id)arg2 scrollView:(id)arg3 scrollAxis:(int)arg4 extraResultsBlock:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)ppt_performScrollTest:(id)arg1 withOptions:(id)arg2 scrollView:(id)arg3 scrollAxis:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)ppt_performScrollTest:(id)arg1 withOptions:(id)arg2 scrollView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)ppt_endPausingChanges;
- (void)ppt_beginPausingChanges;
- (void)_callCompletionHandlersForTest:(id)arg1;
- (void)_addTest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_installWillFinishTestHandler:(CDUnknownBlockType)arg1;
- (void)ppt_prepareApplicationForTesting;
@end
