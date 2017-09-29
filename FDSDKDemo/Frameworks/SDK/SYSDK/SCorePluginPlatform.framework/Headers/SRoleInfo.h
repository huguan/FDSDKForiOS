//
//  SRoleInfo.h
//
//  Created by dev on 2017/8/9.
//  Copyright © 2017年 . All rights reserved.
//

#import <SCore/SEntityBase.h>

@interface SRoleInfo : SEntityBase

/** 角色id */
@property (nonatomic, copy) NSString *roleId;
/** 角色名 */
@property (nonatomic, copy) NSString *roleName;
/** 角色等级 */
@property (nonatomic) NSUInteger roleLevel;
/** VIP等级 */
@property (nonatomic) int roleVipLevel;
/** 区服id */
@property (nonatomic, copy) NSString *zoneId;
/** 区服名 */
@property (nonatomic, copy) NSString *zoneName;
/** 游戏币余额 */
@property (nonatomic) float balance;
/** 是否新角色 */
@property (nonatomic) BOOL isNewRole;
/** 公会 */
@property (nonatomic, copy) NSString *partyName;

@end
