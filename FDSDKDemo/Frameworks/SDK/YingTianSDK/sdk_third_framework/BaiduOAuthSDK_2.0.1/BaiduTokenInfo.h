//
//  BaiduTokenInfo.h
//  Baidu SDK
//
//  Created by xiawh on 12-9-25.
//  Copyright (c) 2012年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * 用户授权信息类
 */
@interface BaiduTokenInfo : NSObject

/*
 * 令牌
 */
@property (nonatomic,retain)NSString *accessToken;

/*
 * 授予的权限列表
 */
@property (nonatomic,retain)NSString *scope;

/*
 * 过期日期
 */
@property (nonatomic,retain)NSDate *expiresIn;
/*
 *  登录名称
 */
@property (nonatomic,copy) NSString *displayName;
@end
