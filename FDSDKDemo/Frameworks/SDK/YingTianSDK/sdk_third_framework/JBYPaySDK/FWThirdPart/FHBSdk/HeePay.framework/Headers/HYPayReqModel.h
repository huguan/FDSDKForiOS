//
//  HYPayReqModel.h
//  HeepaySourceDemo
//
//  Created by Jiangrx on 3/8/16.
//  Copyright © 2016 HuiYuan.NET. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    
    HYPayTypeJCard      = 10,   //骏卡
    HYPayTypePhoneCard  = 12,   //电话卡
    HYPayTypeGameCard   = 40,   //其他游戏卡
    HYPayTypeWeChat     = 30,   //微信支付
    HYPayTypeAliPay     = 22,   //支付宝
    HYPayTypeShortPay   = 18    //银行卡快捷支付。
    
} HYPayType;

@interface HYPayReqModel : NSObject

@property (nonatomic,copy) NSString * token_id;         //预支付令牌。初始化之后成功之后，由汇元网后台返回。
@property (nonatomic,copy) NSString * agent_id;         //商户号，由汇元网下发。
@property (nonatomic,copy) NSString * agent_bill_id;    //商户系统单据号。
@property (nonatomic,assign) HYPayType pay_type;        //支付类型。
@property (nonatomic,copy) NSString * schemeStr;        //返回商户应用必传Schemes。
@property (nonatomic,strong) UIViewController * rootViewController; //唤起汇元网插件的根控制器。快捷支付必传。

@end
