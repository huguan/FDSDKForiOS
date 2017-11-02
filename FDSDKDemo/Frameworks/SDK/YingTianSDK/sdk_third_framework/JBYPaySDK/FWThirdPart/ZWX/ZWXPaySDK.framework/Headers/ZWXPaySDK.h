//
//  ZWXPaySDK.h
//  ZWXPaySDK
//
//  Created by sky-red on 16/7/26.
//  Copyright © 2016年 深圳梓微兴科技发展有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZWXPayReqObject : NSObject <NSCopying>

@property (nonatomic, copy) NSString *mchId;
@property (nonatomic, copy) NSString *prepayId;
@property (nonatomic, copy) NSString *tradeType;
@property (nonatomic, copy) NSString *prepayUrl;
@property (nonatomic, copy) NSString *packageJSON;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end

@interface ZWXPayRespObject : NSObject <NSCopying>

/**
 *  支付结果，支付成功返回 YES, 其它返回 NO
 */
@property (nonatomic, assign) BOOL status;

/**
 *  支付状态的描述信息, 为支付状态为NO时会显示失败的描述
 */
@property (nonatomic, copy) NSString *returnMsg;

@end

/**
 *
 */
@interface ZWXPaySDK : NSObject

/**
 *  获取支付SDK对象
 *
 *  @return
 */
+ (instancetype)defaultService;

/**
 *  发送支付请求
 *
 *  @param reqObject      请求对象
 *  @param viewController 发起支付请求的视图控制器
 *  @param block          支付结果回调
 */
- (void)sendPayReq:(ZWXPayReqObject *)reqObject
    viewController:(UIViewController*)viewController
     completeBlock:(void (^) (ZWXPayRespObject *respObject))blcok;

/**
 *  获取sdk的版本
 *
 *  @return
 */
- (NSString *)getSDKVersion;

/**
 *  检测是否安装了微信
 *
 *  @return YES安装， NO未安装
 */
- (BOOL)isWXAppInstalled;

@end


