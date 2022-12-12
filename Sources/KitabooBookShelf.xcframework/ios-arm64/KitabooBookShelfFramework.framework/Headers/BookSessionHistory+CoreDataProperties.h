//
//  BookSessionHistory+CoreDataProperties.h
//  Kitaboo 5.0
//
//  Created by Rajat.Babhulgaonkar on 18/04/19.
//  Copyright © 2019 Hurix System. All rights reserved.
//
//

#import "BookSessionHistory+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface BookSessionHistory (CoreDataProperties)

+ (NSFetchRequest<BookSessionHistory *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSNumber *bookID;
@property (nullable, nonatomic, copy) NSString *bookType;
@property (nullable, nonatomic, copy) NSString *launchTime;
@property (nullable, nonatomic, copy) NSString *user_id;

@end

NS_ASSUME_NONNULL_END
