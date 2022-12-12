//
//  ClientConfigData.h
//  Kitaboo
//
//  Created by Gaurav Bhatia.
//  Copyright © 2018 Hurix System. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ClientConfigData : NSObject
{
    
}
+ (ClientConfigData *) getInstance;

- (NSString *)getClientName;
- (NSString *)getClientID;
- (NSString *)getBaseURL;
- (NSString *)getMicroServicesBaseURL;
- (NSString *)getSingleSignInBaseURL;
- (NSString *)getAppStoreURL;
- (BOOL)isAutoLoginEnable;
- (BOOL)isPageTransitionModeEnable;
- (BOOL)isSelectLanguageFeatureEnable;
- (BOOL)isAirDropSharingEnable;
- (BOOL)isScreenRecordingEnable;
- (NSMutableDictionary *)getSupportedLanguages;
- (NSString *)getDefaultLanguage;
- (BOOL)isSignInForgotPasswordEnabled;
- (BOOL)isElasticSearchEnabled;
- (BOOL)isProfileChangePasswordEnabled;
- (BOOL)isProfileEditingEnabled;
- (BOOL)isBookshelfAccessCodeEnabled;
- (BOOL)isDefaultReaderLocalizationBundle;
- (BOOL)isRememberMeEnabled;
- (NSString *)getBookShelfVersion;
- (BOOL)isReaderFurtherPageEnabled;
- (BOOL)isScreenCapturingEnable;
-(NSInteger)getScreenShotGrabLimit;
- (BOOL)isFIBLevelMathKeyboardEnabled;
- (BOOL)isNextPreviousMediaFeatureEnabled;
- (BOOL)isCDNCookiesEnabledForMediaBooks;
- (BOOL)isGoogleClassRoomSignInEnabled;
- (BOOL)isCleverSignInEnabled;
- (BOOL)isClasslinkSignInEnabled;
- (BOOL)isDefaultReaderAccessibilityBundle;
- (BOOL)isMultiSessionEnabled;
- (BOOL)IsPushNotificationEnabled;
- (BOOL)isTextAnnotationEnable;
- (BOOL)isMyDataPrintEnabled;
- (BOOL)isSortingEnabled;
- (BOOL)isBoookSortingEnabled;
- (BOOL)isCategorySortingEnabled;
- (BOOL)isMultiInstituteEnabled;
- (NSString *)googleAPIKey;
- (BOOL)IsAudioNoteAndSearchEnabled;
- (BOOL)isGoogleTranslateEnabled;
- (BOOL)isUsingDefaultIconForMathFormula;
- (BOOL)isImmersiveReaderEnabled;
- (NSString *)getImmersiveReaderTokenURL;
- (BOOL)isThumbnailForReflowableEnabled;
- (BOOL)isHelpTourEnabled;
@end
