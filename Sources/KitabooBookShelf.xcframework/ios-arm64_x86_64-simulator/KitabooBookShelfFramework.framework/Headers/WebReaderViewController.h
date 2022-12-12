//
//  WebReaderViewController.h
//  KItabooSDK
//
//  Created by Priyanka Singh on 04/01/19.
//  Copyright © 2019 Hurix Systems. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Kitaboo_Reader_SDK/Kitaboo_Reader_SDK-Swift.h>
#import <KitabooSDKWithReader/HDReaderSettingModel.h>


NS_ASSUME_NONNULL_BEGIN
@protocol WebReaderViewControllerDelegate<NSObject>
/**
 Will be called user close the reader
 * @param1 bookID  of the current book
 */
-(void)didClosedWebReaderForBookID:(NSNumber *)bookID andClassID:(NSString *)classID;
-(void)sessionExpired;

@end

@interface WebReaderViewController : UIViewController
-(id)initWithHTMLBookPath:(NSString*)bookPath WithBookID:(NSNumber*)bookID WithUser:(KitabooUser*)user withBookTitle:(NSString *)bookTitle withClass:(NSString*)classId withScormID:(NSString *)scormID;
@property (nonatomic,weak) id<WebReaderViewControllerDelegate>delegate;
@property (nonatomic, strong) HDReaderSettingModel *userSettingsModel;

@end

NS_ASSUME_NONNULL_END
