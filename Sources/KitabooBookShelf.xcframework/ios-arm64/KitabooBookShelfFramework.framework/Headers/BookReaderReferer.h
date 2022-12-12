//
//  BookReaderReferer.h
//  Kitaboo
//
//

#import <Foundation/Foundation.h>
#import <KitabooSDKWithReader/ReaderViewController.h>
#import "ClientConfigData.h"

@interface BookReaderReferer : NSObject
{
    id readerViewController;
}
-(id)getReaderViewControllerWithPath:(NSString *)bookPath withBookID:(NSNumber *)bookID andUser:(KitabooUser *)user withReaderSettingModel:(HDReaderSettingModel *)readerSettingModel withBaseURL:(NSString *)baseURL withClientID:(NSString *)clientID AndBookVersion:(NSString *)bookVersion;;
-(id)getReaderViewControllerWithPath:(NSString *)bookPath withBookID:(NSNumber *)bookID andUser:(KitabooUser *)user withISBN:(NSString *)isbn withReaderSettingModel:(HDReaderSettingModel *)readerSettingModel withBaseURL:(NSString *)baseURL withClientID:(NSString *)clientID AndBookVersion:(NSString *)bookVersion;
@end


