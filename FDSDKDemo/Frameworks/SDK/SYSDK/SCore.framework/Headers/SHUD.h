//
//  SHUD.h
//
//  Created by dev on 2017/8/10.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SHUD : NSObject

+ (void)defaultSettings;
+ (void)showSuccessWithStatus:(NSString *)string;
+ (void)showErrorWithStatus:(NSString *)string;
+ (void)showInfoWithStatus:(NSString *)string;
+ (void)showWithStatus:(NSString *)status;
+ (void)dismiss;

@end
