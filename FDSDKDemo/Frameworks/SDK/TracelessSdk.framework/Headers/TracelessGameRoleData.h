//
//  gameRoleData.h
//  JjyxSdk
//
//  Created by Mac on 2017/5/13.
//  Copyright © 2017年 wanqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TracelessGameRoleData : NSObject

@property (nonatomic,copy) NSString *uid;
@property (nonatomic,copy) NSString *sid;
@property (nonatomic,copy) NSString *sname;
@property (nonatomic,copy) NSString *role_id;
@property (nonatomic,copy) NSString *role_name;
@property (nonatomic,copy) NSString *role_level;
@property (nonatomic,assign) NSString *role_ctime;


@end
