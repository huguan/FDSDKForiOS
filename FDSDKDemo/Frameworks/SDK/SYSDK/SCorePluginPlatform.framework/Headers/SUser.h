//
//  SUser.h
//
//  Created by dev on 2017/8/9.
//  Copyright © 2017年 . All rights reserved.
//

#import <SCore/SEntityBase.h>

@interface SUser : SEntityBase

/** 用户id */
@property (nonatomic, copy) NSString *userId;
/** 第三方平台用户id */
@property (nonatomic, copy) NSString *platformUserId;
/** token */
@property (nonatomic, copy) NSString *token;
/** 平台id */
@property (nonatomic) NSUInteger platformId;
/** 平台AppId */
@property (nonatomic) NSUInteger appId;
/** 扩展数据 */
@property (nonatomic, copy) NSDictionary *extend;

@end
