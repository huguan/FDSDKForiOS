//
//  HGOrderModel.h
//  HGSDK
//
//  Created by 熙文 张 on 2016/11/16.
//  Copyright © 2016年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HGPayWay) {
    HGPayWayByIAP   = 1,              //苹果支付
    HGPayWayByThird = 2               //第三方支付
};


@interface HGOrderModel : NSObject


/**
 *  服务器Id
 */
@property (nonatomic, strong) NSString *serverId;

/**
 *  金额
 */
@property (nonatomic, assign) int amount;

/**
 *  角色Id
 */
@property (nonatomic, strong) NSString *roleId;

/**
 *  角色名称
 */
@property (nonatomic, strong) NSString *roleName;

/**
 *  对应的Apple道具产品Id
 */
@property (nonatomic, strong) NSString *productId;

/**
 *  商品名称
 */
@property (nonatomic, strong) NSString *productName;

/**
 *  商品描述
 */
@property (nonatomic, strong) NSString *productDescription;

/**
 *  订单号
 */
@property (nonatomic, strong) NSString *orderId;

/**
 *  自定义信息
 */
@property (nonatomic, strong) NSString *customInfo;

/**
 *  订单信息
 */
@property (nonatomic, strong) NSString *orderInfo;



@end
