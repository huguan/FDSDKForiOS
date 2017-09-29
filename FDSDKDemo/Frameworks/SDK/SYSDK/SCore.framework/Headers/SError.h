//
//  SError.h
//
//  Created by dev on 2017/8/7.
//  Copyright © 2017年 . All rights reserved.
//

#import "SEntityBase.h"

@interface SError : SEntityBase

@property (readonly) NSUInteger code;
@property (readonly, copy) NSString *message;

- (instancetype)initWithCode:(NSUInteger)code message:(NSString *)msg;
- (instancetype)initWithError:(NSError *)error;

@end
