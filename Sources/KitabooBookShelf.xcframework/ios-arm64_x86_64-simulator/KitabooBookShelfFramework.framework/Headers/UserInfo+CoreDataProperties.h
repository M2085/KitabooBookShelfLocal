//
//  UserInfo+CoreDataProperties.h
//  Kitaboo
//
//  Created by Gaurav Bhatia.
//  Copyright © 2018 Hurix System. All rights reserved.
//
//

#import "UserInfo+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface UserInfo (CoreDataProperties)

+ (NSFetchRequest<UserInfo *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSNumber *client_id;
@property (nullable, nonatomic, copy) NSString *clientAuthToken;
@property (nullable, nonatomic, copy) NSString *coverPhotoURL;
@property (nullable, nonatomic, copy) NSString *email_id;
@property (nullable, nonatomic, copy) NSString *first_name;
@property (nullable, nonatomic, copy) NSNumber *isLoggedIn;
@property (nullable, nonatomic, copy) NSNumber *isTokenLogIn;
@property (nullable, nonatomic, copy) NSString *last_name;
@property (nullable, nonatomic, copy) NSNumber *level;
@property (nullable, nonatomic, copy) NSString *loginToken;
@property (nullable, nonatomic, copy) NSNumber *pageTransitionType;
@property (nullable, nonatomic, copy) NSString *password;
@property (nullable, nonatomic, copy) NSString *profilePicURL;
@property (nullable, nonatomic, copy) NSString *role_description;
@property (nullable, nonatomic, copy) NSNumber *role_id;
@property (nullable, nonatomic, copy) NSString *role_name;
@property (nullable, nonatomic, copy) NSNumber *screenShotGrabCount;
@property (nullable, nonatomic, copy) NSNumber *unsyncedScreenshotGrabCount;
@property (nullable, nonatomic, copy) NSString *token;
@property (nullable, nonatomic, copy) NSNumber *user_id;
@property (nullable, nonatomic, copy) NSString *user_name;
@property (nullable, nonatomic, copy) NSString *userLoggedInTime;
@property (nullable, nonatomic, copy) NSNumber *userServerID;
@property (nullable, nonatomic, copy) NSString *partnerReferenceID;

@end

NS_ASSUME_NONNULL_END
