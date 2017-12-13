//
//  UserInitHelp.h
//  JjyxSdk
//
//  Created by Mac on 2017/5/4.
//  Copyright © 2017年 wanqi. All rights reserved.
//
//初始化数据 和用户管理类

#import <Foundation/Foundation.h>
#import "TracelessInitConfigure.h"
#import "TracelessUser.h"

typedef void(^InitSucceed)(void);

@interface TracelessUserInitHelp : NSObject
@property (nonatomic,strong)TracelessInitConfigure *config;
@property (nonatomic,strong)TracelessUser *lastUser;
@property (nonatomic,assign,getter=isLogin)BOOL login;
@property (nonatomic,assign,getter=islogouted)BOOL logouted;//记录是否是执行了退出
@property (nonatomic,assign,getter=iscloseReg)BOOL closeReg;//2.4 加的一个又后台控制是否可以注册
@property (nonatomic,assign)BOOL isInited;//记录是否初始化成功了
-(instancetype)initWithConfig:(TracelessInitConfigure *)config;
-(void)StartInitSdk;

@property (nonatomic,copy)InitSucceed initSucceed;
@end
