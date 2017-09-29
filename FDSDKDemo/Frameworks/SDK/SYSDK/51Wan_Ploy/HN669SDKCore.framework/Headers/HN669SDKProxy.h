//
//  HN669Proxy.h
//  HN669Proxy
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 HN669sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class HN669ProductInfo;
@class HN669DeviceInfo;
@class HN669UserExtraData;

typedef void (^HN669RequestCallback)(NSURLResponse* response, id data, NSError* connectionError);

// HN669SDK回调接口
@protocol HN669SDKDelegate <NSObject>

-(UIView*) GetView;
-(UIViewController*) GetViewController;

@optional

-(void) OnPlatformInit:(NSDictionary*)params;
-(void) OnUserLogin:(NSDictionary*)params;
-(void) OnUserLogout:(NSDictionary*)params;
-(void) OnPayPaid:(NSDictionary*)params;
-(void) OnEventCustom:(NSString*)eventName params:(NSDictionary*)params;

@end

// HN669SDK的代理类，用于处理HN669SDK的回调事件，数据统计，和HN669Server的通讯
@interface HN669Proxy : NSObject

@property (strong, nonatomic) NSString* userID;

-(id) init;

-(UIView*) GetView;
-(UIViewController*) GetViewController;

-(void) doPlatformInit:(NSDictionary*)param;
-(void) doUserLogin:(NSDictionary*)param;
-(void) doUserLogout:(NSDictionary*)param;
-(void) doPayPaid:(NSDictionary*)param;
-(void) doCustomEvent:(NSString*)eventName params:(NSDictionary*)param;

// 提交设备统计数据
-(void) submitDeviceInfo:(HN669DeviceInfo*)device responseHandler:(HN669RequestCallback)handler;

// 提交用户统计数据
-(void) submitUserInfo:(HN669UserExtraData*)userlog responseHandler:(HN669RequestCallback)handler;

//SDK渠道登录后进行HN669验证
-(void)accountVerification:(NSDictionary*)params responseHandler:(HN669RequestCallback) handler;

// 账号验证方法
//-(void) AccountValidate:(NSDictionary*)params responseHandler:(HN669RequestCallback) handler;

//-(void) requestOrder:(HN669ProductInfo*)params responseHandler:(HN669RequestCallback)handler;

// 充值验证
//-(void) PayValidate:(NSDictionary*)params responseHandler:(HN669RequestCallback)handler;

/// NSDictionary转换为Http的URL参数
+(NSString*) encodeHttpParams:(NSDictionary*)params encode:(NSStringEncoding)encoding;

- (NSURL*) getHN669ServerUrl:(NSString*)relativePath;

/**
 * @brief 向HN669Server发送http请求
 * @param httpParams 请求参数
 * @param requestPath 请求的路径
 * @param handler 回调函数
 * @param showprogress 是否显示Loading菊花
 */
-(void) sendHttpRequest:(NSDictionary *)httpParams toHN669Server:(NSString *)requestPath responseHandler:(HN669RequestCallback)handler showProgess:(Boolean)showprogress;

@end
