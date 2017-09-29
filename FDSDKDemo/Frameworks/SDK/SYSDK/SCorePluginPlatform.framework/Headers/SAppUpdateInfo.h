//
//  SAppUpdateInfo.h
//
//  Created by dev on 2017/8/10.
//  Copyright © 2017年 . All rights reserved.
//

#import <SCore/SEntityBase.h>

@interface SAppUpdateInfo : SEntityBase

/** 版本代码 */
@property (nonatomic, copy) NSString *versionCode;
/** 版本名 */
@property (nonatomic, copy) NSString *versionName;
/** 更新内容 */
@property (nonatomic, copy) NSString *content;
/** APK下载地址 */
@property (nonatomic, copy) NSString *url;
/** 是否强制更新 */
@property (nonatomic) BOOL isForce;

@end
