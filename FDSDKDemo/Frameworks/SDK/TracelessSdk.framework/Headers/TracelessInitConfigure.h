//
//  JjInitConfigure.h
//  JjyxSdk
//
//  Created by Mac on 2017/4/25.
//  Copyright © 2017年 wanqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TracelessInitConfigure : NSObject

@property (nonatomic,copy) NSString *appid;
@property(nonatomic,copy) NSString *channelId;
@property(nonatomic,copy) NSString *devid;
@property (nonatomic,copy) NSString *URLSchemes;
-(instancetype)initWithAppid:(NSString *)appid URLSchemes:(NSString *)shemes;


@end
