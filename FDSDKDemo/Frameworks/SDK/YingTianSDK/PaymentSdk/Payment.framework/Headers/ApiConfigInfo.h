//
//  ApiConfigInfo.h
//  Payment
//
//  Created by 朱进 on 16/8/6.
//  Copyright © 2016年 朱进. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ApiConfigInfo : NSObject

/**
 * 支付宝支付回调
 **/
@property (nonatomic, copy) NSString *appScheme;


/**
 * 微信AppId
 **/
@property (nonatomic, copy) NSString *wxAppId;
/**
 * 微博AppId
 **/
@property (nonatomic, copy) NSString *weiboAppId;

/**
 * 微博AppURL
 **/
@property (nonatomic, copy) NSString *weiboURL;

/**
 * QQAppId
 **/
@property (nonatomic, copy) NSString *qqAppId;

/**
 * 百度APPKey
 **/
@property (nonatomic, copy) NSString *baiduAppKey;

/**
 * 百度APPSecret
 **/
@property (nonatomic, copy) NSString *baiduAppID;
/**
 * 聚宝云回调
 **/
@property (nonatomic, copy) NSString *JBYAPPScheme;
/**
 * 请求域名
 **/
@property (nonatomic, copy) NSString *requestURL;

-(void)getAllSource;//获取以上所有数据
-(NSString *)getJBYAPPScheme;//获取聚宝云回调
-(NSString *)getRequestURL;//获取请求域名
@end
