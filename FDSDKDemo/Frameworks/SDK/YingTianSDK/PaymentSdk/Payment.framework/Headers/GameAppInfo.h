//
//  GameAppInfo.h
//  Payment
//
//  Created by 朱进 on 16/6/27.
//  Copyright © 2016年 朱进. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GameAppInfo : NSObject

@property (nonatomic, copy) NSString *gameId;//应用id
@property (nonatomic, copy) NSString *gameName;//应用名称
@property (nonatomic, copy) NSString *gameAppId;//应用Appid
@property (nonatomic, copy) NSString *promoteId;//推广id
@property (nonatomic, copy) NSString *promoteAccount;//推广名称

@end
