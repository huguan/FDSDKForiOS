//
//  LYHud.h
//  LYDemoSDK
//
//  Created by LG on 16/8/23.
//  Copyright (c) 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define DEPRECATED(_version) __attribute__((deprecated))

@interface LYHud : NSObject

+ (void) hide DEPRECATED(1.0.8);
+ (void) hideHud DEPRECATED(1.0.8);
+ (void) showHud DEPRECATED(1.0.8);
+ (void) showHud:(NSString*)caption DEPRECATED(1.0.8);

+ (void) hideToast DEPRECATED(1.0.8);
+ (void) showToast:(NSString*)info DEPRECATED(1.0.8);
+ (void) showToast:(NSString*)info time:(int)time DEPRECATED(1.0.8);
+ (void) showToast:(NSString*)info time:(int)time touchHide:(BOOL)touchHide DEPRECATED(1.0.8);



+ (void) hideWithView:(UIView*)view;
+ (void) hideHudWithView:(UIView*)view;
+ (void) showHudWithView:(UIView*)view;
+ (void) showHudWithView:(UIView*)view info:(NSString*)info;

+ (void) hideToastWithView:(UIView*)view;
+ (void) showToastWithView:(UIView*)view info:(NSString*)info;
+ (void) showToastWithView:(UIView*)view info:(NSString*)info time:(int)time;
+ (void) showToastWithView:(UIView*)view info:(NSString*)info time:(int)time touchHide:(BOOL)touchHide;
@end
