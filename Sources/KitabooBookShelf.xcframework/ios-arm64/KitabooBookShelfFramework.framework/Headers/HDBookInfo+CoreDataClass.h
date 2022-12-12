//
//  HDBookInfo+CoreDataClass.h
//  Kitaboo
//
//  Created by Mandar Choudhary on 24/03/20.
//  Copyright © 2020 Hurix System. All rights reserved.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CategoryInfo, NSObject;

NS_ASSUME_NONNULL_BEGIN

@interface HDBookInfo : NSManagedObject

@end

NS_ASSUME_NONNULL_END

#import "HDBookInfo+CoreDataProperties.h"
#import "CategoryInfo+CoreDataClass.h"
