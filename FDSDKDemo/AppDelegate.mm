//
//  AppDelegate.m
//  FDSDKDemo
//
//  Created by 熙文 张 on 2017/01/17.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import "AppDelegate.h"
#import <FDSDK/FDSDK.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [[FDSDKParameters sharedHGSDKParameters] setFdPlatformType:FDSYPlatform];
    
    [[FDSDK sharedInstance] fdApplication:application didFinishLaunchingWithOptions:launchOptions];
    
    [self.window makeKeyAndVisible];
    
//    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"50"];
//    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"ea718a559b4a825e5481afc695ee2abb"];
    
    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"183"];
    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"c87d1b52d2f702c1b9cb12ed0d224630"];
    
//            [[FDSDKParameters sharedHGSDKParameters] setAppId:@"143"];
//            [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"a90f40a1f59edb8bb6938ca98e043518"];
    
    //    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"119"];
    //            [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"1060420dde8366fc59396c317d789bd6"];
    
    [[FDSDKParameters sharedHGSDKParameters] setLogData:NO];
    [[FDSDKParameters sharedHGSDKParameters] setDebug:NO];
    
    //设置升游sdk参数
    FDSYSDKInitModel *sySDKInitModel = [FDSYSDKInitModel new];
    [sySDKInitModel setName:@"烈焰封天"];
    [sySDKInitModel setShortName:@"lyft"];
    [sySDKInitModel setDirection:@"1"];
    [[FDSDKParameters sharedHGSDKParameters] setSySDKInitModel:sySDKInitModel];
    
    //设置乐嗨嗨sdk参数
    FDLHHSDKInitModel *lhhSDKInitModel = [FDLHHSDKInitModel new];
    [lhhSDKInitModel setPid:@"11886"];
    [lhhSDKInitModel setAppKey:@"91538b441ccc1d8a360bb9abf8fb1de7"];
    [lhhSDKInitModel setAppScheme:@"FDLHH"];
    [[FDSDKParameters sharedHGSDKParameters] setLhhSDKInitModel:lhhSDKInitModel];
    
    
    //设置玄藏SDK参数
    FDXZSDKInitModel *xzSDKInitModel = [FDXZSDKInitModel new];
    [xzSDKInitModel setAppID:@"104853"];
    [xzSDKInitModel setAppKey:@"acd0552604d61c1b7dc6aaf97470adbb"];
    [xzSDKInitModel setAppScheme:@"XZshengshizhuzai"];
    [[FDSDKParameters sharedHGSDKParameters] setXzSDKInitModel:xzSDKInitModel];
    
    //设置游龙SDK参数
    //请在YLinfo.plist中填写相关参数
    
    //设置94玩SDK参数
    FDDockSDKInitModel *dockSDKInitModel = [FDDockSDKInitModel new];
    [dockSDKInitModel setAppID:@"3"];
    [dockSDKInitModel setAppKey:@"85f828e25a8b14770b4a0a1609f2834e"];
    [[FDSDKParameters sharedHGSDKParameters] setDockSDKInitModel:dockSDKInitModel];
    
    //设置pp助手SDK参数
    FDPPSDKInitModel *ppSDKInitModel = [FDPPSDKInitModel new];
    [ppSDKInitModel setAppID:@"7723"];
    [ppSDKInitModel setAppKey:@"29eb4beec322e9a718fa9a40142980ee"];
    [[FDSDKParameters sharedHGSDKParameters] setPpSDKInitModel:ppSDKInitModel];
    
    //设置乐玩SDK参数
    FDQdSDKInitModel *qdSDKInitModel = [FDQdSDKInitModel new];
    [qdSDKInitModel setGameID:@"1012"];
    [qdSDKInitModel setChanelID:@"12"];
    [qdSDKInitModel setLoginKey:@"d6vb8Q2d"];
    [qdSDKInitModel setAppID:@"1228062435"];
    [[FDSDKParameters sharedHGSDKParameters] setQdSDKInitModel:qdSDKInitModel];
    
    
    //设置银狐SDK参数
    //请在YHInfo.plist中填写相关参数
    
    //设置麟游SDK参数
    FDLySDKInitModel *lySDKInitModel = [FDLySDKInitModel new];
    [lySDKInitModel setProductId:@"lyftios"];
    [lySDKInitModel setLinnyouKey:@"996b6b37aa4473c5"];
    [[FDSDKParameters sharedHGSDKParameters] setLySDKInitModel:lySDKInitModel];
    
    
    // 设置爱思SDK参数
    FDAsSDKInitModel *asSDKInitModel = [FDAsSDKInitModel new];
    [asSDKInitModel setAppId:2];
    [asSDKInitModel setAppKey:@"118255f8ffec4352a919c52d01a2d674"];
    [[FDSDKParameters sharedHGSDKParameters] setAsSDKInitModel:asSDKInitModel];
    
    // 设置XYSDK参数
    FDXySDKInitModel *xySDKInitModel = [FDXySDKInitModel new];
    [xySDKInitModel setAppScheme:@"com.hg.sdk.alipay"];
    [xySDKInitModel setUppayScheme:@"com.hg.sdk.uppay"];
    [xySDKInitModel setAppId:@"100009"];
    [xySDKInitModel setAppKey:@"cZZqE43VLVjUC7YxpnBpnwrZ1NMyfuW6"];
    [[FDSDKParameters sharedHGSDKParameters] setXySDKInitModel:xySDKInitModel];
    
    // 设置互冠SDK参数
    FDHgSDKInitModel *hgSDKInitModel = [FDHgSDKInitModel new];
    [hgSDKInitModel setGameId:@"97"];
    [hgSDKInitModel setSecretKey:@"91b4416a5f93f6ad596b4e71b76ff07f"];
    [hgSDKInitModel setChannelId:@"0"];
    [hgSDKInitModel setCpId:@"4"];
    [hgSDKInitModel setWxAppId:@"wx799c5867ea4dddd3"];
    [[FDSDKParameters sharedHGSDKParameters] setHgSDKInitModel:hgSDKInitModel];
    
    // 设置果盘SDK参数
    FDGpSDKInitModel *gpSDKInitModel = [FDGpSDKInitModel new];
    [gpSDKInitModel setAppId:@"101101"];
    [gpSDKInitModel setSecretKey:@"GuopanSDK8^(Llad"];
    [[FDSDKParameters sharedHGSDKParameters] setGpSDKInitModel:gpSDKInitModel];
    
    // 设置乐游SDK参数
    FDLeYouSDKInitModel *leYouSDKInitModel = [FDLeYouSDKInitModel new];
    [leYouSDKInitModel setAppID:@"1643"];
    [leYouSDKInitModel setGameID:@"1643"];
    [[FDSDKParameters sharedHGSDKParameters] setLeYouSDKInitModel:leYouSDKInitModel];
    
    [[FDSDKParameters sharedHGSDKParameters] setFdPlatformType:FDLeYouPlatform];
    
    [[FDSDK sharedInstance] fdInitWithSDKParameters:[FDSDKParameters sharedHGSDKParameters]];
    
    return YES;
}

- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url
{
    [[FDSDK sharedInstance] fdPayResult:application openURL:url options:nil];
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options{
    
    [[FDSDK sharedInstance] fdPayResult:app openURL:url options:options];
    [[FDSDK sharedInstance] fdShareResult:app openURL:url options:options];
    
    return YES;
}

- (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window
{
    return [[FDSDK sharedInstance] supportedInterface];
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    [[FDSDK sharedInstance] fdPayResult:application openURL:url sourceApplication:sourceApplication annotation:annotation];
    return YES;
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    //升游需要
    [[FDSDK sharedInstance] fdApplication:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo
{
    //升游需要
    [[FDSDK sharedInstance] fdApplication:application didReceiveRemoteNotification:userInfo];
}
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler
{
    //升游需要
    [[FDSDK sharedInstance] fdApplication:application didReceiveRemoteNotification:userInfo fetchCompletionHandler:completionHandler];
}
- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification
{
    //升游需要
    [[FDSDK sharedInstance] fdApplication:application didReceiveLocalNotification:notification];
}
- (void)applicationWillResignActive:(UIApplication *)application
{
    //升游需要
    [[FDSDK sharedInstance] fdApplicationWillResignActive:application];
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    //升游需要
    [[FDSDK sharedInstance] fdApplicationDidEnterBackground:application];
    
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    
    [[FDSDK sharedInstance] fdWillEnterForeground:application];
    
}
- (void)applicationDidBecomeActive:(UIApplication *)application
{
    [[FDSDK sharedInstance] fdApplicationDidBecomeActive:application];
    
}

- (void)applicationWillTerminate:(UIApplication *)application {
    
    //升游需要
    [[FDSDK sharedInstance] fdApplicationWillTerminate:application];
}


@end
