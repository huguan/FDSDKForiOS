//
//  HGSDKParameters.h
//  HGSDK
//
//  Created by 熙文 张 on 2016/11/08.
//  Copyright © 2016年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface HGSDKParameters : NSObject

/**
 *  获取HGSDK参数单例
 *
 *  @return HGSDK参数单例对象
 */
+ (HGSDKParameters *)sharedHGSDKParameters;




/**
 *  合作商编号
 */
@property (nonatomic, strong) NSString *cpId;

/**
 *  游戏编号
 */
@property (nonatomic, strong) NSString *gameId;

/**
 *  游戏渠道
 */
@property (nonatomic, strong) NSString *channelId;

/**
 *  游戏密钥
 */
@property (nonatomic, strong) NSString *secretKey;

/**
 *  微信分享ID
 */
@property (nonatomic, strong) NSString *wxAppId;






@end
