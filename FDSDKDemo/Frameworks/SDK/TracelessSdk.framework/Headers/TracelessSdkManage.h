//
//  SdkManage.h
//  JjyxSdk
//
//  Created by Mac on 2017/4/25.
//  Copyright © 2017年 wanqi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TracelessPayInfo.h"
#import "TracelessInitConfigure.h"
#import "TracelessBaseManage.h"
#import "TracelessGameRoleData.h"

@protocol ServicesDelegate <NSObject>

@required
-(void) initSdk:(TracelessInitConfigure *) initConfigure;
-(void) login;
-(void) pay:(TracelessPayInfo *)info;
-(void) logout;
-(void) syncGameData:(TracelessGameRoleData *) gameData;
-(void) personCentre;
-(void) payRecord;
-(void) showFloatingButton;
-(void) hintFloatingButton;
//支付宝专用。应用之间接收同步通知结果。
-(BOOL)application:(UIApplication *)application openURL:(NSURL *)url;

@end



@interface TracelessSdkManage : TracelessBaseManage<ServicesDelegate>

@property(nonatomic,strong) TracelessPayInfo *payInfo;

+(instancetype) defaultManager;

-(void)cpBackUid:(TracelessUser *)user;

-(id)getFloatManage;

@property(nonatomic,assign)BOOL isCpHint;//判断cp是否执行了隐藏
@end
