//
//  HeepaySDKManager.h
//  Test
//
//  Created by Jiangrx on 4/21/15.
//  Copyright (c) 2015 zhaoxin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HYPayResponModel.h"
#import "HYPayReqModel.h"


@protocol HeepaySDKManagerDelegate <NSObject>

//生命周期方法。

- (void)heepaySDKWillPresent;   // SDK将要被唤起。
- (void)heepaySDKDidPresent;    // SDK已经被唤起。
- (void)heepaySDKOpenFailure;   // SDK唤起失败。

@end

@interface HYSDKManager : NSObject

//唤起支付钱包关键方法，
+ (void)sendPayRequest:(HYPayReqModel *)payModel delegate:(id <HeepaySDKManagerDelegate>)delegate payResultBlock:(void(^)(HYPayResponModel *payResponModel))resultBlock;

//需要在AppDelegate 的applicationWillEnterForeground:方法中调用.
+(void)heepaySDKWillEnterForeground;

//获取当前SDK版本号。
+(NSString *)getApiVersion;

//支付宝专用。应用之间接收同步通知结果。
+(BOOL)application:(UIApplication *)application openURL:(NSURL *)url;

@end
