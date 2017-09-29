//
//  HGSDK.h
//  LocalSDK
//
//  Created by MoreFire on 2017/4/12.
//  Copyright © 2017年 MoreFire. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HotDockSDKParameters.h"
#import "HotDockSDKInitModel.h"
#import "HotDockSDKUserInfo.h"
#import "HotDockSDKPayParamsModel.h"
#import "HotDockSDKParameters.h"

@interface HotDockSDKHeader : NSObject
typedef void (^hgLoginSuccessBlock)(HotDockSDKUserInfo *userModel);
//初始化sdk
+(void)HGSDKInitWithParameters:(HotDockSDKInitModel *)sdkParameters;

//登录
+(void)HGSDKLoginWithParameters:(HotDockSDKUserInfo*)userModel logback:(void(^)(id logBack))codeBack;

//支付
+(void)HGSDKPay:(HotDockSDKPayParamsModel*)paymodel payCallBack:(void(^)(id codeback))callback;
//服务端下单的情况,调用此支付接口
+(void)HGServicePay:(HotDockSDKPayParamsModel*)paymodel payCallBack:(void(^)(id codeback))callback;

//上传玩家信息
+(void)HGSDKUploadUserInfo:(HotDockSDKUserInfo *)userinfo uploadCallBack:(void(^)(id codeback))callback;
//获取用户名
+(NSString*)HGSDKGetuserName;
//获取用户id
+(NSString*)HGSDKGetuserId;
//当前session
+(NSString*)HGSDKGetSession;
//退出
+(void)HGSDKLogout:(id)context logout:(void(^)(id codeback))callback;

@end
