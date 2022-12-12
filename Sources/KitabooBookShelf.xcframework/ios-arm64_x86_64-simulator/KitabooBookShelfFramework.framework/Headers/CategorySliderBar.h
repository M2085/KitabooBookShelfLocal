//
//  CategorySliderBar.h
//  KItabooSDK
//
//  Created by amol shelke on 16/07/18.
//  Copyright © 2018 Hurix Systems. All rights reserved.
//
@class RTLorLTRFlowLayout;//#import "KitabooBookShelfFramework-Swift.h"
#import <UIKit/UIKit.h>
@class CategorySliderBar;
@protocol CategorySliderBarDelegate<NSObject>
@optional
-(void)didSelectCategoryName:(NSString*)categoryName;
- (CGFloat)minimumInterCategorySpacingForCategoryBar:(CategorySliderBar*)CategoryActionBar;
@end

@interface CategorySliderBar : UIView <UICollectionViewDataSource,UICollectionViewDelegate>
-(id)initWithFrame:(CGRect)frame withItemsArray:(NSArray*)itemsArray;
@property (weak, nonatomic) id<CategorySliderBarDelegate> delegate;
@property (nonatomic, assign)NSInteger selectedIndex;
-(void)setSelectedItemColor:(UIColor*)selectedItemColor;
-(void)setUnSelectedItemColor:(UIColor*)unSelectedItemColor;
-(void)setSelectedItemBorderColor:(UIColor*)selectedItemBorderColor;
-(void)setFontName:(NSString*)fontName withSize:(CGFloat)size;
-(void)setSelectedFontName:(NSString*)fontName withSize:(CGFloat)size;
- (void)selectCategory:(NSString*)categoryName;
- (void)setCategoriesData:(NSArray *)categories;
- (void)reloadCategoryCollection;
-(void)scrollCategoryCollectionToItemAtIndexPath: (NSIndexPath *)indexPath;
@end
