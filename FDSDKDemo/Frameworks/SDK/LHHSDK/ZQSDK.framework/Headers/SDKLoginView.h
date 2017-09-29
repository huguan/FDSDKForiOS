//
//  SDKLoginView.h
//  Test
//
//  Created by 王培 on 2017/3/2.
//  Copyright © 2017年 Mr.wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>


@protocol SDKLoginViewDelegate <NSObject>
//登录回调
- (void)loginData:(NSDictionary *)dict;

@end

@interface SDKLoginView : UIView<WKScriptMessageHandler, WKNavigationDelegate, WKUIDelegate>

@property (nonatomic, strong) UIView *backView;

@property (nonatomic, strong) WKWebView *webView;

@property (nonatomic, strong) UILabel *titleLab;//标题
@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) UIImageView *helpImg;

@property (nonatomic, strong) UIView *failedView;//加载失败

@property (nonatomic, strong) NSTimer *timer;//加载计时

@property (nonatomic, strong) NSURL *currentURL;//当前加载的url

@property (nonatomic) BOOL is_addHelp;

@property (nonatomic, weak) id<SDKLoginViewDelegate> delegate;
@end
