//
//  UGCHandler.h
//  Kitaboo 5.0
//
//  Created by Rajat.Babhulgaonkar on 28/02/19.
//  Copyright © 2019 Hurix System. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Kitaboo_Reader_SDK/Kitaboo_Reader_SDK.h>

NS_ASSUME_NONNULL_BEGIN
@protocol OldMigrationUGCHandlerDelegate <NSObject>
@optional
-(void)didOldDBMigrationFailedWithError;
-(void)didOldDBMigrationCompletedSuccessfully;

@end

@interface OldMigrationUGCHandler : NSObject
@property (nonatomic,weak) id<OldMigrationUGCHandlerDelegate>delegate;
-(void)getAllUnsyncedData;
-(void)insertDownloadedBookDataIntoNewDB;
-(void)saveUGCIntoSDkDBForuser:(NSString *)userId forBook:(KitabooBookVO *)bookVO;
-(BOOL)isUnsyncedDataPresentForUserId:(NSNumber *)userId;
-(void)saveUserInfoIntoDB;
@end

NS_ASSUME_NONNULL_END
