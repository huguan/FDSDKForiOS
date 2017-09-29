//
//  SYSDKPlatform.h
//
//  Created by htdev on 2017/8/7.
//  Copyright © 2017年 上海黑桃互动网络科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SCore/SModulePlatform.h>

@interface SYSDKPlatform : SModulePlatform

+ (instancetype)getInstance;

/**
 *  @brief 登录
 */
- (void)doLogin;

/**
 *  @brief 账号切换
 */
- (void)doAccountSwitch;

/**
 *  @brief 支付
 *  @param params 支付参数
 */
- (void)doPay:(NSDictionary<NSString *, NSString *> *)params;

/**
 *  @brief 防沉迷查询
 */
- (void)doAntiAddictionQuery;

/**
 *  @brief 进入平台
 *  极少数渠道需要在游戏内添加一个“平台中心”按钮，点击后调用该方法展示渠道平台中心。
 */
- (void)doEnterPlatform;

/**
 *  @brief 角色升级
 *  @param newRoleLevel 新等级
 */
- (void)onRoleLevelUpgrade:(NSUInteger)newRoleLevel;

/**
 *  @brief 角色名更新
 *  @param newRoleName 新角色名
 */
- (void)onRoleNameUpdate:(NSString *)newRoleName;

/**
 *  @brief 设置角色信息
 *  @param params 角色信息
 */
- (void)setRoleInfo:(NSDictionary<NSString *, NSString *> *)params;

/**
 *  @brief 设置悬浮按钮位置(可选)，默认左上(SHoverButtonLocationTopLeft)
 *  @param location 位置
 */
- (void)setHoverButtonLocation:(SHoverButtonLocation)location;

/**
 *  @brief 设置悬浮按钮显示或隐藏(可选)，默认显示(NO)，没有特殊需求不建议调用
 *  @param isHidden 显示(NO)或隐藏(YES)
 */
- (void)setHoverButtonHidden:(BOOL)isHidden;

/**
 *  @brief 获取用户信息(可选)
 *  @return 用户信息
 */
- (NSDictionary<NSString *, NSString *> *)getUser;

/**
 *  @brief 获取用户登录状态(可选)
 *  @return 已登录(YES)、未登录(NO)
 */
- (BOOL)isLogined;

/**
 *  @brief 是否含有平台用户中心
 *  @return 有(YES)、没有(NO)
 */
- (BOOL)hasPlatformUserEnter;

@end
