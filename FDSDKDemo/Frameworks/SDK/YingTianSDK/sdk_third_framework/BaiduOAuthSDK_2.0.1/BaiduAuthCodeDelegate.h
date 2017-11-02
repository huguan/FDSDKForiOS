//
//  BaiduAuthCodeDelegate.h
//  BaiduOAuthSDK
//
//  Created by yao on 14-8-8.
//  Copyright (c) 2014年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BaiduAuthCodeDelegate <NSObject>

/*
 * Authorization Code方式登录成功
 */

- (void)authorizationCodeSuccessWithCode:(NSString *)code;
/*
 * Authorization Code方式登录失败
 */
- (void)authorizationCodeWithError:(NSError*)error;
@end
