//
//  SDKPayView.h
//  Test
//
//  Created by 王培 on 2017/3/14.
//  Copyright © 2017年 Mr.wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

typedef NS_ENUM(NSUInteger, payReturnCode) {
    pay_success = 0,    //支付成功
    pay_cancel  = 1,    //支付取消
    pay_other   = 2,    //支付其它错误
    pay_close   = 3     //关闭支付界面
};


@protocol SDKPayViewDelegate <NSObject>
// 支付回调
- (void)sdk_pay:(payReturnCode)code;

// 关闭支付界面
- (void)sdk_close;

@end

@interface SDKPayView : UIView<WKScriptMessageHandler, WKNavigationDelegate, WKUIDelegate>

@property (nonatomic, strong) WKWebView *webView;

@property (nonatomic, strong) UIView *backView;

@property (nonatomic, strong) UILabel *titleLab;

@property (nonatomic, strong) UIView *failedView;//加载失败

@property (nonatomic, strong) NSTimer *timer;//加载计时

@property (nonatomic, strong) NSURL *currentURL;//当前加载的url

@property (nonatomic) int payType;//支付方式1支付宝 0微信

@property (nonatomic, weak) id<SDKPayViewDelegate> delegate;
/** 设置支付界面方法
 *  amount 订单金额
 *  extendsInfo 拓展信息，有些字符不能用，#可以用,为空时要用空字符串，不能用空指针
 *  serverid 区服id
 */
- (void)setData:(NSString *)amount serverid:(NSString *)serverid extendsinfo:(NSString *)extendsinfo;
@end
