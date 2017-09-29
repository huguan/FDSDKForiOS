//
//  SUtils.h
//
//  Created by dev on 2017/8/11.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIImage.h>

@interface SUtils : NSObject

+ (UIImage *)imageFromBundle:(NSString *)name;
+ (void)openWebView:(NSString *)url;

@end
