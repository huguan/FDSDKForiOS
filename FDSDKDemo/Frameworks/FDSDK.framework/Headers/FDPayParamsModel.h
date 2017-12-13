//
//  FDPayParamsModel.h
//  FDSDK
//
//  Created by 熙文 张 on 2017/01/11.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FDPayParamsModel : NSObject


/**
 *  订单编号
 */
@property (nonatomic, strong) NSString *orderId;

/**
 *  订单金额（大于等于1的整数）
 */
@property (nonatomic, assign) int price;

/**
 *  商品标识(互冠SDK需要与苹果后台的商品ID对应)
 */
@property (nonatomic, strong) NSString *productId;

/**
 *  商品名称
 */
@property (nonatomic, strong) NSString *productName;

/**
 *  商品描述

 */
@property (nonatomic, strong) NSString *productDesc;

/** 举例：使用6元人民币购买了60钻石的档位，其中商品份量为1份，商品数量为60个（钻石） **/
/**
 *  商品份量(一般为1)
 */
@property (nonatomic) int productNumber;

/**
 *  商品数量(一般为支付金额 * 兑换比)
 */
@property (nonatomic) int productCount;

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

@property (nonatomic, strong) NSString *sign;

- (NSString *)getSignWithDictory:(NSDictionary *)dictionary;


@end
