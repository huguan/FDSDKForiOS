//
//  OrderInfo.h
//  Payment
//
//  Created by 梦创 .
//  Copyright © 梦创. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrderInfo : NSObject

@property (nonatomic, assign) int goodsPrice;
@property (nonatomic, copy) NSString *goodsName;
@property (nonatomic, copy) NSString *goodsDesc;
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, copy) NSString *extendInfo;//此字段会透传到游戏服务器，可拼接

@end
