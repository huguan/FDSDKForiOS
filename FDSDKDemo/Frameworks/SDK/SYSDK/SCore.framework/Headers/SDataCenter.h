//
//  SDataCenter.h
//
//  Created by dev on 2017/8/7.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SAppInfo.h"
#import "SConfig.h"

@interface SDataCenter : NSObject

@property (nonatomic, copy) SAppInfo *appInfo;
@property (nonatomic) BOOL debugEnabled;

+ (instancetype)getInstance;
- (NSDictionary *)getSDKParams;
- (SConfig *)getConfig;

@end
