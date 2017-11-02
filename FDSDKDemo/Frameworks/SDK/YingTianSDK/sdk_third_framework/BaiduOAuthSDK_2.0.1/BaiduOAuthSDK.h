//
//  BaiduOAuthSDK.h
//  BaiduOAuthSDK
//
//  Created by 夏文海 on 14-5-13.
//  Copyright (c) 2014年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BaiduAuthorizeDelegate;
@protocol BaiduAPIRequestDelegate;
@protocol BaiduAuthCodeDelegate;

@interface BaiduOAuthSDK : NSObject

/*
 * 初始化Baidu SDK
 */
+ (void)initWithAPIKey:(NSString *)apiKey appId:(NSString *)appId;

/*
 * 判断用户的授权状态
 */
+ (BOOL)isUserTokenValid;

/*
 * 用户登录，进行授权
 */
+ (void)authorizeWithTargetViewController:(UIViewController *)targetViewController scope:(NSString*)scope andDelegate:(id<BaiduAuthorizeDelegate>)delegate;

/*
 *
 */
+ (void)smsAuthWithTargetViewController:(UIViewController *)targetViewController scope:(NSString*)scope andDelegate:(id<BaiduAuthorizeDelegate>)delegate;

/*
 * 用户注册
 */
+ (void)registerWithTargetViewController:(UIViewController *)targetViewController scope:(NSString*)scope andDelegate:(id<BaiduAuthorizeDelegate>)delegate;

/*
 * 用户登出
 */
+ (void)currentUserLogout;

/*
 * 调用Open API方法
 */
+ (void)apiRequestWithUrl:(NSString *)requestUrl
               httpMethod:(NSString *)httpMethod
                   params:(NSDictionary *)params
              andDelegate:(id<BaiduAPIRequestDelegate>)delegate;

/*
 * SSO时处理百度客户端调起的操作
 */
+ (BOOL)handleOpenURL:(NSURL *)url;

/*
 * Authorization Code方式登录
 */

+ (void)authorizationCodeWithTargetViewController:(UIViewController *)targetViewController
                                            scope:(NSString *)scope
                                       redirctUrl:(NSString *)redirectUrl
                                       needSignUp:(BOOL)needSignUp
                                      andDelegaet:(id<BaiduAuthCodeDelegate>)delegate;

/*
 * Authorization Code 方式 短信授权
 */
+ (void)smsAuthCodeWithTargetViewController:(UIViewController *)targetViewController
                                      scope:(NSString*)scope
                                 redirctUrl:(NSString *)redirectUrl
                                 needSignUp:(BOOL)needSignUp
                                andDelegate:(id<BaiduAuthCodeDelegate>)delegate;

/*
 * Authorization Code 方式 短信授权-预留手机号
 */
+ (void)smsAuthCodeWithTargetViewController:(UIViewController *)targetViewController
                                      scope:(NSString*)scope
                                     mobile:(NSString *)mobile
                                 redirctUrl:(NSString *)redirectUrl
                                 needSignUp:(BOOL)needSignUp
                                andDelegate:(id<BaiduAuthCodeDelegate>)delegate;
@end
