//
//  SPayInfo.h
//
//  Created by dev on 2017/8/9.
//  Copyright © 2017年 . All rights reserved.
//

#import "SRoleInfo.h"

@interface SPayInfo : SRoleInfo

typedef NS_ENUM(NSUInteger, SProductType)
{
    /** 普通 */
    SProductTypeDefault,
    /** 月卡 */
    SProductTypeMonth,
    /** 周卡 */
    SProductTypeWeek,
    /** 季卡 */
    SProductTypeQuarter,
    /** 年卡 */
    SProductTypeYear,
    /** 终身卡 */
    SProductTypeTermless
};

/** 产品Id */
@property (nonatomic, copy) NSString *productId;
/** 产品名称 */
@property (nonatomic, copy) NSString *productName;
/** 产品描述 */
@property (nonatomic, copy) NSString *productDesc;
/** 价钱 */
@property (nonatomic) float productPrice;
/** 数量 */
@property (nonatomic) NSUInteger productCount;
/** 产品类型 */
@property (nonatomic) SProductType productType;
/** 兑换比例 */
@property (nonatomic) NSUInteger coinRate;
/** 货币名 */
@property (nonatomic, copy) NSString *coinName;
/** 扩展信息 */
@property (nonatomic, copy) NSString *extendInfo;

@end
