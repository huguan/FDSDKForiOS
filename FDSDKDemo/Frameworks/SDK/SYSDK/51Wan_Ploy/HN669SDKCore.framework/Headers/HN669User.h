//
//  HN669User.h
//  HN669User
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 HN669sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//HN669User 账号登录相关接口
@protocol IHN669User

- (void) login;
- (void) logout;
- (void) switchAccount;

- (BOOL) hasAccountCenter;
- (void) submitUserInfo:(HN669UserExtraData*)userlog;

@optional
- (void) loginCustom:(NSString*)customData;
- (void) showAccountCenter;

@end

__attribute__ ((deprecated))
@protocol HN669User
@end
