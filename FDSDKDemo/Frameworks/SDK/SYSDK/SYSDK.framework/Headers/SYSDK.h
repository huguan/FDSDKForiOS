//
//  SYSDK.h
//
//  Created by htdev on 2017/8/15.
//  Copyright © 2017年 上海黑桃互动网络科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SYSDKPlatform.h"

@interface SYSDK : NSObject

+ (instancetype)getInstance;

/**
 *  @brief 初始化
 *  @param params 初始化信息
 */
- (void)initWithParams:(NSDictionary<NSString *, NSString *> *)params;

/**
 *  @brief 设置Debug开关
 *  @param isEnabled 开启或关闭
 */
- (void)setDebug:(BOOL)isEnabled;

/**
 *  @brief 获取SDK版本号
 */
- (NSString *)getSDKVersion;

@end


