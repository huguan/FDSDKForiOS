//
//  LYSDKManager.h
//  LYSDKProject
//
//  Created by Soulbo on 2017/4/24.
//  Copyright © 2017年 6y.com.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

@protocol LYSDKManagerDelegate;

@interface LYSDKManager : NSObject <SKPaymentTransactionObserver, SKProductsRequestDelegate>


/**
 @brief 初始化方法
 
 @param appID   乐游appID(乐游网分配).
 @param gameID  游戏ID(乐游网分配)
 @param channel 渠道号
 */
+ (void)initWithAppID:(NSString *)appID gameID:(NSString *)gameID;

/** 
 @brief 加载登录和注册页面
 
 @param delegate 登陆成功或者失败等回调对象
 */
+ (void)showLogin: (id<LYSDKManagerDelegate>)delegate;

/** 
 @brief 加载支付页面 - 支付成或者失败无需回调，服务器直接对接
 
 @param amount      订单金额，单位RMB元，由调用方传入 (必须)
 @param productID   商品ID，由调用方传入 (必须)
 @param productName 订单标题，由调用方传入 (必须)
 @param productDesc 订单备注 (非必须)
 @param serverID    区服ID (必须)
 @param roleID      角色ID (必须)
 @param roleName    角色名称 (必须)
 @param roleLevel   角色等级 (必须)
 @param attach      CP扩展参数 (必须)
 */
+ (void)showPayment: (int)amount productID:(NSString*)productID productName:(NSString*)productName productDesc:(NSString*)productDesc serverID:(NSString*)serverID roleID:(NSString*)roleID roleName:(NSString*)roleName roleLevel:(NSString*)roleLevel attach:(NSString*)attach delegate:(id<LYSDKManagerDelegate>)delegate;

@end


@protocol LYSDKManagerDelegate <NSObject>
/**
 @brief 登录成功回调
 @param dicUserInfo 登录成功服务端返回的信息
 */
- (void)didLYLoginSuccess: (NSDictionary *)dicUserInfo;
/**
 @brief 登录失败回调
 @param data 登录失败服务端返回的信息
 */
- (void)didLYLoginFailure: (NSDictionary *)data;
/**
 @brief 注册成功回调
 @param dicUserInfo 注册成功服务端返回的信息
 */
- (void)didLYRegisterSuccess: (NSDictionary *)dicUserInfo;
/**
 @brief 注册失败回调
 @param data 注册失败服务端返回的信息
 */
- (void)didLYRegisterFailure: (NSDictionary *)data;

/**
 @brief 支付宝支付回调
 @param data 支付宝SDK返回的信息
 */

- (void)didAliPayResult: (NSDictionary *)data;

/**
 @brief 支付宝支付回调
 @param data 支付宝SDK返回的信息
 */

- (void)didWxPayResult: (NSDictionary *)data;

@end
