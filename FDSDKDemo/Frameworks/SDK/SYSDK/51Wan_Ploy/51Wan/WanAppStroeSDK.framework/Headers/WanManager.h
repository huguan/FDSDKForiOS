//
//  WanManager.h
//  WanAppStroeSDK
//
//  Created by Star on 2017/5/17.
//  Copyright © 2017年 liuluoxing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^WanLoginSuccessBlock)(NSString *uid, NSString *ticket);
typedef void(^UploadFaildBlock)(NSString *code, NSString *msg);

typedef void(^WanPaySuccessBlock)(void);

@interface WanManager : NSObject

/**
 * 获取单例实体对象，所有方法都使用该实例对象进行调用
 */
+(instancetype)shareInstance;

/**
 * 显示登录视图
 * @pragram view 登录视图的父视图
 * @pragram gameID 游戏ID
 * @pragram loginSuccess 登录成功后的回调
 */
-(void)showLoginViewInView:(UIView *)view withGameID:(NSString *)gameID loginSuccessBlock:(WanLoginSuccessBlock)loginSuccess;

/**
 * 显示服务窗点击图标
 * @pragram gameid 游戏ID
 * @pragram uid 用户id(此ID为登录后获取的uid)
 */
-(void)showTipWithGameid:(NSString *)gameid uid:(NSString *)uid;

/**
 *隐藏服务窗点击图标
 */
-(void)hidenTip;

/**
 * 支付窗口
 * @view  支付窗口所在父视图
 * @params params 参数字典，包含以下key，所有以下参数不能传nil或者“”，可传“0”等数值代替
 *     @money  商品价格
 *     @balance 余额
 *     @goodsName 商品名称
 *     @cpData 厂商透传信息
 *     @gameid 游戏id
 *     @gain 元宝数
 *     @uid 用户id
 *     @serverid 区服id
 *     @roleName 游戏角色名
 *     @desc 商品描述
 *     @productID 产品在iTunes中的id
 * @paySuccessBlock 支付成功后的回调block
 */
-(void)showPayViewInView:(UIView *)view withParamters:(NSDictionary *)params withPaySuccessBlock:(WanPaySuccessBlock)paySuccessBlock;

/**
 * 上传游戏数据
 *  @uid 用户id，注意：这个ID为SDK登录后获取的UID
 *  @gameid 游戏ID
 *  @server_id 区服ID
 *  @serverName 区服名
 *  @roleName 角色名
 *  @roleLevel 角色等级
 *  @faildBlock 上传失败后回调
 */
-(void)uploadUid:(NSString *)uid gameID:(NSString *)gameid serverID:(NSString *)server_id serverName:(NSString *)serverName roleName:(NSString *)roleName roleLevel:(NSString *)roleLevel failde:(UploadFaildBlock)faildBlock;

@end
