//
//  YLPlatformSDK.h
//  YLPlatformSDK
//
//  Created by yuling on 16/3/14.
//  Copyright © 2016年 yuling. All rights reserved.
//
#import <Foundation/Foundation.h>
/**
 自动登录失败原因
 */
typedef enum {
    //网络异常
    AutoLoginFailureHttp=1000,
    //账号或密码异常
    AutoLoginFailureAccountOrPassword=2000,
    //未启动自动登录
    AutoLoginFailureSelectedNO=3000,
    //不存在账号
    AutoLoginFailureAccountNil=4000
} AutoLoginFailure;

/**
 *  充值状态
 */
typedef enum {
    //充值成功
    PaymentStatusSussess=1000,
    //充值异常
    PaymentStatusError=2000,
    //充值失败
    PaymentStatusFailure=3000,
} PaymentStatus;



@interface YLPlatformSDK_Kit : NSObject

/**
 * @brief loginState=0 未登录  1已登录  2注销
 */
@property (nonatomic,assign,readonly) unsigned int loginState;

/**
 * @brief 登入成功 回调
 */
@property (nonatomic, copy) void (^ylLoginSuccessBack)(NSString * paramToken);
/**
 * @brief 登入失败 回调
 */
@property (nonatomic, copy) void (^ylAutoLoginFailure)(AutoLoginFailure code);
/**
 * @brief 关闭充值页回调
 */
@property (nonatomic, copy) void (^ylCloseRechargeBack)();
/**
 * @brief 充值成功状态
 */
@property (nonatomic, copy) void (^ylResultCallBack)(PaymentStatus code);
/**
 * @brief 退出账号
 */
@property (nonatomic, copy) void (^ylExitAccount)(NSString * currentUserName);
/**
 * @brief     初始化SDK信息
 * @return    YlPlatformSDK    生成的YlPlatformSDK对象实例
 */
+ (YLPlatformSDK_Kit *)sharedInstance;


-(void)showMessage;
-(void)showError:(NSString *)string;
-(void)showSuccess:(NSString *)string;
-(void)hideHUDForView;
/**
 * 注意，需要重写代理方法  delegate＝self
 * @brief     弹出游龙登录页面
 * @animated  是否动画
 * @return    无返回
 */
- (void)showLogin:(BOOL)animated;

/**
 *  @brief     弹出游龙充值页面
 *  @return    无返回
 *  @param orderId     订单号
 *  @param serverNum   服务区
 *  @param playerName  游戏角色名称
 *  @param productName 商品名称
 *  @param amount      充值金额
 *  @param extra       扩展信息
 *  @param gameName    游戏名称
 *  @param productId   苹果内购产品ID
 *  @param success     苹果内购支付成功回调
 *  @param animated    是否显示动画
 */
- (void)showRechargeOrderId:(NSString *)orderId
                  serverNum:(NSString *)serverNum
                 playerName:(NSString *)playerName
                productName:(NSString *)productName
                     amount:(float)amount
                      extra:(NSString *)extra
                   gameName:(NSString *)gameName
                   animated:(BOOL)animated
               andproductId:(NSString *)productId
              andcompletion:(void (^)(NSString * resultData))success;
/**
 *  @brief     获取用户的角色，等级，区服
 *  @return    无返回
 *  @param rolename    角色
 *  @param serverNum   服务区
 *  @param roleId      角色ID
 *  @param level       等级
 */
-(void)getUserRolename:(NSString *)rolename
             andRoleID:(NSString *)roleId
          andServerNum:(NSString *)servernum
              andLevel:(NSString *)level
            complement:(void (^)(bool))result;
/**
 * @brief     获取当前用户名
 * @return    返回当前用户名
 */
- (NSString *)currentUserName;
/**
 * @brief    用于支付宝等第三方回调APP
 * @param    url
 */
-(BOOL)sdkApplicationPayment:(NSURL *)url;

/**
 *  @brief     注销当前账号
 *  @return    无返回
 */
-(void)cancelAccount;

@end
