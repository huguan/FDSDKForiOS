//
//  FDRoleModel.h
//  FDSDK
//
//  Created by huguan-mac01 on 2017/5/9.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>

/// 游戏角色相关事件
typedef NS_ENUM(NSInteger, FD_ExtraDataType)
{
    FD_EXTRADATA_TYPE_OTHER = 0,  // 无事件或其它事件
    FD_EXTRADATA_TYPE_SELECT_SERVER = 1,    // 选择服务器
    FD_EXTRADATA_TYPE_CREATE_ROLE,  // 创建角色
    FD_EXTRADATA_TYPE_ENTER_GAME,   // 进入游戏
    FD_EXTRADATA_TYPE_CHANGE_ROLE_NAME,  // 更改角色名字
    FD_EXTRADATA_TYPE_LEVEL_UP, // 等级提升
    FD_EXTRADATA_TYPE_EXIT_GAME,    // 退出游戏
};

@interface FDRoleModel : NSObject

/**
 *  事件类型
 *  注意：该值对于不同渠道SDK的事件意义不同
 */
@property (nonatomic) FD_ExtraDataType fdDataType;

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
