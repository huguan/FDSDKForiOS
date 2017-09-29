//
//  SModule.h
//
//  Created by dev on 2017/8/31.
//  Copyright © 2017年 dev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPluginEnum.h"

@interface SModule : NSObject

typedef void (^SOnCallback)(SAction action, NSDictionary *result);

/**
 *  @brief 设置回调
 *  @param callback 回调block
 */
- (void)setCallback:(SOnCallback)callback;

@end
