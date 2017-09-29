//
//  HGPayParamsModel.h
//  LocalSDK
//
//  Created by MoreFire on 2017/4/11.
//  Copyright © 2017年 MoreFire. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface HotDockSDKPayParamsModel : NSObject
//整合sdk支付需要的参数
/**
*  订单号
*/
@property (nonatomic,strong ) NSString *orderId;
/*
 cp订单号
 */
@property (nonatomic, strong) NSString *cpOrder;
/**
 *  订单金额（大于等于1的整数）
 */
@property (nonatomic, assign) int  cost;

/**
 *  商品标识-->内购id
 */
@property (nonatomic, strong) NSString *productId;

/**
 *  商品名称
 */
@property (nonatomic, strong) NSString *goodsName;
/*
 * 商品id
 */
@property (nonatomic, strong) NSString *goodsID;
/**
 *  商品描述
*/

//@property (nonatomic, strong) NSString *productDesc;

/**
 *  角色标识
 */
@property (nonatomic, strong) NSString *roleId;

/**
 *  角色名称
 */
@property (nonatomic, strong) NSString *roleName;
/**
 *  角色等级
 */
@property (nonatomic, strong) NSString *roleLevel;
/**
 *  区服标识
 */
@property (nonatomic, strong) NSString *serverId;

/**
 *  区服名称
 */
@property (nonatomic, strong) NSString *serverName;

/**
 *  拓展参数
 */
@property (nonatomic, strong) NSString *extension;
/**
 * 联系上下文
 */
@property (nonatomic, strong) UIViewController *context;
//是否服务端或客户端下单-->1默认为客户端下单
@property (nonatomic, strong) NSString *isClientPay;
//充值回调地址
@property (nonatomic, strong) NSString *notifyUrl;
//充值数量
@property (nonatomic, strong) NSString *nums;
//充值总额
@property (nonatomic,assign ) int      total;

+(HotDockSDKPayParamsModel*)HGPayParamsModel;
@end
