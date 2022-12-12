//
//  HDBookInfo+CoreDataProperties.h
//  Kitaboo
//
//  Created by Jyoti Suthar on 05/05/21.
//  Copyright © 2021 Hurix System. All rights reserved.
//
//

#import "HDBookInfo+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface HDBookInfo (CoreDataProperties)

+ (NSFetchRequest<HDBookInfo *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *accesscode;
@property (nullable, nonatomic, copy) NSString *action;
@property (nullable, nonatomic, copy) NSString *archiveDate;
@property (nullable, nonatomic, copy) NSString *assetType;
@property (nullable, nonatomic, copy) NSString *author;
@property (nullable, nonatomic, copy) NSNumber *avgTimePerPage;
@property (nullable, nonatomic, copy) NSString *bookDescription;
@property (nullable, nonatomic, copy) NSNumber *bookDislikeCount;
@property (nullable, nonatomic, copy) NSString *bookdownloadurl;
@property (nullable, nonatomic, copy) NSNumber *bookFormat;
@property (nullable, nonatomic, copy) NSString *bookGUID;
@property (nullable, nonatomic, copy) NSNumber *bookid;
@property (nullable, nonatomic, copy) NSNumber *bookLikeCount;
@property (nullable, nonatomic, copy) NSNumber *bookPackageId;
@property (nullable, nonatomic, copy) NSString *bookSize;
@property (nullable, nonatomic, copy) NSString *category;
@property (nullable, nonatomic, copy) NSNumber *categoryID;
@property (nullable, nonatomic, retain) NSObject *categoryIdList;
@property (nullable, nonatomic, retain) NSObject *categoryList;
@property (nullable, nonatomic, retain) NSObject *chapterAccessIdsList;
@property (nullable, nonatomic, copy) NSString *classID;
@property (nullable, nonatomic, copy) NSString *classInfo;
@property (nullable, nonatomic, retain) NSObject *clientBookMetaData;
@property (nullable, nonatomic, copy) NSNumber *collectionID;
@property (nullable, nonatomic, copy) NSString *collectionThumbnail;
@property (nullable, nonatomic, copy) NSString *collectionTitle;
@property (nullable, nonatomic, copy) NSString *collectionType;
@property (nullable, nonatomic, copy) NSNumber *completionPercentage;
@property (nullable, nonatomic, copy) NSNumber *currentPage;
@property (nullable, nonatomic, copy) NSString *currentVersion;
@property (nullable, nonatomic, copy) NSString *dateCreated;
@property (nullable, nonatomic, copy) NSString *dictID;
@property (nullable, nonatomic, copy) NSString *dictionaryId;
@property (nullable, nonatomic, copy) NSNumber *ebookID;
@property (nullable, nonatomic, copy) NSString *epubEncryptionType;
@property (nullable, nonatomic, copy) NSString *expiryDate;
@property (nullable, nonatomic, copy) NSString *filePath;
@property (nullable, nonatomic, copy) NSString *formatName;
@property (nullable, nonatomic, copy) NSNumber *hasClassAssociation;
@property (nullable, nonatomic, copy) NSNumber *hasPreviewPackage;
@property (nullable, nonatomic, retain) NSData *imageData;
@property (nullable, nonatomic, copy) NSString *isbn;
@property (nullable, nonatomic, copy) NSNumber *isBookDeleted;
@property (nullable, nonatomic, copy) NSNumber *isCollectionBook;
@property (nullable, nonatomic, copy) NSNumber *isCollectionParent;
@property (nullable, nonatomic, copy) NSNumber *isDownloadable;
@property (nullable, nonatomic, copy) NSNumber *isDownloaded;
@property (nullable, nonatomic, copy) NSNumber *isEncrypted;
@property (nullable, nonatomic, copy) NSNumber *isFavourite;
@property (nullable, nonatomic, copy) NSNumber *isFavSynced;
@property (nullable, nonatomic, copy) NSNumber *isLiked;
@property (nullable, nonatomic, copy) NSNumber *isMoreInfoSynced;
@property (nullable, nonatomic, copy) NSNumber *isMoreInfoViewed;
@property (nullable, nonatomic, copy) NSNumber *isPrepackage;
@property (nullable, nonatomic, copy) NSNumber *isPreviewDownloded;
@property (nullable, nonatomic, copy) NSNumber *isRecentlyAdded;
@property (nullable, nonatomic, copy) NSNumber *isRecentlyViewed;
@property (nullable, nonatomic, copy) NSDate *lastAddedTime;
@property (nullable, nonatomic, copy) NSDate *lastLaunchedTime;
@property (nullable, nonatomic, copy) NSString *lastPageFolio;
@property (nullable, nonatomic, copy) NSNumber *lastPageViewed;
@property (nullable, nonatomic, copy) NSString *lastSyncDate;
@property (nullable, nonatomic, copy) NSString *licenseKey;
@property (nullable, nonatomic, copy) NSString *local_version;
@property (nullable, nonatomic, copy) NSString *maxHighlights;
@property (nullable, nonatomic, copy) NSString *maxSelectableWords;
@property (nullable, nonatomic, copy) NSNumber *orientation;
@property (nullable, nonatomic, copy) NSNumber *pagesRead;
@property (nullable, nonatomic, copy) NSString *pentoolThickness;
@property (nullable, nonatomic, copy) NSString *preview_local;
@property (nullable, nonatomic, copy) NSString *preview_url;
@property (nullable, nonatomic, copy) NSString *publisherBookTitle;
@property (nullable, nonatomic, copy) NSString *publisherCategory;
@property (nullable, nonatomic, copy) NSNumber *readItemId;
@property (nullable, nonatomic, copy) NSNumber *recordType;
@property (nullable, nonatomic, copy) NSString *serverVersion;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *thumbnail_local;
@property (nullable, nonatomic, copy) NSString *thumbnail_url;
@property (nullable, nonatomic, copy) NSNumber *thumbnailUpdatedOnServer;
@property (nullable, nonatomic, copy) NSNumber *timeNeeded;
@property (nullable, nonatomic, copy) NSNumber *timestamp;
@property (nullable, nonatomic, copy) NSString *title;
@property (nullable, nonatomic, copy) NSNumber *total_pages;
@property (nullable, nonatomic, copy) NSNumber *totalCollectionBooks;
@property (nullable, nonatomic, copy) NSNumber *totalTimeSpend;
@property (nullable, nonatomic, copy) NSNumber *type;
@property (nullable, nonatomic, copy) NSString *userId;
@property (nullable, nonatomic, copy) NSString *userRoleType;
@property (nullable, nonatomic, copy) NSString *videoToc;
@property (nullable, nonatomic, copy) NSDate *viewedTime;
@property (nullable, nonatomic, retain) NSSet<CategoryInfo *> *bookCategories;
@property (nullable, nonatomic, retain) NSSet<HDBookInfo *> *bookCollections;
@property (nullable, nonatomic, retain) NSSet<HDBookInfo *> *collectionBooks;

@end

@interface HDBookInfo (CoreDataGeneratedAccessors)

- (void)addBookCategoriesObject:(CategoryInfo *)value;
- (void)removeBookCategoriesObject:(CategoryInfo *)value;
- (void)addBookCategories:(NSSet<CategoryInfo *> *)values;
- (void)removeBookCategories:(NSSet<CategoryInfo *> *)values;

- (void)addBookCollectionsObject:(HDBookInfo *)value;
- (void)removeBookCollectionsObject:(HDBookInfo *)value;
- (void)addBookCollections:(NSSet<HDBookInfo *> *)values;
- (void)removeBookCollections:(NSSet<HDBookInfo *> *)values;

- (void)addCollectionBooksObject:(HDBookInfo *)value;
- (void)removeCollectionBooksObject:(HDBookInfo *)value;
- (void)addCollectionBooks:(NSSet<HDBookInfo *> *)values;
- (void)removeCollectionBooks:(NSSet<HDBookInfo *> *)values;

@end

NS_ASSUME_NONNULL_END
