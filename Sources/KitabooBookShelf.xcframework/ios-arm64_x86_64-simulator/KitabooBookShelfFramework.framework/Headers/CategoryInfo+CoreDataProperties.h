//
//  CategoryInfo+CoreDataProperties.h
//  Kitaboo
//
//  Created by Jyoti Suthar on 05/05/21.
//  Copyright © 2021 Hurix System. All rights reserved.
//
//

#import "CategoryInfo+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface CategoryInfo (CoreDataProperties)

+ (NSFetchRequest<CategoryInfo *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *categoryId;
@property (nullable, nonatomic, retain) NSObject *categoryMetaData;
@property (nullable, nonatomic, copy) NSString *categoryName;
@property (nullable, nonatomic, copy) NSNumber *numberOfBooks;
@property (nullable, nonatomic, copy) NSString *parentId;
@property (nullable, nonatomic, copy) NSString *userID;
@property (nullable, nonatomic, retain) NSSet<HDBookInfo *> *categoryBooks;

@end

@interface CategoryInfo (CoreDataGeneratedAccessors)

- (void)addCategoryBooksObject:(HDBookInfo *)value;
- (void)removeCategoryBooksObject:(HDBookInfo *)value;
- (void)addCategoryBooks:(NSSet<HDBookInfo *> *)values;
- (void)removeCategoryBooks:(NSSet<HDBookInfo *> *)values;

@end

NS_ASSUME_NONNULL_END
