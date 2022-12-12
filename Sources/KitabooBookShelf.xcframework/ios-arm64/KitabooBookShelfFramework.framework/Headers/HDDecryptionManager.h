//
//  HSEdifyDecryptionManager.h
//  Edify
//
//  Created by Vikas Dalvi  on 11/11/19.
//  Copyright © 2019 Hurix System. All rights reserved.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


#define MEDIA_FILE_PART1 @"dec_"
#define MEDIA_FILE_PART2_AUDIO @"audio"
#define MEDIA_FILE_PART2_IMAGE @"image"
#define MEDIA_FILE_PART2_VIDEO @"video"


@interface HDDecryptionManager : NSObject

+ (NSString *)hdDecryptionKey;

- (NSString *)getDecryptedFileForVideoAtPath:(NSString *)markupPath
                             andEncrytionKey:(NSString *)key;

- (NSData * _Nullable)decrypteData:(NSData *) data withKey:(NSString *) key;

@end

NS_ASSUME_NONNULL_END
