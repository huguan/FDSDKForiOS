//
//  HN669SDK.h
//  HN669SDK抽象层
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 HN669sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "HN669SDKProxy.h"
#import "HN669User.h"
#import "HN669Pay.h"

#ifdef __cplusplus
#define HN669SDK_EXTERN		extern "C" __attribute__((visibility ("default")))
#else
#define HN669SDK_EXTERN	    extern __attribute__((visibility ("default")))
#endif

// HN669SDK的核心类
// 负责插件管理和事件分发
@interface HN669SDK : NSObject

/// HN669SDK的参数
@property (nonatomic, copy) NSDictionary* sdkParams;
/// APP支持的屏幕方向
@property UIInterfaceOrientationMask supportedOrientations;
/// 渠道号
@property (readonly) int channelId;
// 渠道名
@property (readonly) NSString* channelName;

// 委托回调对象
@property id<HN669SDKDelegate> delegate;

// HN669Server代理
@property (strong, nonatomic) HN669Proxy* proxy;

/// 默认的账号接口实现
@property (strong, nonatomic) id defaultUser;
/// 默认的支付接口实现
@property (strong, nonatomic) id defaultPay;

/// 获取HN669SDK的单例
+(HN669SDK*) sharedInstance;

/// 添加插件
-(void) registerPlugin:(NSObject*)plugin;

/**
 * @brief 查找接口对象
 * @param name 插件的名称
 * @param protocolType 接口的类型
 * @return 如果指定了protocolType，就返回对应接口的对象， 否则返回插件对象
 */
-(NSObject*) getInterfaceByName:(NSString*)name andProtocol:(Protocol *)protocolType;

-(NSArray*) plugins;

-(void) initWithParams:(NSDictionary*)params;

-(BOOL) isInitCompleted;

-(void) setupWithParams:(NSDictionary*)params;
-(void) submitExtraData:(HN669UserExtraData*)data;
-(id) customCall:(NSString*)method withParams:(NSDictionary*)params;

#pragma mark -- 帐号登录接口 --
-(void) login;
-(void) logout;
-(void) switchAccount;-(BOOL) hasAccountCenter;

-(void) loginCustom:(NSString*)customData;
-(void) showAccountCenter;

#pragma mark -- 支付充值接口 --
-(void) pay:(HN669ProductInfo*) profuctInfo;
-(void) finishTransaction:(NSString*)transactionIdentifier;

#pragma mark -- 提交数据接口 --
-(void) submitUserInfo:(HN669UserExtraData*)userlog;
@end
