//
//  GameCenterView.h
//  Test
//
//  Created by 王培 on 2017/3/2.
//  Copyright © 2017年 Mr.wang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SDKLoginView.h"
#import "SDKPayView.h"
@interface GameCenterView : NSObject
+ (GameCenterView *)sharedView;

- (void)addLoginView:(id<SDKLoginViewDelegate>)delegate;

- (void)addPayView:(id<SDKPayViewDelegate>)delegate amount:(NSString *)amount serverid:(NSString *)serverid extendsinfo:(NSString *)extendsinfo;
@end
