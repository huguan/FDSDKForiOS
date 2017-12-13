//
//  TracelessUser.h
//  JjyxSdk
//
//  Created by Mac on 2017/5/2.
//  Copyright © 2017年 wanqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TracelessUser : NSObject


@property (nonatomic,copy) NSString *username;
@property (nonatomic,copy) NSString *passwd;
@property(nonatomic,assign)NSInteger type;
@property(nonatomic,assign)NSInteger uid;
@property(nonatomic,copy)NSString *token;
@property(nonatomic,copy)NSString *secrect;


-(instancetype) initWithName:(NSString *) name passWrod:(NSString *)pass userType:(int)usertype uid:(int)uid token:(NSString *)token secrect:(NSString *)secrect;



@end
