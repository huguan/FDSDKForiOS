//
//  HGUserModel.h
//  HGSDK
//
//  Created by 熙文 张 on 2016/11/08.
//  Copyright © 2016年 熙文 张. All rights reserved.
//

#import <HGSDK/HGSDK.h>

@interface HGUserModel : NSObject

/**
 *  用户名
 */
@property (nonatomic, strong) NSString *userName;

/**
 *  会话ID
 */
@property (nonatomic, strong) NSString *sessionId;

/**
 *  用户ID
 */
@property (nonatomic, strong) NSString *userId;


@property (nonatomic, strong) NSString *mobile;

@end
