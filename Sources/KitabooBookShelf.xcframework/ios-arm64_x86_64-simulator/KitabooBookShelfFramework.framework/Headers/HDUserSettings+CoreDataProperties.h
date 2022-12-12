//
//  HDUserSettings+CoreDataProperties.h
//  Kitaboo 5.0
//
//  Created by Rajat.Babhulgaonkar on 05/04/19.
//  Copyright © 2019 Hurix System. All rights reserved.
//
//

#import "HDUserSettings+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface HDUserSettings (CoreDataProperties)

+ (NSFetchRequest<HDUserSettings *> *)fetchRequest;

@property (nullable, nonatomic, retain) NSObject *data;
@property (nullable, nonatomic, copy) NSString *user_id;
@property (nullable, nonatomic, copy) NSObject *localUserSettings;

@end

NS_ASSUME_NONNULL_END
