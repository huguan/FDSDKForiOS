//
//  FWPay.h
//  FanWeiSdkPay
//
//  Created by 句芒 on 16/8/12.
//  Copyright © 2016年 fanwei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FWPayParam.h"

@protocol FWPayDelegate <NSObject>
@required
/**返回支付结果*/
- (void)payResult:(NSDictionary *)result andError:(NSError *)error;
/**支付页面创建完成*/
- (void)payViewDidFinishCreated:(UIView *)payView;
@end


@interface FWPay : NSObject

@property (nonatomic,weak) id<FWPayDelegate> delegate;



/**开始支付*/
-(void)startPay:(FWPayParam *)param;

/**程序加载结束*/
- (void)applicationDidFinishLaunching;
/**应用进入前台*/
- (void)applicationWillEnterForeground:(UIApplication *)application;

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url;
/**单例*/
+ (FWPay *)shareInstance;
@end
