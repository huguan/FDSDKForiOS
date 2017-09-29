//
//  07073sySDK.h
//  gameCenterSDK_test
//
//  Created by 宋宋 on 15-3-19.
//  Copyright (c) 2015年 宋宋. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "SDKMineView.h"

typedef NS_ENUM(NSUInteger, initReturnCode) {
    init_success = 0,     //初始化成功
    init_data_error  = 1, //数据错误（平台标识没提交）
    init_exact_param = 2, //确少参数
    init_param_error = 3, //参数错误（pid或appkey错误）
    init_failed = 4,      //游戏数据不存在，请联系管理员
};

@interface GameCenterSDK :NSObject

+ (GameCenterSDK *)sharedGame;

/** 游戏初始化
 *  pid 厂商合作id
 *  scheme 支付返回标识
 *  appKey 游戏key（由服务器提供）
 */

- (void)initWithPid:(NSString *)pid Scheme:(NSString *)scheme appKey:(NSString *)appKey delegate:(id<SDKMineViewDelegate>)delegate success:(void (^)(initReturnCode code))succ fialed:(void (^)(id error))fail;

//获取悬浮窗是否显示判断
+ (BOOL)getIsShow;

//设置悬浮窗是否显示（请勿修改）
+ (void)setIsShow:(BOOL)is_show;

//获取厂商合作id
+(NSString *)getPid;

//获取分包码
+(NSString *)getCid;

//获取gameid
+(NSString *)getGameId;

//获取游戏名
+(NSString *)getGameName;

//获取支付返回标识
+(NSString *)getScheme;

//获取服务器提供游戏key
+(NSString *)getAppKey;

//获取登录域名
+(NSString *)getLoginURL;

//获取支付域名
+(NSString *)getPayURL;

//获取用户名
+(NSString *)getUsername;

//设置用户名
+(void)setUserName:(NSString *)username;

//获取过期标识
+(NSString *)getToken;

//设置过期标识
+(void)setToken:(NSString *)token;

//设置域名
+(void)setBaseURL:(NSString *)url;

//获取域名
+(NSString *)getBaseURL;

//获取服务器时间
+(NSString *)getServerTime;

@end
