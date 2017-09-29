//
//  SPluginPlatform.h
//
//  Created by  on 2017/8/8.
//  Copyright © 2017年 . All rights reserved.
//

#import "SPlugin.h"

@interface SPluginPlatform : SPlugin

- (NSString *)getPlatformKey;
- (NSString *)getPlatformSDKVersion;
- (NSDictionary *)getPlatformSDKParams;
- (NSDictionary *)getUser;
- (BOOL)hasPlatformUserEnter;

- (NSNumber *)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window;
- (NSNumber *)shouldAutorotate;

- (void)doLogin;
- (void)doAccountSwitch;
- (void)doPay:(NSDictionary *)params;
- (void)doAntiAddictionQuery;
- (void)doEnterPlatform;
- (void)onRoleLevelUpgrade:(NSUInteger)newRoleLevel;
- (void)onRoleNameUpdate:(NSString *)newRoleName;
- (void)setRoleInfo:(NSDictionary *)params;
- (void)setHoverButtonLocation:(NSUInteger)location;
- (void)setHoverButtonHidden:(BOOL)isHidden;

@end
