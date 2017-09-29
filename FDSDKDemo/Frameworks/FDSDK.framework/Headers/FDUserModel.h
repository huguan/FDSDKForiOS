//
//  FDUserModel.h
//  FDSDK
//
//  Created by 熙文 张 on 2017/01/17.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FDUserModel : NSObject

/**
 *  聚合userId
 */
@property (nonatomic ,strong) NSString *userId;

/**
 *  渠道sdk的userId（可能为空）
 */
@property (nonatomic ,strong) NSString *sdkUserId;
/**
 *  渠道sdk的userName（可能为空）
 */
@property (nonatomic ,strong) NSString *sdkUserName;

/**
 *  聚合token
 */
@property (nonatomic ,strong) NSString *token;

/**
 *  回传参数
 */
@property (nonatomic ,strong) NSString *extension;

@end
