//
//  SPayOrderHandler.h
//
//  Created by dev on 2017/8/11.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SPayOrder.h"
#import <SCore/SError.h>

@protocol SPayOrderHandlerDelegate <NSObject>

- (void)onCreatePayOrderSuccess:(SPayOrder *)order;
- (void)onCreatePayOrderFailure:(SError *)error;

@end

@interface SPayOrderHandler : NSObject

- (instancetype)initWithParams:(NSDictionary<NSString *, NSString *> *)params delegate:(id<SPayOrderHandlerDelegate>)delegate;
- (void)start;

@end
