//
//  SPlatformBase.h
//
//  Created by dev on 2017/8/8.
//  Copyright © 2017年 . All rights reserved.
//

#import <SCore/SPluginPlatform.h>
#import <SCore/SPluginEnum.h>
#import <SCore/SAppInfo.h>
#import <SCore/SError.h>
#import "SLoginVerify.h"
#import "SRoleInfo.h"
#import "SPayOrder.h"
#import "SPayInfo.h"
#import "SUser.h"

@interface SPlatformBase : SPluginPlatform
{
    BOOL isDidCallInitSDK;
    BOOL isDidCallLogin;
    BOOL isInitSucceed;
    BOOL isLoginVerifyTokenTimeout;
}

@property (readonly, copy) SAppInfo *appInfo;
@property (readonly, copy) SLoginVerify *loginVerify;
@property (readonly, copy) SUser *user;
@property (readonly, copy) SRoleInfo *roleInfo;
@property (readonly, copy) SPayInfo *payInfo;
@property (readonly) BOOL debugEnabled;
@property (readonly) SHoverButtonLocation hoverButtonLocation;
@property (readonly) BOOL hoverButtonHidden;
@property (readonly, copy, getter = getPlatformSDKParams) NSDictionary *platformSDKParams;
@property (readonly, copy) NSString *callbackURL;

- (void)initSDK;
- (void)doPayByOrder:(SPayOrder *)order;
- (void)doPlatformAntiAddiction;
- (void)doEnterPlatform;
- (NSDictionary *)getPlatformSDKParams;
- (NSMutableDictionary *)getCreatePayOrderParams;

- (void)doInitSDKSuccess;
- (void)doInitSDKFailure:(SError *)error;

- (void)doLoginVerify:(NSDictionary<NSString *, NSString *> *)params;
- (void)doLoginFailure:(SError *)error;

- (void)doAccountSwitchLogoutSuccess;
- (void)doAccountSwitchFailure:(SError *)error;

- (void)doPaySuccess;
- (void)doPayFailure:(SError *)error;

- (void)doAntiAddictionQuerySuccess:(SAntiAddiction)status;
- (void)doAntiAddictionQueryFailure:(SError *)error;

@end
