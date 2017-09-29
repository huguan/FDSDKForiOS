//
//  SErrorPlatform.h
//
//  Created by dev on 2017/8/10.
//  Copyright © 2017年 . All rights reserved.
//

#import <SCore/SError.h>

@interface SErrorPlatform : SError

typedef NS_ENUM(NSInteger, SErrorPlatformCode)
{
    /** 其他错误 */
    SErrorPlatformCodeOther = -1,
    /** 初始化失败 */
    SErrorPlatformCodeInitFailure = 30,
    /** 登录失败 */
    SErrorPlatformCodeLoginFailure = 11,
    /** 登录取消 */
    SErrorPlatformCodeLoginCancel = 12,
    /** 账号切换失败 */
    SErrorPlatformCodeAccountSwitchFailure = 13,
    /** 账号切换取消 */
    SErrorPlatformCodeAccountSwitchCancel = 14,
    /** 支付失败 */
    SErrorPlatformCodePayFailure = 21,
    /** 支付取消 */
    SErrorPlatformCodePayCancel = 22
};

+ (SError *)getInitFailure:(NSString *)message;
+ (SError *)getLoginFailure;
+ (SError *)getLoginCancel;
+ (SError *)getAccountSwitchFailure;
+ (SError *)getAccountSwitchCancel;
+ (SError *)getPayFailure;
+ (SError *)getPayCancel;
+ (SError *)getPayError:(NSString *)message;
+ (SError *)getCustomError:(NSString *)message;

@end
