//
//  ViewController.m
//  FDSDKDemo
//
//  Created by 熙文 张 on 2017/01/17.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import "ViewController.h"
#import <FDSDK/FDSDK.h>
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view setBackgroundColor:[UIColor lightGrayColor]];
    UIImage *buttonImage = [UIImage imageNamed:@"FD_SDK_Button"];
    
    UIButton *loginButton = [UIButton new];
    [loginButton setFrame:CGRectMake(40, 140, 100, 40)];
    [loginButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [loginButton setBackgroundImage:buttonImage forState:UIControlStateNormal];
    [loginButton setTitle:@"登陆" forState:UIControlStateNormal];
    [loginButton addTarget:self action:@selector(loginButtonClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:loginButton];
    
    UIButton *payButton = [UIButton new];
    [payButton setFrame:CGRectMake(40, 200, 100, 40)];
    [payButton setTitle:@"支付一块" forState:UIControlStateNormal];
    [payButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [payButton setBackgroundImage:buttonImage forState:UIControlStateNormal];
    [payButton addTarget:self action:@selector(payButtonClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:payButton];
    
    
    UIButton *logoutButton = [UIButton new];
    [logoutButton setFrame:CGRectMake(200, 140, 100, 40)];
    [logoutButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [logoutButton setBackgroundImage:buttonImage forState:UIControlStateNormal];
    [logoutButton setTitle:@"注销" forState:UIControlStateNormal];
    [logoutButton addTarget:self action:@selector(logoutButtonClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:logoutButton];
    
    UIButton *centerButton = [UIButton new];
    [centerButton setFrame:CGRectMake(200, 200, 100, 40)];
    [centerButton setTitle:@"用户中心" forState:UIControlStateNormal];
    [centerButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [centerButton setBackgroundImage:buttonImage forState:UIControlStateNormal];
    [centerButton addTarget:self action:@selector(centerButtonClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:centerButton];
    
    [[FDSDK sharedInstance] setFdLogoutBlock:^(FDNormalResultModel *result){
        NSLog(@"注销回调");
    }];
}

- (void)loginButtonClick
{
    [[FDSDK sharedInstance] fdLogin:self.view complete:^(FDUserModel *userModel) {
        
        [[FDSDK sharedInstance] fdUpdateProducts:@[@"com.rxgs.600",@"com.rxgs.3000",@"com.rxgs.6800",@"com.rxgs.12800",@"com.rxgs.32800",@"com.rxgs.64800"]];

        [[FDSDK sharedInstance] fdInitServer:@"1"];
        
        //上报玩家信息
        FDRoleModel *roleModel = [FDRoleModel new];
        [roleModel setRoleName:@"GG20思密达"];
        [roleModel setRoleLever:999];
        [roleModel setRoleMoney:10000];
        [roleModel setServerName:@"蜀山传奇"];
        [roleModel setRoleId:@"1"];
        [roleModel setServerId:@"1"];
        [roleModel setPayLevel:@"v15"];
        [roleModel setExtar:@"扩展信息"];
        [[FDSDK sharedInstance] updateRoleInfo:roleModel];

    }];
}


- (void)logoutButtonClick
{
    [[FDSDK sharedInstance] fdLogout];
    

}


- (void)centerButtonClick
{
    [[FDSDK sharedInstance] fdCenter];
}


- (void)payButtonClick
{
    FDPayParamsModel *payParamsModel = [FDPayParamsModel new];
    [payParamsModel setPrice:1];
    [payParamsModel setServerId:@"1"];
    [payParamsModel setServerName:@"蜀山传奇"];
    [payParamsModel setRoleId:@"1"];
    [payParamsModel setRoleName:@"GG20思密达"];
    [payParamsModel setOrderId:[self getOrderStringByTime]];
    [payParamsModel setProductId:@"1"];
    [payParamsModel setProductName:@"元宝"];
    [payParamsModel setRoleLevel:@"20"];
    [payParamsModel setProductDesc:@"花费1人民币购买10元宝"];
    [payParamsModel setExtension:@"extension"];//不能包含中文字符
    [[FDSDK sharedInstance] fdPay:payParamsModel complete:^(FDPayResultCode payResultCode) {
        
        NSLog(@"%ld", payResultCode);
        
    }];
}



- (NSString *)getOrderStringByTime
{
    NSDate *date = [NSDate date];
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"YYYYMMddhhmmssSS"];
    NSString *dateString = [dateFormatter stringFromDate:date];
    NSLog(@"order:%@", dateString);
    return dateString;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
