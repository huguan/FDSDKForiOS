//
//  TracelessCpNotification.h
//  JjyxSdk
//
//  Created by Mac on 2017/5/4.
//  Copyright © 2017年 wanqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TracelessCpNotification : NSObject

extern NSString *const kVSCPInitNotification;      // 初始化完成
extern NSString *const kVSCPLoginNotification;     // 登录完成
extern NSString *const kVSCPLogoutNotification;    // 注销完成
extern NSString *const kVSCPPayNotification;       // 固定支付完成
extern NSString *const kVSCPSyncGameDateNotification; // 同步数据完成
extern NSString *const KVSNotificationGetUserProfileSuccess; // 选择购物卷

@end
