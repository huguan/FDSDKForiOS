//
//  MCHApi.h
//  Payment
//
//  Created by 梦创 .
//  Copyright © 梦创. All rights reserved.
//

#import "OrderInfo.h"
#import "GameAppInfo.h"
#import "ApiConfigInfo.h"

#import "AssistiveTouch.h"



typedef void(^CompletionBlock)(NSDictionary *resultDic);

@interface MCHApi : NSObject
{
    @private
    CompletionBlock _zfbBlock;
}

@property (nonatomic, strong) CompletionBlock zfbBlock;


/**
 *  创建支付单例服务
 *
 *  @return 返回单例对象
 */
+ (MCHApi*) sharedInstance;

-(void)initApi:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions ;

/**
 *  登录接口
 *
 *  @param gameappinfo    应用信息
 *  @param superview      调用登录的控制器view，使用self.view
 *  @param completion     登录结果回调Block
 */
-(void) addLoginView:(id)superview gameInfo:(GameAppInfo *)gameappinfo completion:(CompletionBlock)completion;

-(void) addLoginView:(GameAppInfo *)gameappinfo completion:(CompletionBlock)completion;

-(void) addLoginView:(CompletionBlock)completion;

/**
 *  退出接口
 *
 *  @param completion     退出回调Block
 */
-(void) exitLogin:(CompletionBlock)exitBlock;

/**
 *  支付接口
 *
 *  @param orderStr       订单信息
 *  @param completionBlock 支付结果回调Block
 */
-(void) pay:(OrderInfo *)orderStr
   completionBlock:(CompletionBlock)completionBlock;

/**
 *  苹果支付接口
 *
 *  @param orderStr       订单信息
 *  @param completionBlock 支付结果回调Block
 */
-(void) appPay:(OrderInfo *)orderStr
completionBlock:(CompletionBlock)completionBlock;

/**
 *  支付结果
 *
 *  @param resultDic       支付结果
 */
-(void) pushPayResult:(NSDictionary *)resultDic;

/**
 *  注销接口
 */
-(void) mcLogout;

/**
 *  悬浮窗
 */
-(void) addFloatingView;

/**
 *  移除悬浮窗
 */
-(void) removeFloatingView;
/**
 *  当前版本号
 *@param NSString  返回版本号
 */
-(NSString *) versionStr;

/**
 *  修改玩家等级
 *@param NSString  玩家等级
 *@param resultDict  返回修改结果
 */
-(void) changePlayerLevel:(NSString *)playerLevel
          completionBlock:(void(^)(NSDictionary *resultDict))resultDict;

/**
 *  修改角色名称
 *
 *@param NSString  角色名称
 *@param resultDict  返回修改结果
 */
-(void) changeRoleName:(NSString *)roleName
          completionBlock:(void(^)(NSDictionary *resultDict))resultDict;

-(void) gameDetailView;
/**
 * 防沉迷接口
 *@param resultDict  返回修改结果
 */
-(void)getUserType:(CompletionBlock)typeBlock;
/*
 * @return UUID（不涉及私有API）
 **/
-(NSString *)deviceUUID;
/*
 * @return 屏幕分辨率
 **/
-(NSString *)deviceSize;
/*
 * @return 设备操作系统 (例：iPhone OS9.3.2)
 **/
-(NSString *)deviceSystemName;
/*
 * @return 当前网络状态 （当前网络状态不可达、Wifi、2G、3G、4G、WWAN、未知）
 **/
-(NSString *)currentNetWork;
/*
 * @return 设备运营商
 **/
-(NSString *)currentOperator;
/*
 * @return 手机型号 iPhone 系列、iPod 系列、iPad 系列、火星（火星代表未知）
 **/
-(NSString *)deviceModel;

-(NSString *) getAppScheme;

/**
 *  用于入口类文件处理第三方回调
 *
 */
- (void)application:(UIApplication *)application openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation;


- (void)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;

- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;

- (void)applicationWillEnterForeground:(UIApplication *)application;

- (void)applicationWillResignActive:(UIApplication *)application;

- (void)applicationDidBecomeActive:(UIApplication *)application;





@end
