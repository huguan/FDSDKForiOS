//
//  SLoginVerifyHandler.h
//
//  Created by dev on 2017/8/10.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SLoginVerify.h"
#import <SCore/SError.h>
#import "SAppUpdateInfo.h"

@protocol SLoginVerifyHandlerDelegate <NSObject>

- (void)onLoginVerifySuccess:(SLoginVerify *)loginVerify;
- (void)onLoginVerifyFailure:(SError *)error;
- (void)onActivateCanceled;

@end

@interface SLoginVerifyHandler : NSObject
{
    @private
    BOOL isRetried;
}

- (instancetype)initWithParams:(NSDictionary<NSString *, NSString *> *)params delegate:(id<SLoginVerifyHandlerDelegate>)delegate;
- (void)start;

@end
