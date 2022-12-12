//
//  ProfileSettingsRefererController.h
//  Kitaboo
//
//  Created by Mandar Choudhary on 17/09/19.
//  Copyright © 2019 Hurix System. All rights reserved.
//

#import <UIKit/UIKit.h>
//Added Nik
//#import "HDProfileSettingsViewController.h"
NS_ASSUME_NONNULL_BEGIN

@interface ProfileSettingsRefererController : UIViewController
{
    id profileViewController;
}
-(id)getProfileSettingsViewController;
@end

NS_ASSUME_NONNULL_END
