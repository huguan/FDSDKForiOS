//
//  SCallBackCache.h
//
//  Created by dev on 2017/8/9.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCallBackCache : NSObject

@property (nonatomic) NSUInteger action;
@property (nonatomic, copy) NSDictionary *result;

- (instancetype)initWithAction:(NSUInteger)action result:(NSDictionary *)result;

@end
