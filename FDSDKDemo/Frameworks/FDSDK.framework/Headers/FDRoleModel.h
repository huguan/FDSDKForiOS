//
//  FDRoleModel.h
//  FDSDK
//
//  Created by huguan-mac01 on 2017/5/9.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FDRoleModel : NSObject


/**
 *  角色名称
 */
@property (nonatomic, strong) NSString *roleName;
/**
 *  角色Id
 */
@property (nonatomic, strong) NSString *roleId;
/**
 充值等级
 */
@property (nonatomic, strong) NSString *payLevel;
/**
 *  角色等级
 */
@property (nonatomic, assign) int roleLever;

/**
 *  角色所在区服
 */
@property (nonatomic, strong) NSString *serverName;
/**
 *  区服id
 */
@property (nonatomic, strong) NSString *serverId;

/**
 *  角色剩余游戏币
 */
@property (nonatomic, assign) int roleMoney;

/**
 *  扩展信息 可不传
 */
@property (nonatomic, strong) NSString *extar;


@end
