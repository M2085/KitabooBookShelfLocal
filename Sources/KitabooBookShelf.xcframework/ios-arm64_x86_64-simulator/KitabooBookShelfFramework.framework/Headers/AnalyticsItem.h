//
//  AnalyticsItem.h
//  AnalyticsDemo
//
//  Created by Jyoti Suthar on 25/03/19.
//  Copyright © 2019 Jyoti Suthar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AnalyticsItem : UIView
@property (nonatomic,assign)BOOL isClassLevel;
- (void)setIconFontSize:(CGFloat)fontSize;
- (void)setProgress:(float)progress andProgressBorderColor:(UIColor *)color;
- (void)setIconString:(NSString *)iconString;
- (void)setTitleText:(NSString *)title withFont:(UIFont *)font;
-(void)setFirstValueLabel:(NSString *)value withFont:(UIFont *)font;
-(void)setSecondValueLabel:(NSString *)value withFont:(UIFont *)font;
-(void)setFirstValueLabelTitleColor:(UIColor *)color;
-(void)setShapeLayerWidth:(float)width;
-(void)setUpShapeLayer;
-(NSString *)getTitle;
-(void)removeLayersFromView;

@property (nonatomic,assign)BOOL isMediaBook;
-(void)updateMediaBookAnalyticsItem:(NSString *)textString withTextFont:(UIFont *)textFont firstValue:(NSString *)firstValue withFirstValueFont:(UIFont *)firstValuefont lastValue:(NSString*)lastValue withSecondValueFont:(UIFont *)secondValuefont withFirstStringColor:(UIColor *)color withShapeLayerWidth:(float)width;
-(NSString *)getTimeString:(NSInteger)seconds;
-(NSString *)getUnitString:(NSInteger)seconds;
-(void)setAccessibility;
@end
