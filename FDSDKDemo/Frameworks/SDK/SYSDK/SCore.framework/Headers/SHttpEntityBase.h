//
//  SHttpEntityBase.h
//
//  Created by dev on 2017/8/7.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SHttpEntityBase : NSObject<NSCopying>

@property (readonly) NSUInteger code;
@property (readonly, copy) NSString *message;
@property (readonly) BOOL success;
@property (readonly, copy) id response;
@property (readonly, copy) NSDictionary *jsonData;

- (instancetype)initWithResponse:(id)response;

@end
