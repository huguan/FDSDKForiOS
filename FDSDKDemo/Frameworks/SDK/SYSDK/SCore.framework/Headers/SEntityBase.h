//
//  SEntityBase.h
//
//  Created by dev on 2017/8/7.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SEntityBase : NSObject<NSCopying>

@property (readonly, copy) NSDictionary *origin;

- (instancetype)initWithParams:(NSDictionary *)params;
- (NSDictionary *)getPropertys;
- (NSString *)stringValue;

@end
