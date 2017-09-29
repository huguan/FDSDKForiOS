//
//  SLoginVerify.h
//
//  Created by dev on 2017/8/10.
//  Copyright © 2017年 . All rights reserved.
//

#import <SCore/SHttpEntityBase.h>
#import "SUser.h"
#import "SLoginActivate.h"
#import "SAppUpdateInfo.h"

@interface SLoginVerify : SHttpEntityBase

typedef NS_ENUM(NSUInteger, SLoginVerifyError)
{
    /** token超时 */
    SLoginVerifyErrorTokenTimeout = 30000,
    /** 登录限制 */
    SLoginVerifyErrorLimit,
    /** 有新版本 */
    SLoginVerifyErrorNewVersion
};

@property (readonly, copy) SUser *user;
@property (readonly, copy) SLoginActivate *loginActivate;
@property (readonly, copy) SAppUpdateInfo *appUpdateInfo;
@property (readonly) NSUInteger antiAddictionStatus;
@property (readonly) NSUInteger openType;
@property (readonly, copy) NSString *title;

/** SDK-扩展信息 */
@property (readonly, copy) NSDictionary *jsonSDK;

@end
