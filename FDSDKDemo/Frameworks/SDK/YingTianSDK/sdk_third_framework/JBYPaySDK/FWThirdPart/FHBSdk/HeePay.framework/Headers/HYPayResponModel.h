//
//  HYPayResponModel.h
//  HeepaySourceDemo
//
//  Created by Jiangrx on 3/8/16.
//  Copyright © 2016 HuiYuan.NET. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HYPayResult) {
    HYPayResultSuccess          = 1,    // 支付成功
    HYPayResultFail             = -1,   // 支付失败
    HYPayResultDealing          = 0,    //单据处理中
    HYPayResultCancel           = -2,   //取消支付
    HYPayResultError            = -3,   // 用户录入信息有误、等一般性错误，
    HYPayResultUnknown          = -4    //获取支付结果失败，当出现这种状态时，需要商户APP主动向商户服务器发起查询请求。
} ;

@interface HYPayResponModel : NSObject

@property (nonatomic,copy) NSString * message;
@property (nonatomic,assign) HYPayResult payResult;

@end
