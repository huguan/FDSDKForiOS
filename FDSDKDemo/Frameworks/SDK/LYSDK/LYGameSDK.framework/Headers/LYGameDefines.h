//
//  LYGameDefines.h
//  LYDemoSDK
//
//  Created by LG on 16/8/23.
//  Copyright (c) 2016年 LG. All rights reserved.
//

// 区域
typedef enum _LY_Location_Type_{
    LYLocationInTest,  //内网测试
    LYLocationTest,  //外网测试
    LYLocationCn,  //国内
    LYLocationTw,  //繁体区
}LYLocation;

// 离开平台的类型
typedef enum _LY_LeavedPlatform_Type_{
    LYPlatformLeavedUnknown    = 0,
    LYPlatformLeavedFromLoginRegist,   // 离开登录注册页面
    LYPlatformLeavedFromUserCenter,    // 包括个人中心页面
    LYPlatformLeavedFromCharge,        // 离开充值页面
    LYPlatformLeavedFromPay,           // 离开支付页面
    LYPlatformLeavedFromChargeAnaPay,  // 离开充值并支付页面
    LYPlatformLeavedFromPause,         // 离开暂停页面
}LYPlatformLeavedType;




extern NSString * const kLYAppId;
extern NSString * const kLYAppKey;
extern NSString * const kLYAppScheme;
extern NSString * const kLYAppPayKey;