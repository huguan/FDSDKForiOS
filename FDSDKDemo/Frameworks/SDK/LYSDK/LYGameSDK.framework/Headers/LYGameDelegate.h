//
//  LYGameDelegate.h
//  LYGameSDK
//
//  Created by LG on 16/9/21.
//  Copyright (c) 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LYResult.h"
#import "LYGameDefines.h"
@protocol LYGameDelegate <NSObject>


//平台初始化成功
-(void) onGameInitFinished:(LYResult*)result;

//登录结果回调
-(void) onGameLogin :(LYResult*)result;

//登出结果回调
-(void) onGameLogout:(LYResult*)result;

//服务器初始化回调
-(void) onGameServerInit:(LYResult*)result;

//用户状态失效回调
-(void) onUserStateInvalid;

//用户支付回调
-(void) onGamePay:(LYResult*)result;

@end

