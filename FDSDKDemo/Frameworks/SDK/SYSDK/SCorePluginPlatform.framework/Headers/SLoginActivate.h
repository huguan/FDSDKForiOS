//
//  SLoginActivate.h
//
//  Created by dev on 2017/8/10.
//  Copyright © 2017年 . All rights reserved.
//

#import <SCore/SEntityBase.h>

@interface SLoginActivate : SEntityBase

typedef NS_ENUM(NSUInteger, SLoginActivateStatus)
{
    /** 禁用状态 */
    Disable,
    /** 启用状态 */
    Enabled
};

/** 状态 */
@property (nonatomic) SLoginActivateStatus status;
/** 标题 */
@property (nonatomic, copy) NSString *title;
/** 消息 */
@property (nonatomic, copy) NSString *message;
/** 确认按钮文案 */
@property (nonatomic, copy) NSString *confirmTitle;
/** 取消按钮文案 */
@property (nonatomic, copy) NSString *cancelTitle;
/** URL */
@property (nonatomic, copy) NSString *url;

@end
