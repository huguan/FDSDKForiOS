//
//  SPayOrder.h
//
//  Created by dev on 2017/8/9.
//  Copyright © 2017年 . All rights reserved.
//

#import <SCore/SHttpEntityBase.h>

@interface SPayOrder : SHttpEntityBase

typedef NS_ENUM(NSUInteger, SPayOrderError)
{
    /** 充值关闭 */
    SPayOrderErrorClosed = 30010
};

/** 订单号 */
@property (readonly, copy) NSString *orderId;
/** 支付代码-部分渠道使用 */
@property (readonly, copy) NSString *payCode;
/** 自定义服务器id */
@property (readonly, copy) NSString *customServerId;
/** isUseWebPay */
@property (readonly) BOOL isUseWebPay;
/** webPayURL */
@property (readonly, copy) NSString *webPayURL;

/** 标题 */
@property (readonly, copy) NSString *title;

@property (readonly, copy) NSDictionary *jsonSDK;

@end
