//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FPAdditions)
+ (id)fp_homeDirectoryForUserID:(unsigned int)arg1;
+ (id)fp_homeDirectory;
+ (id)fp_supportDirectory;
- (_Bool)fp_matchesFileProviderHeuristics:(unsigned int)arg1;
- (_Bool)fp_matchesLocalStorageURL:(id)arg1;
- (_Bool)fp_matchesCloudDocsURL:(id)arg1;
- (_Bool)fp_matchesFileProviderURL:(id)arg1;
- (id)fp_directorySizeWithError:(id *)arg1;
- (_Bool)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id *)arg2;
- (id)fp_addDocumentTrackingWithError:(id *)arg1;
- (_Bool)fp_makeWritableWithError:(id *)arg1;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id *)arg2;
- (id)fp_copyToTempFolderWithFilename:(id)arg1 error:(id *)arg2;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 byCopying:(_Bool)arg2 error:(id *)arg3;
- (void)fp_hideExtension:(_Bool)arg1;
- (_Bool)fp_isFolder;
- (unsigned long long)fp_fileSize;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (id)fp_scopeDescription;
- (id)fp_shortDescription;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
@end
