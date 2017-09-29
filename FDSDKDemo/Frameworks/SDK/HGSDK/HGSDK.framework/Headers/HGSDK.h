//
//  HGSDK.h
//  HGSDK
//
//  Created by 熙文 张 on 2016/11/07.
//  Copyright © 2016年 熙文 张. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "HGSDKParameters.h"
#import "HGOrderModel.h"
#import "HGUserModel.h"


//! Project version number for HGSDK.
FOUNDATION_EXPORT double HGSDKVersionNumber;

//! Project version string for HGSDK.
FOUNDATION_EXPORT const unsigned char HGSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HGSDK/PublicHeader.h>


typedef enum {
    HGUserNotLogin                     = 10
}HGSDKErrorFailed;

@class HGSDKParameters;
@class HGUserModel;
@class HGOrderModel;


typedef void (^loginSuccessBlock)(HGUserModel *userModel);
typedef void (^logoutBlock)();

@interface HGSDK : NSObject

/**
 *  获取HGSDK单例
 *
 *  @return HGSDK单例对象
 */
+ (HGSDK *)sharedHGSDK;


@property (nonatomic, strong) NSString *currentSessionId;
@property (nonatomic, strong) NSString *currentUserName;
@property (nonatomic, strong) NSString *currentUserMobile;
@property (nonatomic, strong) NSString *currentUserId;
@property (nonatomic, strong) NSString *currentService;

@property (nonatomic, copy, readonly) loginSuccessBlock loginSuccessBlock;

@property (nonatomic, copy) logoutBlock logoutBlock;

@property (nonatomic, assign) BOOL canShowController;
/**
 *  客服屏幕旋转
 */
@property (nonatomic, assign) NSUInteger supportedInterface;

/**
 *  初始化SDK
 *
 *  @param gameId    游戏编号
 *  @param key       游戏密钥
 *  @param cpid      合作商编号
 *  @param channelId 游戏渠道
 */
- (void)hgInitWithSDKParameters:(HGSDKParameters *)sdkParameters;


/**
 *   用户登陆
 *
 *  @param successBlock 登陆成功回调
 */
- (void)hgLogin:(loginSuccessBlock)successBlock;


/**
 *  支付
 *
 *  @param orderInfo    订单信息
 */
- (void)payment:(HGOrderModel *)orderInfo;

/**
 *  注销用户登陆接口
 */
- (void)hgLogOut;


/**
 *  第三方应用跳转
 *
 *  @param url url
 *
 *  @return
 */
- (BOOL)handleOpenURL:(NSURL *)url;

@end

