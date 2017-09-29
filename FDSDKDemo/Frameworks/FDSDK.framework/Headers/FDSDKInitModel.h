//
//  FDSDKInitModel.h
//  FDSDK
//
//  Created by 熙文 张 on 2017/01/17.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FDGCSDKInitModel : NSObject
/**
 *  很猛游戏Id
 */
@property (nonatomic, strong) NSString *gameId;
/**
 *  很猛aesKey
 */
@property (nonatomic, strong) NSString *aesKey;
/**
 *  很猛app_key
 */
@property (nonatomic, strong) NSString *appKey;
/**
 *  很猛chlId
 */
@property (nonatomic, strong) NSString *chlId;

@end

@interface FDSYSDKInitModel : NSObject
/**
 *  升游游戏名
 */
@property (nonatomic, strong) NSString *name;
/**
 *  升游游戏名缩写
 */
@property (nonatomic, strong) NSString *shortName;
/**
 *  游戏屏幕方向
 */
@property (nonatomic, strong) NSString *direction;

@end

@interface FDLHHSDKInitModel : NSObject
/**
 *  乐嗨嗨pid
 */
@property (nonatomic, strong) NSString *pid;
/**
 *  乐嗨嗨appKey
 */
@property (nonatomic, strong) NSString *appKey;
/**
 *  乐嗨嗨appScheme
 */
@property (nonatomic, strong) NSString *appScheme;

@end
@interface FDXZSDKInitModel : NSObject
/**
 *  玄藏AppId
 */
@property (nonatomic, strong) NSString *appID;
/**
 *  玄藏appKey
 */
@property (nonatomic, strong) NSString *appKey;
/**
 *  玄藏appScheme
 */
@property (nonatomic, strong) NSString *appScheme;

@end
@interface FDDockSDKInitModel : NSObject
/**
 *  94玩AppId
 */
@property (nonatomic, strong) NSString *AppID;
/**
 *  94玩appKey
 */
@property (nonatomic, strong) NSString *AppKey;

@end
@interface FDPPSDKInitModel : NSObject
/**
 *  PP助手AppId
 */
@property (nonatomic, strong) NSString *AppID;
/**
 *  PP助手appKey
 */
@property (nonatomic, strong) NSString *AppKey;

@end

@interface FDQdSDKInitModel : NSObject

/**
 *  乐玩游戏id
 */
@property(nonatomic, strong) NSString *GameID;

/**
 *  乐玩游戏渠道
 */
@property (nonatomic, strong) NSString *ChanelID;

/**
 *  乐玩登陆key
 */
@property(nonatomic, strong) NSString  *LoginKey;

/**
 *  乐玩应用id
 */
@property (nonatomic, strong) NSString *AppID;

/**
 *  游戏名称
 */
@property (nonatomic, strong) NSString *GameName;


@end

@interface FDLySDKInitModel : NSObject

/**
 *  麟游产品id
 */
@property(nonatomic, strong) NSString*      productId;

/**
 *  麟游互动signkey
 */
@property(nonatomic, strong) NSString*  linnyouKey;

/**
 *  麟游channelId
 */
@property (nonatomic, strong) NSString *channelId;


@end

@interface FDAsSDKInitModel : NSObject

/**
 *  爱思appId
 */
@property (nonatomic, assign) int appId;

/**
 *  爱思appKey
 */
@property (nonatomic, strong) NSString *appKey;

@end


@interface FDXySDKInitModel : NSObject

/**
 *  xy appId
 */
@property (nonatomic, strong) NSString *appId;

/**
 *  xy appKey
 */
@property (nonatomic, strong) NSString *appKey;

/**
 * @brief 支付宝支付，SSO回调到游戏， 该字段必传，游戏方需要在plist文件中定义 URL Scheme, 传入appScheme
 */
@property (nonatomic, strong) NSString *appScheme;


/**
 * @brief uppay支付，SSO回调到游戏， 该字段必传，游戏方需要在plist文件中定义 URL Scheme, 传入uppayScheme
 */

@property (nonatomic, copy) NSString *uppayScheme;

@end


@interface FDHgSDKInitModel : NSObject

/**
 *  互冠gameId
 */
@property (nonatomic, strong) NSString *gameId;

/**
 *  互冠secretKey
 */
@property (nonatomic, strong) NSString *secretKey;

/**
 *  互冠cpId
 */
@property (nonatomic, strong) NSString *cpId;

/**
 *  互冠channelId
 */
@property (nonatomic, strong) NSString *channelId;
/**
 *  互冠wxAppId
 */
@property (nonatomic, strong) NSString *wxAppId;

@end


@interface FDGpSDKInitModel : NSObject

/**
 *  果盘appId
 */
@property (nonatomic, strong) NSString *appId;

/**
 *  果盘secretKey
 */
@property (nonatomic, strong) NSString *secretKey;

@end




