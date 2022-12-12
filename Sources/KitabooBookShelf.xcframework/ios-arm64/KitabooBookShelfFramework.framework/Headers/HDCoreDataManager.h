//
//  HDCoreDataManager.h
//  NewKitabooReader
//
//  Created by Gaurav Bhatia.
//  Copyright © 2018 Hurix System. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <Kitaboo_Reader_SDK/Kitaboo_Reader_SDK.h>

@interface HDCoreDataManager : NSObject

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContextUI;
@property (strong, nonatomic) NSManagedObjectContext *privateManagedObjectContext;
@property (strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;
- (void)saveToDBContext;
- (NSURL *)applicationDocumentsDirectory;
+ (instancetype)sharedConnectionManager;
@end
