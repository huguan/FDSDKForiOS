//
//  YHUserInfoService.h
//  GamesSDKDebug
//
//  Created by dony on 15/7/9.
//  Copyright (c) 2015年 YinHuGame. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol YHUserInfoServiceDelegate;

@interface YHUserInfoService : NSObject

/**
 初始化方法

 */
+ (void)start;
/**
 热云打印日子
 
 @param print YES 打印日志，NO 不打印日志，默认为NO
 */
+ (void)reyunSetPrinLog:(BOOL)print;


/** 加载登录和注册页面
 @param delegate 登陆成功或者失败等回调对象，如果不关注状态，可以设为nil

 */
+ (void)showLoginAndRegisterView:(id<YHUserInfoServiceDelegate>)delegate;

/** 加载支付页面 - 支付成或者失败无需回调，服务器直接对接
 @param subject  订单标题，由调用方传入 (必须)
 @param price    订单金额，单位RMB元，由调用方传入 (必须)
 @param orderNo  CP订单号 (必须)
 @param remark   订单备注 (非必须)
 @param productID  产品ID (必须)
 @param serverID  区服ID (必须)
 @param serverName 区服名称 (非必须)
 @param roleID 角色ID (必须)
 @param roleName  角色名称 (必须)
 
 */
+ (void)startPayWithSubject:(NSString*)subject price:(NSInteger)price orderNo:(NSString*)orderNo remark:(NSString*)remark productID:(NSString*)productID serverID:(NSString*)serverID serverName:(NSString*)serverName roleID:(NSString*)roleID roleName:(NSString*)roleName;

/**
 *  上报玩家信息
 *
 *  @param roleName   角色名称         必须
 *  @param roleLever  角色等级         必须
 *  @param roleServer 角色所在区服      必须
 *  @param roleMoney  角色剩余游戏币    必须
 *  @param extar      扩展信息，可不传  非必须
 */
+ (void)updateUserInfoRequstRoleName:(NSString *)roleName
                           roleLever:(int)roleLever
                          roleServer:(NSString *)roleServer
                           roleMoney:(int)roleMoney
                               extar:(NSString *)extar;

/**
 *  上报广点通接口
 *
 */
+ (void)guangDianTongReported;


@end


/**
 `YHUserInfoService`对象用到的一些回调方法，包括登陆成功、登陆失败、注册成功，注册失败等事件。
 */
@protocol YHUserInfoServiceDelegate <NSObject>

/**
 @brief 登录成功回调
 @param dicUserInfo 登录成功服务端返回的信息
 */
- (void)didYHUserLoginSucess:(NSDictionary *)dicUserInfo;

/**
 @brief 登录失败回调
 @param dicUserInfo 登录失败服务端返回的信息
 */
- (void)didYHUserLoginFailure:(NSDictionary *)dicUserInfo;

/**
 @brief 注册成功回调
 @param dicUserInfo 注册成功服务端返回的信息
 */
- (void)didYHUserRegisterSucess:(NSDictionary *)dicUserInfo;

/**
 @brief 注册失败回调
 @param dicUserInfo 注册失败服务端返回的信息
 */
- (void)didYHUserRegisterFailure:(NSDictionary *)dicUserInfo;

/**
 @brief 支付成功回调
 @param dicUserInfo 支付成功服务端返回的信息
 */
- (void)didYHUserPaySucess:(NSString *)dicUserInfo;

/**
 @brief 支付失败回调
 @param dicUserInfo 支付失败服务端返回的信息
 */
- (void)didYHUserPayFailure:(NSString *)dicUserInfo;
//@optional


@end


