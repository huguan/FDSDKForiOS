//
//  LYGameProxy.h
//  LYDemoSDK
//
//  Created by LG on 16/8/23.
//  Copyright (c) 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LYGameDelegate.h"

@class LYUser;
@class LYGameConfig;


@interface LYGameProxy : NSObject
@property (nonatomic, retain) id<LYGameDelegate> platformDelegate;

+ (LYGameProxy*) instance;

/**
 *	平台初始化方法（初始化为异步操作，请在收到初始化通知后继续后续操作）
 *	@param	config  游戏参数配置项
 */
-(void) initWithConfig:(LYGameConfig*)config;


/**
 @brief 登录平台,进入登录或者注册界面入口
 @param para 预留参数，默认为nil
 @note  异步接口，需实现LYGameDelegate的onLogin接口处理用户登录结果
 */
-(void) login:(NSDictionary*)para;


/**
 @brief 注销
 @param para 预留参数，默认为nil
 */
- (void)logout:(NSDictionary*)para;

/**
 @brief 进入用户中心
 */
-(void) enterUserCenter;

/**
 @brief 显示悬浮窗
 */
-(void) showTouch;

/**
 @brief 隐藏悬浮窗
 */
-(void) hideTouch;

/**
 *	初始化服务器
 *	@param	serverId  游戏参数配置项
 *	@param	uid     平台返回的UID
 *  @note   异步接口，需实现LYGameDelegate的onServerInit接口处理服务器初始化结果
 */
-(void) initServer:(NSString*) serverId UID:(NSString *)uid;

/**
 *  定额消费接口，进行购买虚拟货币或者指定物品（需登录并成功初始化服务器才可进行消费操作）
 *
 *  @param itemName        购买物品名称
 *  @param itemId          购买物品Id
 *  @param amount          购买物品总金额，单位:分
 *  @param callBackInfo    透传信息
 *  @param callBackUrl     回调地址
 *  @param detail          商品详情信息
 *  @note  异步接口，需实现LYGameDelegate接口处理消费结果
 */
-(void)payPlatform:(NSString*)itemName itemId:(NSString*)itemId amount:(int)amount callBackInfo:(NSString*)callBackInfo  orderDetail:(NSString *)detail;

- (void) application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void) applicationDidEnterBackground:(UIApplication *)application;
- (void) applicationWillEnterForeground:(UIApplication *)application;
- (void) applicationWillTerminate:(UIApplication *)application;
- (void) applicationDidReceiveMemoryWarning:(UIApplication *)application;
- (BOOL) application:(UIApplication *)application handleOpenURL:(NSURL *)url;
- (BOOL) application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;
- (NSUInteger) application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window;
- (LYUser*) getUserInfo;
//设置rootView
-(void)setRootView:(UIView *)view;
@end