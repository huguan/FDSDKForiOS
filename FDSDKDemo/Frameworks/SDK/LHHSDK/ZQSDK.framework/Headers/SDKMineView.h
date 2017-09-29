//
//  SDKMineView.h
//  ZQHYSDK
//
//  Created by 王培 on 2017/2/14.
//  Copyright © 2017年 Mr.wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@protocol SDKMineViewDelegate <NSObject>
//切换账号
- (void)switchAccount;
@end

@interface SDKMineView : UIView<UITableViewDelegate,UITableViewDataSource,WKScriptMessageHandler, WKNavigationDelegate, WKUIDelegate>
@property (nonatomic, strong) UITableView *tableview;
@property (nonatomic, strong) NSArray *cellAry;

@property (nonatomic, strong) UIView *navView;//导航栏
@property (nonatomic, strong) UIImageView *setImg;//设置图片
@property (nonatomic, strong) UIImageView *bgImg;//头部图片

@property (nonatomic, strong) UILabel *titleLab;//标题

@property (nonatomic, strong) UIView *platView;//平台币
@property (nonatomic, strong) UILabel *platLab;//平台币
@property (nonatomic, strong) UIView *accView;//账号
@property (nonatomic, strong) UILabel *accLab;//账号

@property (nonatomic, strong) WKWebView *webView;//网页

@property (nonatomic, strong) NSDictionary *dict;//个人中心数据

@property (nonatomic, strong) UIView *failedView;//加载失败

@property (nonatomic, strong) NSTimer *timer;//加载计时

@property (nonatomic, strong) NSURL *currentURL;//当前加载的url

@property (nonatomic, weak) id<SDKMineViewDelegate> delegate;


@end
