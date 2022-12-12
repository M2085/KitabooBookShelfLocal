//
//  KitabooMigratedBooks+CoreDataProperties.h
//  Kitaboo 5.0
//
//  Created by Rajat.Babhulgaonkar on 14/03/19.
//  Copyright © 2019 Hurix System. All rights reserved.
//
//

#import "KitabooMigratedBooks+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface KitabooMigratedBooks (CoreDataProperties)

+ (NSFetchRequest<KitabooMigratedBooks *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSNumber *bookId;
@property (nullable, nonatomic, copy) NSNumber *userId;
@property (nullable, nonatomic, copy) NSString *local_version;

@end

NS_ASSUME_NONNULL_END
