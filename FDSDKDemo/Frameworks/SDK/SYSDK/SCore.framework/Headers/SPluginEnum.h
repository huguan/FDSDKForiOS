//
//  SPluginEnum.h
//
//  Created by dev on 2017/8/31.
//  Copyright © 2017年 dev. All rights reserved.
//

#ifndef SPluginEnum_h
#define SPluginEnum_h

typedef NS_ENUM(NSUInteger, SAntiAddiction)
{
    /** 渠道不支持(当前版本开发商无需关注) */
    SAntiAddictionUnSupport,
    /** 无此用户数据 */
    SAntiAddictionNone,
    /** 未成年 */
    SAntiAddictionNonage,
    /** 已成年 */
    SAntiAddictionAdult
};

typedef NS_ENUM(NSUInteger, SHoverButtonLocation)
{
    /** 左上 */
    SHoverButtonLocationTopLeft,
    /** 右上 */
    SHoverButtonLocationTopRight,
    /** 左中 */
    SHoverButtonLocationMiddleLeft,
    /** 右中 */
    SHoverButtonLocationMiddleRight,
    /** 左下 */
    SHoverButtonLocationBottomLeft,
    /** 右下 */
    SHoverButtonLocationBottomRight,
    /** 默认 */
    SHoverButtonLocationDefault = SHoverButtonLocationTopLeft
};

typedef NS_ENUM(NSUInteger, SAction)
{
    /** 初始化成功 */
    SActionInitSuccess,
    /** 初始化失败 */
    SActionInitFailure,
    /** 登录成功 */
    SActionLoginSuccess,
    /** 登录失败 */
    SActionLoginFailure,
    /** 切换账号-注销成功 */
    SActionAccountSwitchLogoutSuccess,
    /** 切换账号失败 */
    SActionAccountSwitchFailure,
    /** 支付成功 */
    SActionPaySuccess,
    /** 支付失败 */
    SActionPayFailure,
    /** 防沉迷查询成功 */
    SActionAntiAddictionQuerySuccess,
    /** 防沉迷查询失败 */
    SActionAntiAddictionQueryFailure,
    /** 微信查询成功 */
    SActionWechatQuerySuccess,
    /** 应用更新 */
    SActionAppUpdate
};

#endif /* SPluginEnum_h */
