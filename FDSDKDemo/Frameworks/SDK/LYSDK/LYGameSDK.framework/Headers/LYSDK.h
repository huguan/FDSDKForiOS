//
//  LYSDK.h
//  LYDemoSDK
//
//  Created by LG on 16/8/24.
//  Copyright (c) 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LYResult.h"
#import "LYHelperFunc.h"
#import "LYResponseJson.h"
#import "LYDataJson.h"

@interface LYSDK : NSObject 

DELC_SINGLETON(LYSDK);


/// <summary>
/// 更新In-APP Purchase商品信息,请在初始化平台信息后购买商品前调用该方法，更新商品信息以便内购可以顺利进行,该方法只需调用一次.
/// </summary>
/// <param name="productsId">商品信息列表</param>
/// <returns>无返回</returns>
-(void) updateProducts:(NSSet*)products_id_set;

/// <summary>
/// 初始化SDK信息配置。
/// <param name="location">区域</param>
/// <param name="product_id">游戏产品 ID</param>
/// <param name="debug">是否开启debug模式,发布产品时请设置为NO.</param>
/// <returns>无返回</returns>
- (BOOL)init:(NSString*)location
  product_id:(NSString*)producted_id
       debug:(BOOL)debug;




/// <summary>
/// 异步模式注册
/// </summary>
/// <param name="username">用户名</param>
/// <param name="password">密码</param>
/// <param name="handler">注册回调</param>
/// <returns>无返回</returns>
- (void) regist:(NSString*)username
       password:(NSString*)password
       complete:(void (^)(LYResult* result))handler;



/// <summary>
/// 异步模式初始化服务器
/// </summary>
/// <param name="server_id">服务器id</param>
/// <param name="handler">初始化服务器回调</param>
/// <returns>无返回</returns>
-(void)initServer:(void (^)(LYResult*))handler;

//登录返回信息
-(void)getThirdPartyLoginMsg:(NSDictionary *)channelParameters complete:(void (^)(LYResult*))handler;

//获得订单号
- (void) getOrderId:(NSString*)channelId
       channelParam:(NSString*)channelParam
            goodsId:(NSString*)goodsId
             amount:(NSString*)amount
             payExt:(NSString*)payExt
            complete:(void (^)(LYResult*,id))handler;

- (void) changerPay:(void (^)(LYResult*,id))handler;

- (void) getOtherOrderId:(NSString*)orderId payChannel:(NSString *)payChannel selectPay:(NSString *)selectPay
               goodsName:(NSString *)goodsName
                  amount:(NSString*)amount
                  payExt:(NSString*)payExt
                complete:(void (^)(LYResult*,id))handler;
- (void) getH5OrderId:(NSString*)orderId payChannel:(NSString *)payChannel selectPay:(NSString *)selectPay
            goodsName:(NSString *)goodsName
               amount:(NSString*)amount
               payExt:(NSString*)payExt;
-(void)getWXorder:(void (^)(LYResult*,id,id))handler;
-(void)getWXorderResult:(NSString *)orderId payChannel:(NSString *)payChannel completion:(void (^)(LYResult*,id))handler;

-(void) sendAuthCode:(NSString*)mobile type:(int)type complete:(void (^)(LYResult*))handler;
-(void) bindPhoneGuest:(NSString*)mobile authCode:(NSString*)authCode uName:(NSString*)uname pwd:(NSString*)pwd vtoken:(NSString*)vtoken complete:(void (^)(LYDataJson*))handler;
-(void) bindPhone:(NSString*)mobile authCode:(NSString*)authCode complete:(void (^)(LYDataJson*))handler;
- (void)unBindPhone:(NSString*)mobile authCode:(NSString *)authCode uName:(NSString *)uname pwd:(NSString *)pwd vtoken:(NSString *)vtoken complete:(void (^)(LYDataJson *))handler;

-(void) forgetResetPwd:(NSString*)mobile authCode:(NSString*)authCode newPwd:(NSString*)newPwd complete:(void (^)(LYResult*))handler;
-(void) verVerCode:(NSString*)mobile authCode:(NSString*)authCode type:(int)type complete:(void (^)(LYResponseJson*))handler;
-(void) reSetPwd:(NSString*)oldPwd newPwd:(NSString*)newPwd complete:(void (^)(LYResult*))handler;

//手机解绑判断
- (void) removeMobilePhone;

//发送激活日志
-(void) loginActive;
//新接口token获取用户信息
- (void) getAccountEncrypted:(NSString*)token complete:(void (^)(LYResult*))handler;

//新接口登录（麟游接口）
- (void) linnyouLogin:(NSString*)username password:(NSString*)password complete:(void (^)(LYResult*))handler;
//日志打印
-(void) logPrint:(NSString *)logType;
//游客登录
-(void)linnyouVisitorGame:(void (^)(LYResult*))handler;
//登出
-(void)logOut;
//登录注册限制接口
-(void)getUserLimit:(void (^)(LYResult*))handler;

-(void)setSign:(NSMutableDictionary *)parameters;

//删除帐号到本地缓存
-(void) removeUserToKeyChain:(NSString *)userName;

@end