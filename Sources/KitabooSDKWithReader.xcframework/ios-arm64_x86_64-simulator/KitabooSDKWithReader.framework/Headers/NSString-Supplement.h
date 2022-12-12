//
//  NSString-Supplement.h
//  Kitaboo 3.0
//


#import <Foundation/Foundation.h>


@interface NSString(Expanded)

+ (NSString*)stringFromInteger:(NSUInteger)numberToConvert;
//+ (NSString*)stringWithUniChar:(unichar)value;
//+ (NSString*)stringFromDate:(NSDate*)date;
//+ (NSString *)formatStringFromDate:(NSDate *)date;
//- (NSDate*)dateFromString;
//- (NSString*)stringBetweenString:(NSString*)start andString:(NSString*)end;
//+ (NSString*)encodeString:(NSString*)string;
//- (NSString *)encodeString:(NSStringEncoding)encoding;
//+ (NSString *)stringFromTimeInterval:(NSTimeInterval)interval;
//+ (NSString *)stringFromFloatTime:(double)interval;
//+ (NSString *)formattedStringFromDate:(NSDate *)date;
+ (NSString *)formattedLocalStringFromDate:(NSDate *)date;
+ (NSString *)formattedMonthFirstDateString:(NSDate *)date;
//+ (NSString *)formattedUTCStringFromDate:(NSDate *)date;
+ (NSString*)stringFromUTCDate:(NSDate*)date;
- (NSDate*)utcDateFromStringForGMTTimeZone;
- (BOOL)containsString:(NSString *)subString;
- (BOOL)isEqualToStringIgnoreCase:(NSString *)aString;
//- (BOOL)hasPrefixIgnoreCase:(NSString *)aString;
//- (BOOL)hasSuffixIgnoreCase:(NSString *)aString;
//- (NSComparisonResult)dateCompare:(NSString *)s2;
//- (BOOL)isAllDigits;
- (NSNumber*)numberValue;
- (NSDate*)utcDateFromString;
//- (NSString *)getUTCFormateDate;
- (NSDate*)formattedDateFromString;
//+ (NSString *)capitilizeEachWord:(NSString *)sentence;
//+ (NSString *)makeProperCase:(NSString *) string;
- (BOOL)isValideMailId;
//+ (NSString *)stringByRemovingAllSpaces:(NSString *) string;
//+ (NSString *)stringByRemovingInvalidCharactersInString:(NSString *) string;
//+ (BOOL) invalidCharExistsInString:(NSString *) string;
//+ (NSString *)stringByAddingEscapeCharaters:(NSString *) string;
//+ (NSString *)formattedDateFromSting:(NSDate *)date withFormat:(NSString *)dateFormat;
//- (NSString *) stringByAppendingAndExcludingNullString:(NSString *) string withSeparator:(NSString *) separator;
//+ (NSString *) stringFromSQLiteStatement:(sqlite3_stmt *)statement forColoum:(const int)num;
+ (NSString *) getLocalizedStringForDateString:(NSString*)date;
- (NSDate*)formattedDateFromString:(NSString *)format;

@end
