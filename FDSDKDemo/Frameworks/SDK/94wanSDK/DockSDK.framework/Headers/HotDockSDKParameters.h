//
//  HGSDKParameters.h
//  LocalSDK
//
//  Created by MoreFire on 2017/4/11.
//  Copyright © 2017年 MoreFire. All rights reserved.
//

#import <Foundation/Foundation.h>
//回调状态
#define EXEC_SUCC               (0)         //成功
#define EXEC_FAIL_CANCEL        (-1)        //取消
#define EXEC_NETWORK            (-100)      //网络故障
#define EXEC_PARAMS             (-101)      //参数异常
#define EXEC_UNKNOWN            (-102)      //未知错误
#define EXEC_NOT_LOGIN          (-103)      //尚未登录
#define EXEC_ARD_EXITS          (-104)      //已经存在
#define LOGOUT_NOTICE_TOCP      @"sdkbuoyoutEXEC_SUCC" //浮标注销 通知
#define LOGOUT_GAME             @"OUTGAME"             //检测密码 +网路

@interface HotDockSDKParameters : NSObject

@end
