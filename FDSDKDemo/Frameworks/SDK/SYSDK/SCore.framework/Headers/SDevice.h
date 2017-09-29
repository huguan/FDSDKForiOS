//
//  SDevice.h
//
//  Created by dev on 2017/8/8.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SDevice : NSObject

+ (NSString *)getIDFA;
+ (NSString *)getIDFV;
+ (NSString *)getMacAddress;
+ (NSString *)getIPAddress;
+ (NSString *)getNetWorkType;
+ (NSString *)getDeviceCode;
+ (NSString *)getCarrierName;
+ (NSString *)getDevice;
+ (BOOL)isJailBreak;

@end
