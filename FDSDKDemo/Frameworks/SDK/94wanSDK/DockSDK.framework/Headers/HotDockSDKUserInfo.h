//
//  HGUserInfo.h
//  LocalSDK
//
//  Created by MoreFire on 2017/4/12.
//  Copyright © 2017年 MoreFire. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HotDockSDKUserInfo : NSObject
typedef void (^hgLoginSuccessBlock)(HotDockSDKUserInfo *userModel);
/*
 用户id/聚合token
 */
@property(nonatomic,strong)NSString *userid;
@property(nonatomic,strong)NSString *username;
@property(nonatomic,strong)NSString *token;
@property(nonatomic,strong)NSString *extension;
@property(nonatomic,strong)UIViewController *context;

@property(nonatomic,strong)NSString *userID;
/**
 区服名
 */
@property(nonatomic,strong)NSString *serverName;
/**
 区服id
 */
@property(nonatomic,strong)NSString *serverId;
/**
 角色名
 */
@property(nonatomic,strong)NSString *roleName;
/**
 角色id
 */
@property(nonatomic,strong)NSString *roleId;
/**
角色等级
 */
@property(nonatomic,strong)NSString *roleLevel;
/**
 充值等级
 */
@property(nonatomic,strong)NSString *payLevel;

+(HotDockSDKUserInfo*)getUserInfo;
@end
