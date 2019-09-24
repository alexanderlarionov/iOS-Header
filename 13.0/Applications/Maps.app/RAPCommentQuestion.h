//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPQuestion.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RAPCommentQuestion : RAPQuestion
{
    NSString *_commentsTitle;
    NSString *_commentsPlaceholderText;
    long long _emphasis;
    NSString *_localizedPhotosPickerExplanation;
    NSString *_comment;
    NSArray *_photos;
    long long _photoType;
}

+ (id)validatedComment:(id)arg1;
+ (unsigned long long)maximumCommentLength;
+ (id)_localizedOptionalInformationTitle;
+ (id)_localizedMoreInformationTitle;
+ (id)_localizedInformationTitle;
@property(nonatomic) long long photoType; // @synthesize photoType=_photoType;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) long long emphasis; // @synthesize emphasis=_emphasis;
@property(readonly, nonatomic) NSString *commentsPlaceholderText; // @synthesize commentsPlaceholderText=_commentsPlaceholderText;
@property(readonly, nonatomic) NSString *commentsTitle; // @synthesize commentsTitle=_commentsTitle;
- (void).cxx_destruct;
- (void)_fillSubmissionParameters:(id)arg1;
- (void)_fillSubmittableProblem:(id)arg1;
- (_Bool)_isNowComplete;
@property(readonly, nonatomic) _Bool canAddPhoto;
- (id)photoAtIndex:(unsigned long long)arg1;
- (void)removeAllPhotos;
- (void)removePhotoAtIndex:(unsigned long long)arg1;
- (void)addPhoto:(id)arg1;
@property(readonly, nonatomic) unsigned long long remainingCharacters;
- (unsigned long long)maximumNumberOfPhotos;
- (void)_setLocalizedPhotosPickerExplanation:(id)arg1;
- (void)_setPlaceholderText:(id)arg1;
- (void)_setCommentsTitle:(id)arg1 placeholderText:(id)arg2;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 title:(id)arg3 placeholderText:(id)arg4 emphasis:(long long)arg5;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 title:(id)arg3 placeholderText:(id)arg4 emphasis:(long long)arg5 localizedPhotosPickerExplanation:(id)arg6;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;
@property(readonly, nonatomic) NSString *localizedPhotosPickerExplanation; // @synthesize localizedPhotosPickerExplanation=_localizedPhotosPickerExplanation;
@property(readonly, nonatomic) NSString *localizedPhotosPickerLabel;

@end
